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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *inicioTab;
    QPushButton *btnConnUart;
    QWidget *configuracionTab;
    QWidget *widget;
    QGridLayout *gridLayoutConfiguracion;
    QSlider *sldTemperatura;
    QLabel *lblTemperatura;
    QLabel *lblHumedadS;
    QSlider *sldHumedadS;
    QSpinBox *spnHumedadS;
    QSpinBox *spnTemperatura;
    QWidget *widget1;
    QGridLayout *gridLayoutConfigSend;
    QLabel *lblSendConf;
    QPushButton *btnSendConf;
    QWidget *calendarioTab;
    QCalendarWidget *calendarWidget;
    QWidget *analiticaTab;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setMinimumSize(QSize(525, 675));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(20, 10, 481, 641));
        tabWidget->setMinimumSize(QSize(450, 600));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setMovable(false);
        inicioTab = new QWidget();
        inicioTab->setObjectName(QStringLiteral("inicioTab"));
        btnConnUart = new QPushButton(inicioTab);
        btnConnUart->setObjectName(QStringLiteral("btnConnUart"));
        btnConnUart->setGeometry(QRect(310, 360, 89, 25));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(78, 154, 6, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(198, 255, 143, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(168, 240, 97, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(69, 113, 26, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(92, 151, 34, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(186, 189, 182, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush7(QColor(255, 255, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        QBrush brush8(QColor(238, 238, 236, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush8);
        palette.setBrush(QPalette::Active, QPalette::Base, brush7);
        QBrush brush9(QColor(138, 226, 52, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush10(QColor(196, 240, 153, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush11(QColor(255, 255, 220, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        btnConnUart->setPalette(palette);
        btnConnUart->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget->addTab(inicioTab, QString());
        configuracionTab = new QWidget();
        configuracionTab->setObjectName(QStringLiteral("configuracionTab"));
        widget = new QWidget(configuracionTab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 40, 461, 101));
        gridLayoutConfiguracion = new QGridLayout(widget);
        gridLayoutConfiguracion->setSpacing(6);
        gridLayoutConfiguracion->setContentsMargins(11, 11, 11, 11);
        gridLayoutConfiguracion->setObjectName(QStringLiteral("gridLayoutConfiguracion"));
        gridLayoutConfiguracion->setContentsMargins(0, 0, 0, 0);
        sldTemperatura = new QSlider(widget);
        sldTemperatura->setObjectName(QStringLiteral("sldTemperatura"));
        sldTemperatura->setOrientation(Qt::Horizontal);

        gridLayoutConfiguracion->addWidget(sldTemperatura, 0, 1, 1, 1);

        lblTemperatura = new QLabel(widget);
        lblTemperatura->setObjectName(QStringLiteral("lblTemperatura"));

        gridLayoutConfiguracion->addWidget(lblTemperatura, 0, 0, 1, 1);

        lblHumedadS = new QLabel(widget);
        lblHumedadS->setObjectName(QStringLiteral("lblHumedadS"));

        gridLayoutConfiguracion->addWidget(lblHumedadS, 1, 0, 1, 1);

        sldHumedadS = new QSlider(widget);
        sldHumedadS->setObjectName(QStringLiteral("sldHumedadS"));
        sldHumedadS->setOrientation(Qt::Horizontal);

        gridLayoutConfiguracion->addWidget(sldHumedadS, 1, 1, 1, 1);

        spnHumedadS = new QSpinBox(widget);
        spnHumedadS->setObjectName(QStringLiteral("spnHumedadS"));

        gridLayoutConfiguracion->addWidget(spnHumedadS, 1, 2, 1, 1);

        spnTemperatura = new QSpinBox(widget);
        spnTemperatura->setObjectName(QStringLiteral("spnTemperatura"));

        gridLayoutConfiguracion->addWidget(spnTemperatura, 0, 2, 1, 1);

        widget1 = new QWidget(configuracionTab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 150, 461, 31));
        gridLayoutConfigSend = new QGridLayout(widget1);
        gridLayoutConfigSend->setSpacing(6);
        gridLayoutConfigSend->setContentsMargins(11, 11, 11, 11);
        gridLayoutConfigSend->setObjectName(QStringLiteral("gridLayoutConfigSend"));
        gridLayoutConfigSend->setContentsMargins(0, 0, 0, 0);
        lblSendConf = new QLabel(widget1);
        lblSendConf->setObjectName(QStringLiteral("lblSendConf"));

        gridLayoutConfigSend->addWidget(lblSendConf, 0, 0, 1, 1);

        btnSendConf = new QPushButton(widget1);
        btnSendConf->setObjectName(QStringLiteral("btnSendConf"));

        gridLayoutConfigSend->addWidget(btnSendConf, 0, 1, 1, 1);

        tabWidget->addTab(configuracionTab, QString());
        calendarioTab = new QWidget();
        calendarioTab->setObjectName(QStringLiteral("calendarioTab"));
        calendarWidget = new QCalendarWidget(calendarioTab);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 0, 481, 291));
        tabWidget->addTab(calendarioTab, QString());
        analiticaTab = new QWidget();
        analiticaTab->setObjectName(QStringLiteral("analiticaTab"));
        tabWidget->addTab(analiticaTab, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        btnConnUart->setText(QApplication::translate("MainWindow", "Conectar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(inicioTab), QApplication::translate("MainWindow", "Inicio", Q_NULLPTR));
        lblTemperatura->setText(QApplication::translate("MainWindow", "Temperatura", Q_NULLPTR));
        lblHumedadS->setText(QApplication::translate("MainWindow", "Humedad Suelo", Q_NULLPTR));
        lblSendConf->setText(QString());
        btnSendConf->setText(QApplication::translate("MainWindow", "Enviar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(configuracionTab), QApplication::translate("MainWindow", "Configuracion", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(calendarioTab), QApplication::translate("MainWindow", "Calendario", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(analiticaTab), QApplication::translate("MainWindow", "Analitica", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
