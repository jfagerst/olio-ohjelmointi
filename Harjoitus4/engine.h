#ifndef ENGINE_H
#define ENGINE_H
#include<iostream>
using namespace std;

class Engine
{
private:
    int horsepower;
    double displacement;
public:
    Engine();
    ~Engine();
    Engine(int, double);

    int getHorsepower() const;
    void setHorsepower(int newHorsepower);
    double getDisplacement() const;
    void setDisplacement(double newDisplacement);
};

#endif // ENGINE_H
