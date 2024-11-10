#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Volkswagen");
    objCar.setModel("Golf");
    objCar.setYearModel(2012);
    objCar.printData();

    Rectangle *objRectangle;
    objRectangle=new Rectangle;
    objRectangle->setHeight(5.2);
    objRectangle->setWidth(4.1);
    cout<<"Suorakulmion ala="<<objRectangle->getArea()<<" ja piiri="<<objRectangle->getCircum()<<endl;
    delete objRectangle;
    objRectangle=nullptr;

    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setName("Maija Mansikka");
    objStudent->setStudentNumber(3);
    objStudent->setAverage(4.7);
    cout<<"Opiskelijan nimi="<<objStudent->getName()<<", opiskelijanumero="<<objStudent->getStudentNumber()<<", keskiarvo="<<objStudent->getAverage()<<endl;

    return 0;
}
