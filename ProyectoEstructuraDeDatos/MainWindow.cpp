#include "MainWindow.h"
#include <iostream>
#include <QMessageBox>
#include <QInputDialog>
#include <QDir>
#include "List.h"
#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;
List* lista;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
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

MainWindow::~MainWindow()
{}

void MainWindow::on_butt_toolbar_clicked() {
    ui.label_titulo->setText("Listas Enlazadas - Toolbar");
    ui.butt_toolbar->setText("Lista");
    ui.frame_opciones->show();
}

void MainWindow::on_butt_crear_lista_clicked() {
    lista = new List();
    refreshList();
    ui.label_tamano->setText(QString::number(lista->size()));
    ui.label_titulo->setText("Listas Enlazadas - Crear Lista");
    ui.butt_toolbar->setText("Toolbar");
    ui.frame_opciones->hide();
    ui.label_insertar->show();
    ui.label_eliminar->show();
    ui.txt_insertar->show();
    ui.combo_eliminar->show();
    ui.label_buscar->show();
    ui.butt_buscar->show();
    ui.txt_buscar->show();
    ui.butt_agregar->show();
    ui.butt_eliminar->show();
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
    hide_opciones_crear();
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
    int listIndex = lista->size();
    string str_input =  ui.txt_insertar->text().toStdString();
    cin >> str_input;
    stringstream s(str_input);
    int num_input;
    if ((s >> num_input).fail() || !(s >> std::ws).eof()) {
        QMessageBox::warning(this, tr("Listas Enlazadas"), tr("Dato invalido!"));
    }
    else {
        num_input = stoi(str_input);
        lista->insertNode(num_input);
        refreshList();
        ui.label_tamano->setText(QString::number(lista->size()));
    }
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
        if (lista->size() == 0)
            QMessageBox::warning(this, tr("Listas Enlazadas"), tr("La lista esta vacia!"));
        else {
            bool exists = lista->contains(valor);
            if (exists)
                QMessageBox::information(this, tr("Listas Enlazadas"), tr("Se encontro el valor ingresado!"));
            else
                QMessageBox::warning(this, tr("Listas Enlazadas"), tr("No se pudo encontrar el valor ingresado!"));
        }
    }
    ui.txt_buscar->clear();
}

void MainWindow::on_butt_eliminar_clicked() {
    
    if (ui.combo_eliminar->count() == 0) {
        QMessageBox::warning(this, tr("Listas Enlazadas"), tr("La lista esta vacia!"));
    }
    else {
        int value = stoi(ui.combo_eliminar->currentText().toStdString());
        bool exists = lista->deleteNode(value);
        if (exists) {
            QMessageBox::information(this, tr("Listas Enlazadas"), tr("Se elimino el elemento seleccionado!"));
            refreshList();
        }
        else
            QMessageBox::warning(this, tr("Listas Enlazadas"), tr("No se pudo encontrar el elemento seleccionado!"));
    }
}

void MainWindow::hide_opciones_crear() {
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

void MainWindow::refreshList() {
    QPixmap pixmap("pointer.png");
    ui.combo_eliminar->clear();    
    this->clearGraphView(ui.layout);
    ui.label_tamano->setText(QString::number(lista->size()));
    for (int i = 0; i < lista->size(); i++) {
        ui.combo_eliminar->addItem(QString::number(lista->valueAt(i)));
    }

    for (int i = 0; i < lista->size(); i++) {
        //flecha
        QLabel* pointer = new QLabel();
        pointer->setPixmap(pixmap.scaled(20,20));
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