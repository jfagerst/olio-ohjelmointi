#include <iostream>
#include "myfunctions.h"
#include<iomanip>

using namespace std;

int main()
{
    int a, b;
    int sum;
    double div;

    cout << "Anna ensimmainen kokonaisluku" << endl;
    cin >> a;
    cout << "Anna toinen kokonaisluku" << endl;
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    sum = retSum(a, b);
    cout << "Lukujen " <<a<< " ja " <<b<< " summa on " <<sum<<" (return)"<<endl;

    div = retDiv(a, b);
    if (a!=0 && div==0){
        cout << "Jakaja ei voi olla nolla"<<" (return)" <<endl;
    }
    else{
        cout << fixed << setprecision(2);
        cout << "Lukujen " <<a<< " ja " <<b<< " osamaara on " <<div<<" (return)"<<endl;
    }

    return 0;
}
