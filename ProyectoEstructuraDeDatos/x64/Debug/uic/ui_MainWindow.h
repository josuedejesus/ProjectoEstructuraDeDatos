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
#include <QtWidgets/QRadioButton>
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
    QGroupBox *groupBox_menu;
    QLineEdit *txt_buscar;
    QLabel *label_buscar;
    QPushButton *butt_buscar;
    QComboBox *combo_eliminar;
    QLabel *label_eliminar;
    QPushButton *butt_eliminar;
    QLabel *label_insertar;
    QLineEdit *txt_insertar;
    QPushButton *butt_agregar;
    QGroupBox *groupBox;
    QFrame *frame_view;
    QScrollArea *scroll_view;
    QWidget *scroll_content;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layout;
    QSpacerItem *verticalSpacer;
    QRadioButton *rb_list;
    QRadioButton *rb_queue;
    QRadioButton *rb_stack;
    QComboBox *combo_opciones;
    QPushButton *butt_toolbar;
    QLabel *label_nombre;
    QLabel *label_nombre_archivo;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName("MainWindowClass");
        MainWindowClass->resize(800, 500);
        MainWindowClass->setStyleSheet(QString::fromUtf8(""));
        actionCrear_Lista = new QAction(MainWindowClass);
        actionCrear_Lista->setObjectName("actionCrear_Lista");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("list-add")));
        actionCrear_Lista->setIcon(icon);
        actionEditar_Lista = new QAction(MainWindowClass);
        actionEditar_Lista->setObjectName("actionEditar_Lista");
        actionGuardar_Lista = new QAction(MainWindowClass);
        actionGuardar_Lista->setObjectName("actionGuardar_Lista");
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName("centralWidget");
        label_titulo = new QLabel(centralWidget);
        label_titulo->setObjectName("label_titulo");
        label_titulo->setGeometry(QRect(20, 10, 211, 16));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        label_titulo->setFont(font);
        label_titulo->setStyleSheet(QString::fromUtf8(""));
        groupBox_menu = new QGroupBox(centralWidget);
        groupBox_menu->setObjectName("groupBox_menu");
        groupBox_menu->setGeometry(QRect(20, 140, 201, 331));
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
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        groupBox_menu->setFont(font1);
        groupBox_menu->setLayoutDirection(Qt::LeftToRight);
        groupBox_menu->setStyleSheet(QString::fromUtf8(""));
        groupBox_menu->setAlignment(Qt::AlignCenter);
        txt_buscar = new QLineEdit(groupBox_menu);
        txt_buscar->setObjectName("txt_buscar");
        txt_buscar->setGeometry(QRect(11, 250, 181, 21));
        txt_buscar->setStyleSheet(QString::fromUtf8(""));
        label_buscar = new QLabel(groupBox_menu);
        label_buscar->setObjectName("label_buscar");
        label_buscar->setGeometry(QRect(3, 228, 195, 20));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_buscar->sizePolicy().hasHeightForWidth());
        label_buscar->setSizePolicy(sizePolicy);
        label_buscar->setFont(font1);
        label_buscar->setStyleSheet(QString::fromUtf8(""));
        label_buscar->setAlignment(Qt::AlignCenter);
        butt_buscar = new QPushButton(groupBox_menu);
        butt_buscar->setObjectName("butt_buscar");
        butt_buscar->setGeometry(QRect(116, 277, 75, 24));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(butt_buscar->sizePolicy().hasHeightForWidth());
        butt_buscar->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setBold(true);
        butt_buscar->setFont(font2);
        butt_buscar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        combo_eliminar = new QComboBox(groupBox_menu);
        combo_eliminar->setObjectName("combo_eliminar");
        combo_eliminar->setGeometry(QRect(11, 149, 181, 21));
        combo_eliminar->setStyleSheet(QString::fromUtf8(""));
        label_eliminar = new QLabel(groupBox_menu);
        label_eliminar->setObjectName("label_eliminar");
        label_eliminar->setGeometry(QRect(3, 127, 195, 20));
        sizePolicy.setHeightForWidth(label_eliminar->sizePolicy().hasHeightForWidth());
        label_eliminar->setSizePolicy(sizePolicy);
        label_eliminar->setFont(font1);
        label_eliminar->setStyleSheet(QString::fromUtf8(""));
        label_eliminar->setAlignment(Qt::AlignCenter);
        butt_eliminar = new QPushButton(groupBox_menu);
        butt_eliminar->setObjectName("butt_eliminar");
        butt_eliminar->setGeometry(QRect(116, 176, 75, 24));
        sizePolicy1.setHeightForWidth(butt_eliminar->sizePolicy().hasHeightForWidth());
        butt_eliminar->setSizePolicy(sizePolicy1);
        butt_eliminar->setFont(font2);
        butt_eliminar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 137, 137);"));
        label_insertar = new QLabel(groupBox_menu);
        label_insertar->setObjectName("label_insertar");
        label_insertar->setGeometry(QRect(3, 27, 195, 20));
        sizePolicy.setHeightForWidth(label_insertar->sizePolicy().hasHeightForWidth());
        label_insertar->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        font3.setStyleStrategy(QFont::PreferDefault);
        label_insertar->setFont(font3);
        label_insertar->setStyleSheet(QString::fromUtf8(""));
        label_insertar->setAlignment(Qt::AlignCenter);
        txt_insertar = new QLineEdit(groupBox_menu);
        txt_insertar->setObjectName("txt_insertar");
        txt_insertar->setGeometry(QRect(11, 49, 181, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txt_insertar->sizePolicy().hasHeightForWidth());
        txt_insertar->setSizePolicy(sizePolicy2);
        txt_insertar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        butt_agregar = new QPushButton(groupBox_menu);
        butt_agregar->setObjectName("butt_agregar");
        butt_agregar->setEnabled(true);
        butt_agregar->setGeometry(QRect(116, 76, 75, 24));
        sizePolicy1.setHeightForWidth(butt_agregar->sizePolicy().hasHeightForWidth());
        butt_agregar->setSizePolicy(sizePolicy1);
        butt_agregar->setBaseSize(QSize(0, 0));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        butt_agregar->setFont(font4);
        butt_agregar->setLayoutDirection(Qt::LeftToRight);
        butt_agregar->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 255, 84);"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(230, 140, 550, 331));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(false);
        groupBox->setFont(font5);
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8(""));
        groupBox->setAlignment(Qt::AlignCenter);
        frame_view = new QFrame(groupBox);
        frame_view->setObjectName("frame_view");
        frame_view->setGeometry(QRect(0, 20, 550, 311));
        frame_view->setFrameShape(QFrame::StyledPanel);
        frame_view->setFrameShadow(QFrame::Raised);
        scroll_view = new QScrollArea(frame_view);
        scroll_view->setObjectName("scroll_view");
        scroll_view->setGeometry(QRect(0, 0, 550, 311));
        scroll_view->setWidgetResizable(true);
        scroll_content = new QWidget();
        scroll_content->setObjectName("scroll_content");
        scroll_content->setGeometry(QRect(0, 0, 548, 309));
        verticalLayoutWidget = new QWidget(scroll_content);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 551, 311));
        layout = new QVBoxLayout(verticalLayoutWidget);
        layout->setSpacing(2);
        layout->setContentsMargins(11, 11, 11, 11);
        layout->setObjectName("layout");
        layout->setSizeConstraint(QLayout::SetNoConstraint);
        layout->setContentsMargins(230, 10, 230, 10);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout->addItem(verticalSpacer);

        scroll_view->setWidget(scroll_content);
        rb_list = new QRadioButton(centralWidget);
        rb_list->setObjectName("rb_list");
        rb_list->setGeometry(QRect(320, 10, 51, 20));
        rb_queue = new QRadioButton(centralWidget);
        rb_queue->setObjectName("rb_queue");
        rb_queue->setGeometry(QRect(370, 10, 61, 20));
        rb_stack = new QRadioButton(centralWidget);
        rb_stack->setObjectName("rb_stack");
        rb_stack->setGeometry(QRect(430, 10, 51, 20));
        combo_opciones = new QComboBox(centralWidget);
        combo_opciones->addItem(QString());
        combo_opciones->addItem(QString());
        combo_opciones->addItem(QString());
        combo_opciones->setObjectName("combo_opciones");
        combo_opciones->setGeometry(QRect(20, 33, 121, 21));
        combo_opciones->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 129, 194);\n"
