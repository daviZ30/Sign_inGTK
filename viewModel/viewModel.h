
#ifndef VIEWMODEL_LOGIN_H
#define VIEWMODEL_LOGIN_H
#include <iostream>
#include <glibmm/ustring.h>

class ViewModel_login
{
public:
    ViewModel_login();
    virtual ~ViewModel_login();
    Glib::ustring getUser();
    Glib::ustring getPassword();
};

#endif // VIEWMODEL_LOGIN_H