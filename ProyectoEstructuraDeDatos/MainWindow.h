#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_butt_toolbar_clicked();
    void on_butt_crear_lista_clicked();
    void on_butt_editar_lista_clicked();
    void on_butt_guardar_lista_clicked();
    void on_butt_agregar_clicked();
    void on_butt_buscar_clicked();
    void on_butt_eliminar_clicked();
    void hide_opciones_crear();
    void refreshList();
private:
    Ui::MainWindowClass ui;
};
