#include "italianchef.h"

ItalianChef::ItalianChef(string n) : Chef(n)
{
    cout<<"ItalianChef "<<getName()<<" konstruktorissa"<<endl;
}


void ItalianChef::makePasta()
{
    cout<<"Chef "<<getName()<<" makes pasta"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<getName()<<" destruktori"<<endl;
}
