#include "MainWindow.h"
#include <iostream>
#include <QMessageBox>
#include <QInputDialog>
#include <QDir>
#include <QFileDialog>
#include "List.h"
#include "Queue.h"
#include "Stack.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string structure_name = "";
List* lista;
Queue* queue;
Stack* stack;
int structure = 0;
QString str_agregar = "";
QString str_eliminar = "";
QString str_structure = "";
enum STRUCTURE { LIST, QUEUE, STACK };

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    hideMenu();
    connect(ui.combo_opciones, SIGNAL(activated(int)), this, SLOT(enableActions(int)));
}

MainWindow::~MainWindow()
{}

void MainWindow::on_rb_list_clicked() {
    structure = LIST;
    hideMenu();
    clearGraphView(ui.layout);
    str_structure = "List";
    str_agregar = "Agregar";
    str_eliminar = "Eliminar";
    ui.label_titulo->setText(str_structure + " - Pantalla Principal");
}

void MainWindow::on_rb_queue_clicked() {
    structure = QUEUE;
    hideMenu();
    clearGraphView(ui.layout);
    str_structure = "Queue";
    str_agregar = "Enqueue";
    str_eliminar = "Dequeue";
    ui.label_titulo->setText(str_structure + " - Pantalla Principal");
}

void MainWindow::on_rb_stack_clicked() {
    structure = STACK;
    hideMenu();
    clearGraphView(ui.layout);
    str_structure = "Stack";
    str_agregar = "Push";
    str_eliminar = "Pop";
    ui.label_titulo->setText(str_structure + " - Pantalla Principal");
}

void MainWindow::on_butt_toolbar_clicked() {
    if (!(ui.rb_list->isChecked() || ui.rb_queue->isChecked() || ui.rb_stack->isChecked())) {
        QMessageBox::warning(this, tr("Toolbar"), tr("Debe selecionar una estructura!"));
    }
    else {
        ui.butt_toolbar->setText(str_structure);
        ui.label_titulo->setText(str_structure + " - Toolbar");
        ui.combo_opciones->showPopup();
    }
}

void MainWindow::on_butt_agregar_clicked() {
    string input = ui.txt_insertar->text().toStdString();
    if (!validateInput(input)) {
        QMessageBox::warning(this, tr("Listas Enlazadas"), tr("Dato invalido!"));
    }
    else {
        switch (structure) {
        case LIST:
            lista->insertNode(stoi(input));
            break;
        case QUEUE:
            queue->enqueue(stoi(input));
            break;
        case STACK:
            stack->push(stoi(input));
            break;
        }
    }
    refreshList();
    ui.txt_insertar->clear();
}

