#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
private:
    string name;
public:
    Chef();
    Chef(string);
    void makeSalad();
    void makeSoup();
    string getName();
    ~Chef();

};

#endif // CHEF_H

