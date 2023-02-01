#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTranslator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Hello_pushButton_clicked()
{


    ui-> retranslateUi(this);
    ui->Hello_lineEdit->setText(QObject::tr("Bye World!"));
}
