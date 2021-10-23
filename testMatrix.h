#ifndef TESTMATRIX_H
#define TESTMATRIX_H

#include <QTest>
#include <QtCore>
#include <QtTest>

class testMatrix : public QObject
{
    Q_OBJECT
public:
    testMatrix(QObject *parent = nullptr) :  QObject(parent) {};
private slots:
    void testAdd();
    void testSub();
};

#endif // TESTMATRIX_H
