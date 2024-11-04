#include "person.h"

#include <iostream>

using namespace std;

int main()
{
    //luodaan ns. automaattinen olio
    //tällainen olioluodaan pinoon ja se
    //tuhoutuu automaattisesti
    Person objPerson;
    objPerson.setName("Teppo Testi");
    objPerson.setAge(24);
    cout<<"Henkilon nimi on: " <<objPerson.getName()<<endl;
    cout<<"Henkilon ika on: "<<objPerson.getAge()<<endl;
    objPerson.personInfo();


    //luodaan ns. dynaaminen olio
    //tällainen olioluodaan kekoon ja se
    //täytyy tuhota itse

    Person *objPerson2;
    objPerson2=new Person;
    objPerson2->setName("Aino Joki");
    objPerson2->setAge(25);
    objPerson2->personInfo();
    delete objPerson2;
    objPerson2=nullptr;


    return 0;
}
