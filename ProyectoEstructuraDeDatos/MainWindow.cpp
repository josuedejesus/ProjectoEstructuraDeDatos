#include "MainWindow.h"
#include <iostream>
#include <QMessageBox>
#include <QInputDialog>
#include <QDir>
#include "List.h"
#include "Queue.h"
#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;
enum ESTRUCTURA
{
    LISTA, QUEUE, STACK
};
List* lista;
Queue* queue;
int estructura = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.rb_listaEnlazada->setChecked(true);
    hideMenu();
}

MainWindow::~MainWindow()
{}

void MainWindow::on_rb_listaEnlazada_clicked() {
    estructura = LISTA;
    ui.label_titulo->setText("Listas Enlazadas - Toolbar");
    ui.butt_toolbar->setText("Toolbar");
    ui.frame_opciones->hide();
    hideMenu();
}

void MainWindow::on_rb_queue_clicked() {
    estructura = QUEUE;
    ui.label_titulo->setText("Queue - Toolbar");
    ui.butt_toolbar->setText("Toolbar");
    ui.frame_opciones->hide();
    hideMenu();
}

void MainWindow::on_rb_stack_clicked() {
    estructura = STACK;
    ui.label_titulo->setText("Stack - Toolbar");
    ui.butt_toolbar->setText("Toolbar");
    ui.frame_opciones->hide();
    hideMenu();
}

void MainWindow::on_butt_toolbar_clicked() {
    switch (estructura) {
    case LISTA:
        ui.label_titulo->setText("Listas Enlazadas - Toolbar");
        ui.butt_toolbar->setText("Lista");
        ui.frame_opciones->show();
        break;
    case QUEUE:
        ui.label_titulo->setText("Queue - Toolbar");
        ui.butt_toolbar->setText("Queue");
        ui.frame_opciones->show();
        break;
    case STACK: 
        ui.label_titulo->setText("Stack - Toolbar");
        ui.butt_toolbar->setText("Stack");
        ui.frame_opciones->show();
        break;
    }
}

void MainWindow::on_butt_crear_lista_clicked() {
    switch (estructura) {
    case LISTA:
        lista = new List();
        ui.label_titulo->setText("Listas Enlazadas - Crear Lista");
        ui.butt_toolbar->setText("Toolbar");
        refreshList();
        showMenu();
        break;
    case QUEUE:
        queue = new Queue();
        ui.label_titulo->setText("Queue - Crear Lista");
        ui.butt_toolbar->setText("Toolbar");
        refreshList();
        showMenu();
        break;
    case STACK:
        refreshList();
        showMenu();
    }
}

void MainWindow::on_butt_editar_lista_clicked() {
    ui.label_titulo->setText("Listas Enlazadas - Editar Lista");
    ui.butt_toolbar->setText("Toolbar");
    //hide_opciones_crear();
}

void MainWindow::on_butt_guardar_lista_clicked() {
    bool ok;
    ui.label_titulo->setText("Listas Enlazadas - Guardar Lista");
    ui.butt_toolbar->setText("Toolbar");
    hideMenu();
    QString nameInput = QInputDialog::getText(this, tr("Listas Enlazadas"), tr("Nombre de archivo:"), QLineEdit::Normal, QDir::home().dirName(), &ok);
    string fileName = nameInput.toStdString() + ".csv";
    if (ok && !nameInput.isEmpty()) {
        ofstream outFile (fileName);
        while (outFile.is_open()) {
            for (int i = 0; i < lista->size(); i++) {
                outFile << lista->valueAt(i) << "\n";
            }
            outFile.close();
        }
        QMessageBox::information(this, tr("Listas Enlazadas"), tr("Archivo creado exitosamente!"));
    }    
}

