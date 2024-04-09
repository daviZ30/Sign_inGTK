#include <iostream>
#include <glibmm/ustring.h>
#include "repository/repository.h"


Repositoty_login::Repositoty_login()
{
}
Repositoty_login::~Repositoty_login()
{
}
Glib::ustring Repositoty_login::getPassword()
{
    
    return "1234";
}

Glib::ustring Repositoty_login::getUser()
{
    return "Usuario";
}