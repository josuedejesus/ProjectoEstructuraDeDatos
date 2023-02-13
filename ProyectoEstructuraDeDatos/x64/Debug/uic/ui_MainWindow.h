/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionCrear_Lista;
    QAction *actionEditar_Lista;
    QAction *actionGuardar_Lista;
    QWidget *centralWidget;
    QLabel *label_titulo;
    QPushButton *butt_toolbar;
    QGroupBox *groupBox_menu;
    QLabel *label_insertar;
    QLineEdit *txt_insertar;
    QLabel *label_eliminar;
    QComboBox *combo_eliminar;
    QPushButton *butt_agregar;
    QPushButton *butt_eliminar;
    QLabel *label_buscar;
    QLineEdit *txt_buscar;
    QPushButton *butt_buscar;
    QFrame *frame_opciones;
    QVBoxLayout *verticalLayout;
    QPushButton *butt_crear_lista;
    QPushButton *butt_editar_lista;
    QPushButton *butt_guardar_lista;
    QLabel *label;
    QLabel *label_tamano;
    QLabel *label_archivo;
    QLabel *label_insertar_2;
    QGroupBox *groupBox;
    QFrame *frame_view;
    QScrollArea *scroll_view;
    QWidget *scroll_content;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layout;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName("MainWindowClass");
        MainWindowClass->resize(800, 500);
        MainWindowClass->setStyleSheet(QString::fromUtf8(""));
        actionCrear_Lista = new QAction(MainWindowClass);
        actionCrear_Lista->setObjectName("actionCrear_Lista");
        actionEditar_Lista = new QAction(MainWindowClass);
        actionEditar_Lista->setObjectName("actionEditar_Lista");
        actionGuardar_Lista = new QAction(MainWindowClass);
        actionGuardar_Lista->setObjectName("actionGuardar_Lista");
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName("centralWidget");
        label_titulo = new QLabel(centralWidget);
        label_titulo->setObjectName("label_titulo");
        label_titulo->setGeometry(QRect(20, 10, 251, 16));
        label_titulo->setStyleSheet(QString::fromUtf8("font: 10pt \"Segoe UI\";"));
        butt_toolbar = new QPushButton(centralWidget);
        butt_toolbar->setObjectName("butt_toolbar");
        butt_toolbar->setGeometry(QRect(10, 30, 781, 24));
        butt_toolbar->setStyleSheet(QString::fromUtf8(""));
        groupBox_menu = new QGroupBox(centralWidget);
        groupBox_menu->setObjectName("groupBox_menu");
        groupBox_menu->setGeometry(QRect(10, 140, 211, 331));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(189, 189, 189, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(222, 222, 222, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(94, 94, 94, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(126, 126, 126, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(0, 0, 0, 127));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush8(QColor(240, 240, 240, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        QBrush brush9(QColor(227, 227, 227, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        QBrush brush10(QColor(160, 160, 160, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        QBrush brush11(QColor(105, 105, 105, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush11);
        QBrush brush12(QColor(245, 245, 245, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush13(QColor(0, 0, 0, 128));
        brush13.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        groupBox_menu->setPalette(palette);
        groupBox_menu->setStyleSheet(QString::fromUtf8(""));
        label_insertar = new QLabel(groupBox_menu);
        label_insertar->setObjectName("label_insertar");
        label_insertar->setGeometry(QRect(79, 46, 40, 16));
        label_insertar->setStyleSheet(QString::fromUtf8(""));
        txt_insertar = new QLineEdit(groupBox_menu);
        txt_insertar->setObjectName("txt_insertar");
        txt_insertar->setGeometry(QRect(10, 70, 191, 21));
        txt_insertar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_eliminar = new QLabel(groupBox_menu);
        label_eliminar->setObjectName("label_eliminar");
        label_eliminar->setGeometry(QRect(79, 147, 43, 16));
        label_eliminar->setStyleSheet(QString::fromUtf8(""));
        combo_eliminar = new QComboBox(groupBox_menu);
        combo_eliminar->setObjectName("combo_eliminar");
        combo_eliminar->setGeometry(QRect(10, 170, 191, 20));
        combo_eliminar->setStyleSheet(QString::fromUtf8(""));
        butt_agregar = new QPushButton(groupBox_menu);
        butt_agregar->setObjectName("butt_agregar");
        butt_agregar->setGeometry(QRect(126, 97, 75, 24));
        butt_agregar->setStyleSheet(QString::fromUtf8(""));
        butt_eliminar = new QPushButton(groupBox_menu);
        butt_eliminar->setObjectName("butt_eliminar");
        butt_eliminar->setGeometry(QRect(126, 196, 75, 24));
        butt_eliminar->setStyleSheet(QString::fromUtf8(""));
        label_buscar = new QLabel(groupBox_menu);
        label_buscar->setObjectName("label_buscar");
        label_buscar->setGeometry(QRect(82, 246, 35, 16));
        label_buscar->setStyleSheet(QString::fromUtf8(""));
        txt_buscar = new QLineEdit(groupBox_menu);
        txt_buscar->setObjectName("txt_buscar");
        txt_buscar->setGeometry(QRect(10, 270, 191, 21));
        txt_buscar->setStyleSheet(QString::fromUtf8(""));
        butt_buscar = new QPushButton(groupBox_menu);
        butt_buscar->setObjectName("butt_buscar");
        butt_buscar->setGeometry(QRect(126, 297, 75, 24));
        butt_buscar->setStyleSheet(QString::fromUtf8(""));
        frame_opciones = new QFrame(centralWidget);
        frame_opciones->setObjectName("frame_opciones");
        frame_opciones->setEnabled(true);
        frame_opciones->setGeometry(QRect(11, 53, 121, 61));
        frame_opciones->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);\n"
"background-color: rgb(65, 129, 194);"));
        frame_opciones->setFrameShape(QFrame::StyledPanel);
        frame_opciones->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_opciones);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        butt_crear_lista = new QPushButton(frame_opciones);
        butt_crear_lista->setObjectName("butt_crear_lista");
        butt_crear_lista->setEnabled(true);
        butt_crear_lista->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(butt_crear_lista);

        butt_editar_lista = new QPushButton(frame_opciones);
        butt_editar_lista->setObjectName("butt_editar_lista");
        butt_editar_lista->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
""));

        verticalLayout->addWidget(butt_editar_lista);

        butt_guardar_lista = new QPushButton(frame_opciones);
        butt_guardar_lista->setObjectName("butt_guardar_lista");
        butt_guardar_lista->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
""));

        verticalLayout->addWidget(butt_guardar_lista);

        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(600, 90, 91, 16));
        label_tamano = new QLabel(centralWidget);
        label_tamano->setObjectName("label_tamano");
        label_tamano->setGeometry(QRect(690, 90, 101, 20));
        label_archivo = new QLabel(centralWidget);
        label_archivo->setObjectName("label_archivo");
        label_archivo->setGeometry(QRect(690, 60, 101, 16));
        label_insertar_2 = new QLabel(centralWidget);
        label_insertar_2->setObjectName("label_insertar_2");
        label_insertar_2->setGeometry(QRect(600, 60, 91, 16));
        label_insertar_2->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(230, 140, 531, 331));
        frame_view = new QFrame(groupBox);
        frame_view->setObjectName("frame_view");
        frame_view->setGeometry(QRect(0, 20, 531, 301));
        frame_view->setFrameShape(QFrame::StyledPanel);
        frame_view->setFrameShadow(QFrame::Raised);
        scroll_view = new QScrollArea(frame_view);
        scroll_view->setObjectName("scroll_view");
        scroll_view->setGeometry(QRect(0, 0, 531, 301));
        scroll_view->setWidgetResizable(true);
        scroll_content = new QWidget();
        scroll_content->setObjectName("scroll_content");
        scroll_content->setGeometry(QRect(0, 0, 529, 299));
        verticalLayoutWidget = new QWidget(scroll_content);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 531, 301));
        layout = new QVBoxLayout(verticalLayoutWidget);
        layout->setSpacing(20);
        layout->setContentsMargins(11, 11, 11, 11);
        layout->setObjectName("layout");
        layout->setSizeConstraint(QLayout::SetNoConstraint);
        layout->setContentsMargins(200, 10, 200, 10);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout->addItem(verticalSpacer);

        scroll_view->setWidget(scroll_content);
        MainWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName("statusBar");
        MainWindowClass->setStatusBar(statusBar);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
        actionCrear_Lista->setText(QCoreApplication::translate("MainWindowClass", "Crear Lista", nullptr));
        actionEditar_Lista->setText(QCoreApplication::translate("MainWindowClass", "Editar Lista (abrir)", nullptr));
        actionGuardar_Lista->setText(QCoreApplication::translate("MainWindowClass", "Guardar Lista", nullptr));
        label_titulo->setText(QCoreApplication::translate("MainWindowClass", "Listas Enlazadas - Pantalla Principal", nullptr));
        butt_toolbar->setText(QCoreApplication::translate("MainWindowClass", "Toolbar", nullptr));
        groupBox_menu->setTitle(QCoreApplication::translate("MainWindowClass", "Menu", nullptr));
        label_insertar->setText(QCoreApplication::translate("MainWindowClass", "Insertar", nullptr));
        label_eliminar->setText(QCoreApplication::translate("MainWindowClass", "Eliminar", nullptr));
        butt_agregar->setText(QCoreApplication::translate("MainWindowClass", "Agregar", nullptr));
        butt_eliminar->setText(QCoreApplication::translate("MainWindowClass", "Eliminar", nullptr));
        label_buscar->setText(QCoreApplication::translate("MainWindowClass", "Buscar", nullptr));
        butt_buscar->setText(QCoreApplication::translate("MainWindowClass", "Buscar", nullptr));
        butt_crear_lista->setText(QCoreApplication::translate("MainWindowClass", "Crear Lista", nullptr));
        butt_editar_lista->setText(QCoreApplication::translate("MainWindowClass", "Editar Lista (abrir)", nullptr));
        butt_guardar_lista->setText(QCoreApplication::translate("MainWindowClass", "Guardar Lista", nullptr));
        label->setText(QCoreApplication::translate("MainWindowClass", "Tamano de Lista:", nullptr));
        label_tamano->setText(QString());
        label_archivo->setText(QString());
        label_insertar_2->setText(QCoreApplication::translate("MainWindowClass", "Nombre de Lista:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindowClass", "Graphics View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
