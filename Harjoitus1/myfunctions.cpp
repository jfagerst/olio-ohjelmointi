#include "myfunctions.h"
#include<iostream>
#include<iomanip>

using namespace std;


void calcSum(int a, int b)
{

    int sum;
    sum=a+b;
    cout << "Lukujen " <<a<< " ja " <<b<< " summa on " <<sum<<endl;
}

void calcDiv(int a, int b)
{
    if(b==0){
        cout << "Jakaja ei voi olla nolla"<<endl;
    }
    else{
        double division;
        division=a/(double)b;
        cout << fixed << setprecision(2);
        cout << "Lukujen " <<a<< " ja " <<b<< " osamaara on " <<division<<endl;
    }

}

int retSum(int a, int b)
{
    int sum;
    sum = a+b;
    return sum;
}

double retDiv(int a, int b)
{
    if (b==0){
        return 0;
    }
    else{
        double division;
        division=a/(double)b;
        return division;
    }
}
