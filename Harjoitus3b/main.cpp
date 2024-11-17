#include "animal.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
    Animal objAnimal;
    objAnimal.callOut();

    Dog objDog;
    objDog.callOut();
    return 0;
}
