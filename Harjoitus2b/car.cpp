#include "car.h"

Car::Car()
{

}

void Car::printData()
{
    cout<<"merkki="<<brand<<", malli="<<model<<", vuosimalli="<<yearModel<<endl;
}

Car::Car(string b, string m, int y)
{
    brand=b;
    model=m;
    yearModel=y;
}
