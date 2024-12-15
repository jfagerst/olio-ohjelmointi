#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->txtResult->setText("0");
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");

    connect(ui->btnCount, SIGNAL(QPushButton::clicked), this, SLOT(MainWindow::onCountClicked()) );
    connect(ui->btnReset, SIGNAL(QPushButton::clicked), this, SLOT(MainWindow::onResetClicked()) );
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_btnCount_clicked()
{
    qDebug()<<"you clicked the Count-button";
    counter++;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
}

void MainWindow::on_btnReset_clicked()
{
    qDebug()<<"you clicked the Reset-button";
    ui->txtResult->setText("0");
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
}


