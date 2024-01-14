#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QWidget"
#include "secondwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),swd(nullptr)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if (!swd)
    {
        swd = new secondWindow();
        ui->horizontalLayout_3->addWidget(swd);
    }
    else
    {
        ui->horizontalLayout_3->removeWidget(swd);
        delete swd;
        swd = nullptr;
    }
}

