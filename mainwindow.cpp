#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	connect(ui->pushButton, &QPushButton::clicked,
	        this, &MainWindow::mySignal);
}

MainWindow::~MainWindow()
{
	delete ui;
}
