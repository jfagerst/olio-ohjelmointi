#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;
    Car objCar_1=Car("Volkswagen","Golf",2010);
    Car objCar_2=Car("Toyota","Corolla",2020);
    Car objCar_3=Car("Skoda","Octavia",2012);

    carList.push_back(objCar_1);
    carList.push_back(objCar_2);
    carList.push_back(objCar_3);

    cout<<"Listan toinen alkio"<<endl;
    carList[1].printData();
    cout<<"******************"<<endl;
    cout<<"Kaikkien autojen tiedot"<<endl;
    for(int i=0; i<=2; i++){
        carList[i].printData();
    }

    return 0;
}
