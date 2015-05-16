#include <QApplication>
#include <QObject>

#include "mainwindow.h"
#include "testclass.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	MainWindow w;
	TestClass c;

	QObject::connect(&w, &MainWindow::mySignal,
	                 &c, &TestClass::mySlot);

	w.show();

	return a.exec();
}