void MainWindow::on_butt_agregar_clicked() {
    QVBoxLayout* layout = new QVBoxLayout(this);
    string str_input = ui.txt_insertar->text().toStdString();
    cin >> str_input;
    stringstream s(str_input);
    int num_input;
    if ((s >> num_input).fail() || !(s >> std::ws).eof()) {
        QMessageBox::warning(this, tr("Listas Enlazadas"), tr("Dato invalido!"));
    }
    else {
        switch (estructura) {
        case LISTA:
            num_input = stoi(str_input);
            lista->insertNode(num_input);
            ui.label_tamano->setText(QString::number(lista->size()));
            break;
        case QUEUE:
            num_input = stoi(str_input);
            queue->enqueue(num_input);
            ui.label_tamano->setText(QString::number(queue->getSize()));
            break;
        }
    }
    refreshList();
    ui.txt_insertar->clear();
}

void MainWindow::on_butt_buscar_clicked() {
    string str_valor = ui.txt_buscar->text().toStdString();
    cin >> str_valor;
    stringstream s(str_valor);
    int valor;
    if ((s >> valor).fail() || !(s >> std::ws).eof()) {
        QMessageBox::warning(this, tr("Listas Enlazadas"), tr("Dato invalido!"));
    }
    else {
        valor = stoi(str_valor);
        switch (estructura) {
        case LISTA:
            if (lista->size() == 0)
                QMessageBox::warning(this, tr("Buscar"), tr("La lista esta vacia!"));
            else {
                bool exists = lista->contains(valor);
                if (exists)
                    QMessageBox::information(this, tr("Buscar"), tr("Se encontro el valor ingresado!"));
                else
                    QMessageBox::warning(this, tr("Buscar"), tr("No se pudo encontrar el valor ingresado!"));
            }
            break;
        case QUEUE:
            if (queue->getSize() == 0) {
                QMessageBox::warning(this, tr("Buscar"), tr("La lista esta vacia!"));
            }
            else {
                bool exists = queue->contains(valor);
                if (exists)
                    QMessageBox::information(this, tr("Buscar"), tr("Se encontro el valor ingresado!"));
                else
                    QMessageBox::warning(this, tr("Buscar"), tr("No se pudo encontrar el valor ingresado!"));
            }
            break;
        }        
    }
    ui.txt_buscar->clear();
}

void MainWindow::on_butt_eliminar_clicked() {
    switch (estructura) {
    case LISTA:
        if (ui.combo_eliminar->count() == 0) {
            QMessageBox::warning(this, tr("Eliminar"), tr("La lista esta vacia!"));
        }
        else {
            int value = stoi(ui.combo_eliminar->currentText().toStdString());
            bool exists = lista->deleteNode(value);
            if (exists) {
                refreshList();
                QMessageBox::information(this, tr("Eliminar"), tr("Se elimino el elemento seleccionado!"));
            }
            else
                QMessageBox::warning(this, tr("Eliminar"), tr("No se pudo encontrar el elemento seleccionado!"));
        }
        break;
    case QUEUE:
        if (queue->getSize() == 0) {
            QMessageBox::warning(this, tr("Dequeue"), tr("La lista esta vacia!"));
        }
        else {
            queue->dequeue();
            refreshList();
            QMessageBox::information(this, tr("Dequeue"), tr("Dequeue"));            
        }
        break;
    }
    
}


void MainWindow::hideMenu() {
    ui.frame_opciones->hide();
    ui.label_insertar->hide();
    ui.label_eliminar->hide();
    ui.txt_insertar->hide();
    ui.combo_eliminar->hide();
    ui.label_buscar->hide();
    ui.butt_buscar->hide();
    ui.txt_buscar->hide();
    ui.butt_agregar->hide();
    ui.butt_eliminar->hide();
}

