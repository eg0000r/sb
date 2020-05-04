#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->pushButton, SIGNAL(released()), this, SLOT(handleButton()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleButton()
{
    //ui->pushButton_2->setText(ui->pushButton_2->text() + ".");
}
