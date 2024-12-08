#include "exampleclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass objExampl;
    objExampl.startToWait();
    return a.exec();
}
