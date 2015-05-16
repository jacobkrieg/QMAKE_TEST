#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <QObject>

class TestClass : public QObject
{
	Q_OBJECT

public:
	explicit TestClass(QObject *parent = 0);
	~TestClass();

public slots:
	void mySlot();
};

#endif // TESTCLASS_H