"color: rgb(255, 255, 255);"));
        butt_toolbar = new QPushButton(centralWidget);
        butt_toolbar->setObjectName("butt_toolbar");
        butt_toolbar->setGeometry(QRect(20, 30, 760, 24));
        QFont font6;
        font6.setBold(true);
        font6.setItalic(false);
        butt_toolbar->setFont(font6);
        butt_toolbar->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);\n"
""));
        label_nombre = new QLabel(centralWidget);
        label_nombre->setObjectName("label_nombre");
        label_nombre->setGeometry(QRect(230, 130, 111, 16));
        label_nombre->setFont(font5);
        label_nombre->setStyleSheet(QString::fromUtf8(""));
        label_nombre_archivo = new QLabel(centralWidget);
        label_nombre_archivo->setObjectName("label_nombre_archivo");
        label_nombre_archivo->setGeometry(QRect(333, 130, 81, 16));
        QFont font7;
        font7.setPointSize(10);
        label_nombre_archivo->setFont(font7);
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
        label_titulo->setText(QCoreApplication::translate("MainWindowClass", "Pantalla Principal", nullptr));
        groupBox_menu->setTitle(QCoreApplication::translate("MainWindowClass", "Menu", nullptr));
        label_buscar->setText(QCoreApplication::translate("MainWindowClass", "Buscar", nullptr));
        butt_buscar->setText(QCoreApplication::translate("MainWindowClass", "Buscar", nullptr));
        label_eliminar->setText(QCoreApplication::translate("MainWindowClass", "Eliminar", nullptr));
        butt_eliminar->setText(QCoreApplication::translate("MainWindowClass", "Eliminar", nullptr));
        label_insertar->setText(QCoreApplication::translate("MainWindowClass", "Insertar", nullptr));
        butt_agregar->setText(QCoreApplication::translate("MainWindowClass", "Agregar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindowClass", "Graphics View", nullptr));
        rb_list->setText(QCoreApplication::translate("MainWindowClass", "Lista", nullptr));
        rb_queue->setText(QCoreApplication::translate("MainWindowClass", "Queue", nullptr));
        rb_stack->setText(QCoreApplication::translate("MainWindowClass", "Stack", nullptr));
        combo_opciones->setItemText(0, QCoreApplication::translate("MainWindowClass", "Crear Lista", nullptr));
        combo_opciones->setItemText(1, QCoreApplication::translate("MainWindowClass", "Editar Lista (abrir)", nullptr));
        combo_opciones->setItemText(2, QCoreApplication::translate("MainWindowClass", "Guardar Lista", nullptr));

        butt_toolbar->setText(QCoreApplication::translate("MainWindowClass", "Toolbar", nullptr));
        label_nombre->setText(QCoreApplication::translate("MainWindowClass", "Nombre de Lista:", nullptr));
        label_nombre_archivo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
