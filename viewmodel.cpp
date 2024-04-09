#include <iostream>
#include <glibmm/ustring.h>
#include "repository/repository.h"
#include "viewModel/viewModel.h"

ViewModel_login::ViewModel_login() {}
ViewModel_login::~ViewModel_login() {}

Glib::ustring ViewModel_login::getPassword()
{
    return Repositoty_login::getPassword();
}

Glib::ustring ViewModel_login::getUser()
{
    return Repositoty_login::getUser();
}