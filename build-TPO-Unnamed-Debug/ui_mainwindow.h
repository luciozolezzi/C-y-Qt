/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Inicio;
    QRadioButton *radioButton;
    QWidget *Configuracion;
    QPushButton *pushButton;
    QWidget *Analitica;
    QCheckBox *checkBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 851, 671));
        Inicio = new QWidget();
        Inicio->setObjectName(QStringLiteral("Inicio"));
        radioButton = new QRadioButton(Inicio);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(110, 210, 112, 23));
        tabWidget->addTab(Inicio, QString());
        Configuracion = new QWidget();
        Configuracion->setObjectName(QStringLiteral("Configuracion"));
        pushButton = new QPushButton(Configuracion);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 200, 89, 25));
        tabWidget->addTab(Configuracion, QString());
        Analitica = new QWidget();
        Analitica->setObjectName(QStringLiteral("Analitica"));
        checkBox = new QCheckBox(Analitica);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(150, 260, 92, 23));
        tabWidget->addTab(Analitica, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Inicio), QApplication::translate("MainWindow", "Tab 1", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Configuracion), QApplication::translate("MainWindow", "Tab 2", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Analitica), QApplication::translate("MainWindow", "Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
