#include "secondwindow.h"
#include "ui_secondwindow.h"

secondWindow::secondWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::secondWindow)
{
    ui->setupUi(this);
}

secondWindow::~secondWindow()
{
    delete ui;
}
