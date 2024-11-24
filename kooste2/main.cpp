#include "loginform.h"

#include <iostream>

using namespace std;

int main()
{
    LoginForm objLoginForm;
    objLoginForm.setLabelLogin("Login Label");
    cout<<objLoginForm.getLabelLogin()<<endl;
    objLoginForm.initializeForm();
    return 0;
}