void MainWindow::on_butt_eliminar_clicked() {
    string valor = "";
    switch (structure) {
    case LIST:
        if (ui.combo_eliminar->count() == 0) {
            QMessageBox::warning(this, tr("Eliminar"), tr("La lista esta vacia!"));
        }
        else {
            int value = stoi(ui.combo_eliminar->currentText().toStdString());
            if (lista->deleteNode(value)) {
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
            valor = to_string(queue->dequeue());
            refreshList();
            QMessageBox::information(this, tr("Dequeue"), tr(valor.c_str()));
        }
        break;
    case STACK:
        if (stack->getSize() == 0) {
            QMessageBox::warning(this, tr("Pop"), tr("La lista esta vacia!"));
        }
        else {
            valor = to_string(stack->pop());
            refreshList();
            QMessageBox::information(this, tr("Pop"), tr(valor.c_str()));
        }
        break;
    }
    
}

void MainWindow::on_butt_buscar_clicked() {
    auto list = lista;
    string input = ui.txt_buscar->text().toStdString();
    if (!validateInput(input)) {
        QMessageBox::warning(this, tr("Listas Enlazadas"), tr("Dato invalido!"));
    }
    else {
        int size = 0;
        bool exists = false;

        switch (structure) {
        case LIST:
            size = lista->getSize();
            exists = lista->exists(stoi(input));
            break;
        case QUEUE:
            size = queue->getSize();
            exists = queue->exists(stoi(input));
            
            break;
        case STACK :
            size = stack->getSize();
            exists = stack->exists(stoi(input));
            break;
        }
        if (size == 0) {
            QMessageBox::warning(this, tr("Buscar"), tr("La lista esta vacia!"));
        }
        else {
            if (exists)
                QMessageBox::information(this, tr("Buscar"), tr("Se encontro el valor ingresado!"));
            else
                QMessageBox::warning(this, tr("Buscar"), tr("No se pudo encontrar el valor ingresado!"));
        }
    }
    ui.txt_buscar->clear();
}

void MainWindow::showMenu() {
    ui.label_insertar->show();
    ui.label_eliminar->show();
    ui.label_buscar->show();
    ui.label_insertar->setText(str_agregar);
    ui.label_eliminar->setText(str_eliminar);
    ui.label_buscar->setText("Buscar");
    ui.txt_insertar->show();
    if (structure == LIST)
        ui.combo_eliminar->show();
    ui.txt_buscar->show();
    ui.butt_agregar->show();
    ui.butt_eliminar->show();
    ui.butt_buscar->show();
    ui.butt_agregar->setText(str_agregar);
    ui.butt_eliminar->setText(str_eliminar);
    ui.butt_buscar->setText("Buscar");
    ui.label_titulo->setText(str_structure);
    ui.butt_toolbar->setText(str_structure);
}

void MainWindow::hideMenu() {
    ui.label_insertar->hide();
    ui.label_eliminar->hide();
    ui.txt_insertar->hide();
    ui.combo_eliminar->hide();
    ui.label_buscar->hide();
    ui.butt_buscar->hide();
    ui.txt_buscar->hide();
    ui.butt_agregar->hide();
    ui.butt_eliminar->hide();
    ui.label_nombre_archivo->setText("");
}

void MainWindow::enableActions(int index) {
    switch (index) {
    case 0:
        initializeList();
        showMenu();
        refreshList();
        ui.label_titulo->setText(str_structure + " - Crear Lista");
        break;
    case 1:
        ui.label_titulo->setText(str_structure + " - Editar Lista");
        openFile();
        showMenu();
        break;
    case 2:
        createFile();
        break;
    }
}

void MainWindow::refreshList() {
    QLabel* null_node = new QLabel("NULL");
    QLabel* pointer_down;
    QLabel* label;
    null_node->setAlignment(Qt::AlignCenter);
    null_node->setStyleSheet("QLabel { background-color : blue; color : white; border-radius: 20px; min-height : 40px; max-height : 40px; font-size : 15px;}");
    QPixmap pixmap_pointer_down("pointer.png");
    QPixmap pixmap_pointer_up("pointer-up.png");
    ui.combo_eliminar->clear();    
    this->clearGraphView(ui.layout);
    switch (structure)
    {
    case LIST:
        for (int i = 0; i < lista->getSize(); i++) {
            ui.combo_eliminar->addItem(QString::number(lista->valueAt(i)));
        }
        for (int i = 0; i < lista->getSize(); i++) {
            pointer_down = new QLabel();
            pointer_down->setPixmap(pixmap_pointer_down.scaled(40, 40));
            pointer_down->setAlignment(Qt::AlignCenter);
            label = new QLabel(QString::number(lista->valueAt(i)));
            label->setAlignment(Qt::AlignCenter);
            if (i == 0)
                label->setStyleSheet("QLabel { background-color : green; color: white; border-radius: 5px; min-height : 40px; max-height : 40px; min-width : 90px; max-width : 90px; font-size : 15px;}");
            else
                label->setStyleSheet("QLabel { background-color : gray; color : white; border-radius: 5px; min-height : 40px; max-height : 40px; min-width : 90px; max-width : 90px; font-size : 15px;}");
            ui.layout->addWidget(label);
            ui.layout->addWidget(pointer_down);
        }
        break;
    case QUEUE:
        for (int i = 0; i < queue->getSize(); i++) {
            pointer_down = new QLabel();
            pointer_down->setPixmap(pixmap_pointer_down.scaled(40, 40));
            pointer_down->setAlignment(Qt::AlignCenter);
            label = new QLabel(QString::number(queue->print(i)));
            label->setAlignment(Qt::AlignCenter);
            if (i == 0) 
                label->setStyleSheet("QLabel { background-color : green; color: white; border-radius: 5px; min-height : 40px; max-height : 40px; min-width : 90px; max-width : 90px; font-size : 15px;}");
            else
                label->setStyleSheet("QLabel { background-color : gray; color : white; border-radius: 5px; min-height : 40px; max-height : 40px; min-width : 90px; max-width : 90px; font-size : 15px;}");
            ui.layout->addWidget(label);
            ui.layout->addWidget(pointer_down);
        }
        break;
    case STACK:
        for (int i = 0; i < stack->getSize(); i++) {
            pointer_down = new QLabel();
            pointer_down->setPixmap(pixmap_pointer_down.scaled(40, 40));
            pointer_down->setAlignment(Qt::AlignCenter);
            label = new QLabel(QString::number(stack->print(i)));
            label->setAlignment(Qt::AlignCenter);
            if (i == 0)
                label->setStyleSheet("QLabel { background-color : green; color: white; border-radius: 5px; min-height : 40px; max-height : 40px; min-width : 90px; max-width : 90px; font-size : 15px;}");
            else
                label->setStyleSheet("QLabel { background-color : gray; color : white; border-radius: 5px; min-height : 40px; max-height : 40px; min-width : 90px; max-width : 90px; font-size : 15px;}");
            ui.layout->insertWidget(0, pointer_down);
            ui.layout->insertWidget(0, label);
        }
        
        break;
    }    
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

void MainWindow::initializeList() {
    switch (structure) {
        case LIST:
            lista = new List();
            break;
        case QUEUE:
            queue = new Queue();
            break;
        case STACK:
            stack = new Stack();
            break;
    }
}

bool MainWindow::validateInput(string input) {
    bool isInteger = true;
    int inputNum;
    stringstream ss(input);
    if (!(ss >> inputNum) || !(ss >> std::ws).eof()) {
        isInteger = false;
    }
    return isInteger;
}

void MainWindow::createFile() {
    bool ok;
    QString existing_file = ui.label_nombre_archivo->text();
    QString file_name;
    if (existing_file.isEmpty())
        file_name = QFileDialog::getSaveFileName(this, "Guardar Archivo", " ", "All Files (*.csv)");
    else
        file_name = QFileDialog::getSaveFileName(this, "Guardar Archivo", existing_file, "All Files (*.csv)");
    if (ok && !file_name.isEmpty()) {
        ofstream outFile(file_name.toStdString());
        while (outFile.is_open()) {
            switch (structure) {
            case LIST:
                for (int i = 0; i < lista->getSize(); i++) {
                    outFile << lista->valueAt(i) << "\n";
                }
                break;
            case QUEUE:
                for (int i = 0; i < queue->getSize(); i++) {
                    outFile << queue->print(i) << "\n";
                }
                break;
            case STACK:
                for (int i = 0; i < stack->getSize(); i++) {
                    outFile << stack->print(i) << "\n";
                }
                break;
            }
            outFile.close();
        }
    }
    clearGraphView(ui.layout);
    hideMenu();
    QMessageBox::information(this, tr("Guardar"), tr("Archivo guardado exitosamente!"));
}

void MainWindow::openFile() {
    lista = new List();
    queue = new Queue();
    stack = new Stack();
    string data;
    QString file_dir = QFileDialog::getOpenFileName(this, "Abrir Archivo", " ", "All Files (*.csv)");
    ifstream inFile;
    ui.label_nombre_archivo->setText(file_dir.section('/', -1));
    inFile.open(file_dir.toStdString());
    while (getline(inFile, data))
    {
        switch (structure) {
        case LIST:
            lista->insertNode(stoi(data));
            break;
        case QUEUE:            
            queue->enqueue(stoi(data));
            break;
        case STACK:
            stack->push(stoi(data));
            break;
        }
    }
    inFile.close();
    refreshList();
}

