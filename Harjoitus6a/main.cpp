#include "myclass.h"

#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass *objMyClass=new MyClass;
    objMyClass->raiseMySignal();
    delete objMyClass;
    objMyClass=nullptr;

    return a.exec();
}
