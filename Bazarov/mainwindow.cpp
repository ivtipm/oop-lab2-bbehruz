#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->sb,SIGNAL(valueChanged(int)),ui->sl,SLOT(setValue(int)));
    QObject::connect(ui->sl,SIGNAL(valueChanged(int)),ui->sb,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

