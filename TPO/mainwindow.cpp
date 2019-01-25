#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Codigo setup


    //Inicializacion plots
    ui->widgetPlotTemp->addGraph();
    ui->widgetPlotHum->addGraph();
    ui->widgetPlotTemp->xAxis->setLabel("t[hs]");
    ui->widgetPlotHum->xAxis->setLabel("t[hs]");
    ui->widgetPlotTemp->yAxis->setLabel("T[°C]");
    ui->widgetPlotHum->yAxis->setLabel("[%]");
    ui->widgetPlotTemp->yAxis->setRange(-5,45);
    ui->widgetPlotHum->yAxis->setRange(0,100);

    QVector<double> x(251), y0(251);
    for (int i=0; i<251; ++i)
    {
      x[i] = i;
      y0[i] = qExp(-i/150.0)*qCos(i/10.0);
    }


    ui->widgetPlotTemp->graph(0)->setData(x, y0);
    ui->widgetPlotTemp->graph(0)->rescaleAxes();


    ui->tabWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    ui->widgetPlotTemp->replot();
    ui->widgetPlotHum->replot();
}

void MainWindow::on_btnComando_clicked()
{
    //Envio de trama por UART
}
