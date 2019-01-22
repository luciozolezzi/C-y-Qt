/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *inicioTab;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayoutConnUart;
    QPushButton *btnConnUart;
    QLabel *lblConn;
    QLabel *lblConnUartStatus;
    QWidget *widget;
    QGridLayout *gridLayoutState;
    QLabel *lblState;
    QLabel *lblStateShow;
    QWidget *configuracionTab;
    QWidget *widget1;
    QGridLayout *gridLayoutConfiguracion;
    QSlider *sldTemperatura;
    QLabel *lblTemperatura;
    QLabel *lblHumedadS;
    QSlider *sldHumedadS;
    QSpinBox *spnHumedadS;
    QSpinBox *spnTemperatura;
    QWidget *widget2;
    QGridLayout *gridLayoutConfigSend;
    QLabel *lblSendConf;
    QPushButton *btnSendConf;
    QWidget *calendarioTab;
    QWidget *widget3;
    QGridLayout *gridLayoutCalendario;
    QLabel *lblCalendarioTitle;
    QDateTimeEdit *dateTimeEdit;
    QWidget *widget4;
    QGridLayout *gridLayoutTiempo;
    QLabel *labelSetTiempo;
    QTimeEdit *timeEdit;
    QPushButton *btnEnviarRiego;
    QWidget *analiticaTab;
    QWidget *widget5;
    QGridLayout *gridLayoutHumS;
    QLabel *lblHumedadSAnalitica;
    QLabel *lblHumedadSAnaliticaVal;
    QWidget *widget6;
    QGridLayout *gridLayoutLum;
    QLabel *lblLumens;
    QLabel *lblLuminosidadAnaliticaVal;
    QWidget *widget7;
    QGridLayout *gridLayoutHumA;
    QLabel *lblHumedadAmbiente;
    QLabel *lblHumedadAAnaliticaVal;
    QWidget *widget8;
    QGridLayout *gridLayout;
    QLabel *lblTempAnalitica;
    QLabel *lblTemperaturaAnaliticaVal;

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
        tabWidget->setGeometry(QRect(19, 10, 481, 600));
        tabWidget->setMinimumSize(QSize(450, 600));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(238, 238, 236, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(246, 246, 245, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 118, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 157, 255));
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
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
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
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tabWidget->setPalette(palette);
        tabWidget->setAutoFillBackground(true);
        tabWidget->setLocale(QLocale(QLocale::Spanish, QLocale::Argentina));
        tabWidget->setMovable(false);
        inicioTab = new QWidget();
        inicioTab->setObjectName(QStringLiteral("inicioTab"));
        label = new QLabel(inicioTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 469, 96));
        layoutWidget = new QWidget(inicioTab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 160, 461, 41));
        gridLayoutConnUart = new QGridLayout(layoutWidget);
        gridLayoutConnUart->setSpacing(6);
        gridLayoutConnUart->setContentsMargins(11, 11, 11, 11);
        gridLayoutConnUart->setObjectName(QStringLiteral("gridLayoutConnUart"));
        gridLayoutConnUart->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayoutConnUart->setContentsMargins(0, 0, 0, 0);
        btnConnUart = new QPushButton(layoutWidget);
        btnConnUart->setObjectName(QStringLiteral("btnConnUart"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(78, 154, 6, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush8(QColor(198, 255, 143, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush8);
        QBrush brush9(QColor(168, 240, 97, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush9);
        QBrush brush10(QColor(69, 113, 26, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush10);
        QBrush brush11(QColor(92, 151, 34, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush11);
        QBrush brush12(QColor(186, 189, 182, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush13(QColor(138, 226, 52, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush13);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush14(QColor(196, 240, 153, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        btnConnUart->setPalette(palette1);
        QFont font;
        font.setPointSize(18);
        btnConnUart->setFont(font);
        btnConnUart->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayoutConnUart->addWidget(btnConnUart, 0, 2, 1, 1, Qt::AlignRight);

        lblConn = new QLabel(layoutWidget);
        lblConn->setObjectName(QStringLiteral("lblConn"));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        lblConn->setFont(font1);

        gridLayoutConnUart->addWidget(lblConn, 0, 0, 1, 1);

        lblConnUartStatus = new QLabel(layoutWidget);
        lblConnUartStatus->setObjectName(QStringLiteral("lblConnUartStatus"));

        gridLayoutConnUart->addWidget(lblConnUartStatus, 0, 1, 1, 1, Qt::AlignHCenter);

        widget = new QWidget(inicioTab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 109, 461, 41));
        gridLayoutState = new QGridLayout(widget);
        gridLayoutState->setSpacing(6);
        gridLayoutState->setContentsMargins(11, 11, 11, 11);
        gridLayoutState->setObjectName(QStringLiteral("gridLayoutState"));
        gridLayoutState->setContentsMargins(0, 0, 0, 0);
        lblState = new QLabel(widget);
        lblState->setObjectName(QStringLiteral("lblState"));
        lblState->setFont(font);

        gridLayoutState->addWidget(lblState, 0, 0, 1, 1);

        lblStateShow = new QLabel(widget);
        lblStateShow->setObjectName(QStringLiteral("lblStateShow"));
        lblStateShow->setFont(font);
        lblStateShow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayoutState->addWidget(lblStateShow, 0, 1, 1, 1);

        tabWidget->addTab(inicioTab, QString());
        configuracionTab = new QWidget();
        configuracionTab->setObjectName(QStringLiteral("configuracionTab"));
        widget1 = new QWidget(configuracionTab);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 10, 461, 101));
        gridLayoutConfiguracion = new QGridLayout(widget1);
        gridLayoutConfiguracion->setSpacing(6);
        gridLayoutConfiguracion->setContentsMargins(11, 11, 11, 11);
        gridLayoutConfiguracion->setObjectName(QStringLiteral("gridLayoutConfiguracion"));
        gridLayoutConfiguracion->setContentsMargins(0, 0, 0, 0);
        sldTemperatura = new QSlider(widget1);
        sldTemperatura->setObjectName(QStringLiteral("sldTemperatura"));
        sldTemperatura->setOrientation(Qt::Horizontal);

        gridLayoutConfiguracion->addWidget(sldTemperatura, 0, 1, 1, 1);

        lblTemperatura = new QLabel(widget1);
        lblTemperatura->setObjectName(QStringLiteral("lblTemperatura"));

        gridLayoutConfiguracion->addWidget(lblTemperatura, 0, 0, 1, 1);

        lblHumedadS = new QLabel(widget1);
        lblHumedadS->setObjectName(QStringLiteral("lblHumedadS"));

        gridLayoutConfiguracion->addWidget(lblHumedadS, 1, 0, 1, 1);

        sldHumedadS = new QSlider(widget1);
        sldHumedadS->setObjectName(QStringLiteral("sldHumedadS"));
        sldHumedadS->setOrientation(Qt::Horizontal);

        gridLayoutConfiguracion->addWidget(sldHumedadS, 1, 1, 1, 1);

        spnHumedadS = new QSpinBox(widget1);
        spnHumedadS->setObjectName(QStringLiteral("spnHumedadS"));

        gridLayoutConfiguracion->addWidget(spnHumedadS, 1, 2, 1, 1);

        spnTemperatura = new QSpinBox(widget1);
        spnTemperatura->setObjectName(QStringLiteral("spnTemperatura"));

        gridLayoutConfiguracion->addWidget(spnTemperatura, 0, 2, 1, 1);

        widget2 = new QWidget(configuracionTab);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 120, 461, 38));
        gridLayoutConfigSend = new QGridLayout(widget2);
        gridLayoutConfigSend->setSpacing(6);
        gridLayoutConfigSend->setContentsMargins(11, 11, 11, 11);
        gridLayoutConfigSend->setObjectName(QStringLiteral("gridLayoutConfigSend"));
        gridLayoutConfigSend->setContentsMargins(0, 0, 0, 0);
        lblSendConf = new QLabel(widget2);
        lblSendConf->setObjectName(QStringLiteral("lblSendConf"));

        gridLayoutConfigSend->addWidget(lblSendConf, 0, 0, 1, 1);

        btnSendConf = new QPushButton(widget2);
        btnSendConf->setObjectName(QStringLiteral("btnSendConf"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        QBrush brush15(QColor(190, 190, 190, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        btnSendConf->setPalette(palette2);
        btnSendConf->setFont(font);
        btnSendConf->setCursor(QCursor(Qt::PointingHandCursor));
        btnSendConf->setLayoutDirection(Qt::LeftToRight);

        gridLayoutConfigSend->addWidget(btnSendConf, 0, 1, 1, 1, Qt::AlignRight);

        tabWidget->addTab(configuracionTab, QString());
        calendarioTab = new QWidget();
        calendarioTab->setObjectName(QStringLiteral("calendarioTab"));
        widget3 = new QWidget(calendarioTab);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(0, 0, 471, 91));
        gridLayoutCalendario = new QGridLayout(widget3);
        gridLayoutCalendario->setSpacing(6);
        gridLayoutCalendario->setContentsMargins(11, 11, 11, 11);
        gridLayoutCalendario->setObjectName(QStringLiteral("gridLayoutCalendario"));
        gridLayoutCalendario->setContentsMargins(0, 0, 0, 0);
        lblCalendarioTitle = new QLabel(widget3);
        lblCalendarioTitle->setObjectName(QStringLiteral("lblCalendarioTitle"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        lblCalendarioTitle->setPalette(palette3);
        lblCalendarioTitle->setFont(font);

        gridLayoutCalendario->addWidget(lblCalendarioTitle, 0, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(widget3);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        QPalette palette4;
        QBrush brush16(QColor(92, 53, 102, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush16);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush7);
        QBrush brush17(QColor(117, 231, 9, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush17);
        QBrush brush18(QColor(97, 192, 7, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush18);
        QBrush brush19(QColor(39, 77, 3, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush19);
        QBrush brush20(QColor(52, 103, 4, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush16);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush16);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush21(QColor(166, 204, 130, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush21);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush16);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush17);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush18);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush16);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush16);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush21);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush17);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush18);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        dateTimeEdit->setPalette(palette4);
        dateTimeEdit->setFont(font);
        dateTimeEdit->setCursor(QCursor(Qt::PointingHandCursor));
        dateTimeEdit->setAlignment(Qt::AlignCenter);
        dateTimeEdit->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dateTimeEdit->setAccelerated(false);
        dateTimeEdit->setDateTime(QDateTime(QDate(2019, 1, 15), QTime(17, 0, 0)));
        dateTimeEdit->setDate(QDate(2019, 1, 15));
        dateTimeEdit->setTime(QTime(17, 0, 0));
        dateTimeEdit->setMaximumDate(QDate(7999, 12, 31));
        dateTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);
        dateTimeEdit->setCalendarPopup(true);
        dateTimeEdit->setTimeSpec(Qt::UTC);

        gridLayoutCalendario->addWidget(dateTimeEdit, 1, 0, 1, 1);

        widget4 = new QWidget(calendarioTab);
        widget4->setObjectName(QStringLiteral("widget4"));
        widget4->setGeometry(QRect(0, 520, 471, 41));
        gridLayoutTiempo = new QGridLayout(widget4);
        gridLayoutTiempo->setSpacing(6);
        gridLayoutTiempo->setContentsMargins(11, 11, 11, 11);
        gridLayoutTiempo->setObjectName(QStringLiteral("gridLayoutTiempo"));
        gridLayoutTiempo->setContentsMargins(0, 0, 0, 0);
        labelSetTiempo = new QLabel(widget4);
        labelSetTiempo->setObjectName(QStringLiteral("labelSetTiempo"));
        labelSetTiempo->setFont(font);

        gridLayoutTiempo->addWidget(labelSetTiempo, 0, 0, 1, 1);

        timeEdit = new QTimeEdit(widget4);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setFont(font);
#ifndef QT_NO_TOOLTIP
        timeEdit->setToolTip(0u);
#endif // QT_NO_TOOLTIP
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);

        gridLayoutTiempo->addWidget(timeEdit, 0, 1, 1, 1);

        btnEnviarRiego = new QPushButton(widget4);
        btnEnviarRiego->setObjectName(QStringLiteral("btnEnviarRiego"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush15);
        btnEnviarRiego->setPalette(palette5);
        btnEnviarRiego->setFont(font);
        btnEnviarRiego->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayoutTiempo->addWidget(btnEnviarRiego, 0, 2, 1, 1);

        tabWidget->addTab(calendarioTab, QString());
        analiticaTab = new QWidget();
        analiticaTab->setObjectName(QStringLiteral("analiticaTab"));
        widget5 = new QWidget(analiticaTab);
        widget5->setObjectName(QStringLiteral("widget5"));
        widget5->setGeometry(QRect(0, 430, 471, 31));
        gridLayoutHumS = new QGridLayout(widget5);
        gridLayoutHumS->setSpacing(6);
        gridLayoutHumS->setContentsMargins(11, 11, 11, 11);
        gridLayoutHumS->setObjectName(QStringLiteral("gridLayoutHumS"));
        gridLayoutHumS->setContentsMargins(0, 0, 0, 0);
        lblHumedadSAnalitica = new QLabel(widget5);
        lblHumedadSAnalitica->setObjectName(QStringLiteral("lblHumedadSAnalitica"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        lblHumedadSAnalitica->setPalette(palette6);
        lblHumedadSAnalitica->setFont(font);

        gridLayoutHumS->addWidget(lblHumedadSAnalitica, 0, 0, 1, 1);

        lblHumedadSAnaliticaVal = new QLabel(widget5);
        lblHumedadSAnaliticaVal->setObjectName(QStringLiteral("lblHumedadSAnaliticaVal"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        lblHumedadSAnaliticaVal->setPalette(palette7);
        lblHumedadSAnaliticaVal->setFont(font);
        lblHumedadSAnaliticaVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayoutHumS->addWidget(lblHumedadSAnaliticaVal, 0, 1, 1, 1);

        widget6 = new QWidget(analiticaTab);
        widget6->setObjectName(QStringLiteral("widget6"));
        widget6->setGeometry(QRect(0, 490, 471, 31));
        gridLayoutLum = new QGridLayout(widget6);
        gridLayoutLum->setSpacing(6);
        gridLayoutLum->setContentsMargins(11, 11, 11, 11);
        gridLayoutLum->setObjectName(QStringLiteral("gridLayoutLum"));
        gridLayoutLum->setContentsMargins(0, 0, 0, 0);
        lblLumens = new QLabel(widget6);
        lblLumens->setObjectName(QStringLiteral("lblLumens"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        lblLumens->setPalette(palette8);
        lblLumens->setFont(font);

        gridLayoutLum->addWidget(lblLumens, 0, 0, 1, 1);

        lblLuminosidadAnaliticaVal = new QLabel(widget6);
        lblLuminosidadAnaliticaVal->setObjectName(QStringLiteral("lblLuminosidadAnaliticaVal"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        lblLuminosidadAnaliticaVal->setPalette(palette9);
        lblLuminosidadAnaliticaVal->setFont(font);
        lblLuminosidadAnaliticaVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayoutLum->addWidget(lblLuminosidadAnaliticaVal, 0, 1, 1, 1);

        widget7 = new QWidget(analiticaTab);
        widget7->setObjectName(QStringLiteral("widget7"));
        widget7->setGeometry(QRect(0, 460, 471, 31));
        gridLayoutHumA = new QGridLayout(widget7);
        gridLayoutHumA->setSpacing(6);
        gridLayoutHumA->setContentsMargins(11, 11, 11, 11);
        gridLayoutHumA->setObjectName(QStringLiteral("gridLayoutHumA"));
        gridLayoutHumA->setContentsMargins(0, 0, 0, 0);
        lblHumedadAmbiente = new QLabel(widget7);
        lblHumedadAmbiente->setObjectName(QStringLiteral("lblHumedadAmbiente"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        lblHumedadAmbiente->setPalette(palette10);
        lblHumedadAmbiente->setFont(font);

        gridLayoutHumA->addWidget(lblHumedadAmbiente, 0, 0, 1, 1);

        lblHumedadAAnaliticaVal = new QLabel(widget7);
        lblHumedadAAnaliticaVal->setObjectName(QStringLiteral("lblHumedadAAnaliticaVal"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        lblHumedadAAnaliticaVal->setPalette(palette11);
        lblHumedadAAnaliticaVal->setFont(font);
        lblHumedadAAnaliticaVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayoutHumA->addWidget(lblHumedadAAnaliticaVal, 0, 1, 1, 1);

        widget8 = new QWidget(analiticaTab);
        widget8->setObjectName(QStringLiteral("widget8"));
        widget8->setGeometry(QRect(0, 400, 471, 31));
        gridLayout = new QGridLayout(widget8);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lblTempAnalitica = new QLabel(widget8);
        lblTempAnalitica->setObjectName(QStringLiteral("lblTempAnalitica"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        lblTempAnalitica->setPalette(palette12);
        lblTempAnalitica->setFont(font);

        gridLayout->addWidget(lblTempAnalitica, 0, 0, 1, 1);

        lblTemperaturaAnaliticaVal = new QLabel(widget8);
        lblTemperaturaAnaliticaVal->setObjectName(QStringLiteral("lblTemperaturaAnaliticaVal"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        lblTemperaturaAnaliticaVal->setPalette(palette13);
        lblTemperaturaAnaliticaVal->setFont(font);
        lblTemperaturaAnaliticaVal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lblTemperaturaAnaliticaVal, 0, 1, 1, 1);

        tabWidget->addTab(analiticaTab, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#4e9a06;\">Sistema Inteligente de Riego<br/>TPO 2018<br/>Lucio Zolezzi</span></p></body></html>", Q_NULLPTR));
        btnConnUart->setText(QApplication::translate("MainWindow", "Conectar", Q_NULLPTR));
        lblConn->setText(QApplication::translate("MainWindow", "Conectar via UART", Q_NULLPTR));
        lblConnUartStatus->setText(QString());
        lblState->setText(QApplication::translate("MainWindow", "Estado Invernadero:", Q_NULLPTR));
        lblStateShow->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(inicioTab), QApplication::translate("MainWindow", "Inicio", Q_NULLPTR));
        lblTemperatura->setText(QApplication::translate("MainWindow", "Temperatura", Q_NULLPTR));
        lblHumedadS->setText(QApplication::translate("MainWindow", "Humedad Suelo", Q_NULLPTR));
        lblSendConf->setText(QString());
        btnSendConf->setText(QApplication::translate("MainWindow", "Enviar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(configuracionTab), QApplication::translate("MainWindow", "Configuracion", Q_NULLPTR));
        lblCalendarioTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" text-decoration: underline;\">Calendario de riego</span></p></body></html>", Q_NULLPTR));
        labelSetTiempo->setText(QApplication::translate("MainWindow", "Tiempo de riego: ", Q_NULLPTR));
        btnEnviarRiego->setText(QApplication::translate("MainWindow", "Enviar", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(calendarioTab), QApplication::translate("MainWindow", "Calendario", Q_NULLPTR));
        lblHumedadSAnalitica->setText(QApplication::translate("MainWindow", "Humedad Suelo", Q_NULLPTR));
        lblHumedadSAnaliticaVal->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        lblLumens->setText(QApplication::translate("MainWindow", "Luminosidad", Q_NULLPTR));
        lblLuminosidadAnaliticaVal->setText(QApplication::translate("MainWindow", "Lumens", Q_NULLPTR));
        lblHumedadAmbiente->setText(QApplication::translate("MainWindow", "Humedad Ambiente", Q_NULLPTR));
        lblHumedadAAnaliticaVal->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        lblTempAnalitica->setText(QApplication::translate("MainWindow", "Temperatura", Q_NULLPTR));
        lblTemperaturaAnaliticaVal->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(analiticaTab), QApplication::translate("MainWindow", "Analitica", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
