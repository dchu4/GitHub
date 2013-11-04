#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    std::cout << "pushbutton " << std::endl;
}


void MainWindow::on_pushButton_2_clicked()
{
    std::cout << "button 1 pushed " << std::endl;
}

void MainWindow::on_pushButton_3_clicked()
{
    std::cout << "button 2 pushed " << std::endl;
}

void MainWindow::on_pushButton_4_clicked()
{
    exit(0);
}