void MainWindow::showMenu() {
    ui.frame_opciones->hide();
    ui.label_buscar->show();
    ui.txt_buscar->show();
    ui.butt_buscar->show();
    switch (estructura) {
    case LISTA:
        ui.label_insertar->setText("Insertar");
        ui.label_insertar->show();
        ui.txt_insertar->show();
        ui.butt_agregar->setText("Insertar");
        ui.butt_agregar->show();

        ui.label_eliminar->setText("Eliminar");
        ui.label_eliminar->show();
        ui.combo_eliminar->show();
        ui.butt_eliminar->setText("Eliminar");
        ui.butt_eliminar->show();
        break;
    case QUEUE:
        ui.label_insertar->setText("Enqueue");
        ui.label_insertar->show();
        ui.txt_insertar->show();
        ui.butt_agregar->setText("Enqueue");
        ui.butt_agregar->show();

        ui.butt_eliminar->setText("Dequeue");
        ui.butt_eliminar->show();
        break;
    case STACK:
        ui.label_insertar->setText("Push");
        ui.label_insertar->show();
        ui.txt_insertar->show();
        ui.butt_agregar->setText("Push");
        ui.butt_agregar->show();

        ui.butt_eliminar->setText("Pop");
        ui.butt_eliminar->show();
        break;
    }
}

void MainWindow::refreshList() {
    QPixmap pixmap("pointer.png");
    ui.combo_eliminar->clear();    
    this->clearGraphView(ui.layout);
    switch (estructura)
    {
    case LISTA:
        ui.label_tamano->setText(QString::number(lista->size()));
        for (int i = 0; i < lista->size(); i++) {
            ui.combo_eliminar->addItem(QString::number(lista->valueAt(i)));
        }

        for (int i = 0; i < lista->size(); i++) {
            //flecha
            QLabel* pointer = new QLabel();
            pointer->setPixmap(pixmap.scaled(20, 20));
            pointer->setAlignment(Qt::AlignCenter);

            QLabel* label = new QLabel(QString::number(lista->valueAt(i)));
            label->setAlignment(Qt::AlignCenter);
            if (i == lista->size() - 1)
                label->setStyleSheet("QLabel { background-color : green; color : white; border-radius: 5px; min-height : 40px; max-height : 40px; font-size : 15px;}");
            else
                label->setStyleSheet("QLabel { background-color : gray; color : white; border-radius: 5px; min-height : 40px; max-height : 40px; font-size : 15px;}");

            ui.layout->insertWidget(0, pointer);
            ui.layout->insertWidget(0, label);
        }
        break;
    case QUEUE:
        ui.label_tamano->setText(QString::number(queue->getSize()));
        for (int i = 0; i < queue->getSize(); i++) {
            //flecha
            QLabel* pointer = new QLabel();
            pointer->setPixmap(pixmap.scaled(20, 20));
            pointer->setAlignment(Qt::AlignCenter);

            QLabel* label = new QLabel(QString::number(queue->getValue(i)));
            label->setAlignment(Qt::AlignCenter);
            if (i == 0)
                label->setStyleSheet("QLabel { background-color : green; color : white; border-radius: 5px; min-height : 40px; max-height : 40px; font-size : 15px;}");
            else
                label->setStyleSheet("QLabel { background-color : gray; color : white; border-radius: 5px; min-height : 40px; max-height : 40px; font-size : 15px;}");
            ui.layout->addWidget(label);
            ui.layout->addWidget(pointer);
        }
        break;
    }
    QLabel* null_node = new QLabel("NULL");
    null_node->setAlignment(Qt::AlignCenter);
    null_node->setStyleSheet("QLabel { background-color : blue; color : white; border-radius: 10px; min-height : 40px; max-height : 40px; font-size : 15px;}");
    ui.layout->addWidget(null_node);
    ui.scroll_content->setLayout(ui.layout);
}

void MainWindow::clearGraphView(QLayout* layout) {
    if (layout == NULL)
        return;
    QLayoutItem* item;
    while ((item = layout->takeAt(0))) {
        if (item->layout()) {
            clearGraphView(item->layout());
            delete item->layout();
        }
        if (item->widget()) {
            delete item->widget();
        }
        delete item;
    }
}