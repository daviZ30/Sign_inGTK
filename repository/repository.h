#ifndef REPOSITORY_LOGIN_H
#define REPOSITORY_LOGIN_H

#include <iostream>
#include <glibmm/ustring.h>

class Repositoty_login
{
public:
  Repositoty_login();
  virtual ~Repositoty_login();
  static Glib::ustring getUser();
  static Glib::ustring getPassword();
};

#endif // REPOSITORY_LOGIN_H