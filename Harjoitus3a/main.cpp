#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{

//    Chef objChef = Chef("Gordon Ramsay");
//    objChef.makeSalad();
//    objChef.makeSoup();

    ItalianChef objItalianChef = ItalianChef("Anthony Bourdain");
    objItalianChef.makeSalad();
    objItalianChef.makeSoup();
    objItalianChef.makePasta();
    return 0;
}

