#include "MainWindow.h"
#include <iostream>
#include <QMessageBox>
#include "List.h"
#include <sstream>
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
    hide_opciones_crear();
}

void MainWindow::on_butt_guardar_lista_clicked() {
    ui.label_titulo->setText("Listas Enlazadas - Editar Lista");
    ui.butt_toolbar->setText("Toolbar");
    hide_opciones_crear();
}

void MainWindow::on_butt_agregar_clicked() {
    int listIndex = lista->size();
    string str_input =  ui.txt_insertar->text().toStdString();
    cin >> str_input;
    stringstream s(str_input);
    int num_input;
    try {
        if ((s >> num_input).fail() || !(s >> std::ws).eof()) {
            QMessageBox::warning(this, tr("Listas Enlazadas"), tr("Dato invalido!"));
        }
        else {
            num_input = stoi(str_input);
            lista->insertNode(num_input);
            QLabel* label = new QLabel();
            label->setText(QString::number(num_input));
            label->setMinimumWidth(20);
            ui.verticalLayout_2->addWidget(label);

            //agrega elementos de la lista al combobox
            refreshList();

            //QMessageBox::information(this, tr("Listas Enlazadas"), tr("Agregado exitosamente!"));
            ui.label_tamano->setText(QString::number(lista->size()));
        }
    }
    catch (int i){

    }
    ui.txt_insertar->clear();
}

void MainWindow::on_butt_buscar_clicked() {
    string str_valor = ui.txt_buscar->text().toStdString();
    cin >> str_valor;
    stringstream s(str_valor);
    int valor;
    try {
        if ((s >> valor).fail() || !(s >> std::ws).eof()) {
            QMessageBox::warning(this, tr("Listas Enlazadas"), tr("Dato invalido!"));
        }
        else {
            valor = stoi(str_valor);
            if (lista->size() == 0)
                QMessageBox::warning(this, tr("Listas Enlazadas"), tr("La lista esta vacia!"));
            else {
                bool exists = lista->contains(valor);
                if (exists == true)
                    QMessageBox::information(this, tr("Listas Enlazadas"), tr("Se encontro el valor ingresado!"));
                else
                    QMessageBox::warning(this, tr("Listas Enlazadas"), tr("No se pudo encontrar el valor ingresado!"));
            }
        }
    }
    catch (int i) {

    }
    ui.txt_buscar->clear();
}

void MainWindow::on_butt_eliminar_clicked() {
    int value = stoi(ui.combo_eliminar->currentText().toStdString());
    bool exists = lista->deleteNode(value);
    if (exists) {
        QMessageBox::information(this, tr("Listas Enlazadas"), tr("Se elimino el elemento seleccionado!"));
        refreshList();
    }
    else
        QMessageBox::warning(this, tr("Listas Enlazadas"), tr("No se pudo encontrar el elemento seleccionado!"));
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
    ui.combo_eliminar->clear();
    for (int i = 0; i < lista->size(); i++) {
        ui.combo_eliminar->addItem(QString::number(lista->valueAt(i)));
    }
}
