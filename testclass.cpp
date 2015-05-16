#include "testclass.h"

#include <QDebug>

TestClass::TestClass(QObject *parent) : QObject(parent)
{

}

TestClass::~TestClass()
{

}

void TestClass::mySlot()
{
	qDebug() << "mySlot";
}

