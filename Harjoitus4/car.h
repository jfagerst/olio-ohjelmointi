#ifndef CAR_H
#define CAR_H
#include<iostream>
#include "engine.h"
#include "wheel.h"
using namespace std;


class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string brand;
    string model;
public:
    Car();
    ~Car();
    Car(string, string);
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
    void setEngine();
    void setWheels();
    void printDetails();
};

#endif // CAR_H
