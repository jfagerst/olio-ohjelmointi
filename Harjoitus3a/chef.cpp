#include "chef.h"

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}

string Chef::getName()
{
    return name;
}

Chef::~Chef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}

Chef::Chef()
{

}

Chef::Chef(string n)
{
    name=n;
    cout<<"Chef "<<name<<" konstrukrori"<<endl;
}

