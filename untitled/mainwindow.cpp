#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "neuron.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    AdministradorNeuronas administrador;
    Neurona neurona1(1, 5.0, 10, 20, 255, 0, 0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
