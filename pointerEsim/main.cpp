#include <iostream>

using namespace std;
void calcSum(int a, int b){
    int sum=a+b;
    cout<<"Kokonaislukujen summa = "<<sum<<endl;
}

void calcSum(double a, double b){
    double sum=a+b;
    cout<<"Desimaalilukujen summa = "<<sum<<endl;
}

int main()
{
    calcSum(4,5);
    calcSum(4.0,5.0);
    return 0;
}
