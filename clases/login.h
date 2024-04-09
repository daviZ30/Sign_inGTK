#ifndef LOGIN_H
#define LOGIN_H

#include <gtkmm/box.h>
#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/separator.h>

class Login : public Gtk::Window
{
public:
  Login();
  virtual ~Login();

protected:
  // Signal handlers:
  void on_button_clicked();

  // Child widgets:
  Gtk::Box box_login;
  Gtk::Label lbl_name, lbl_password;
  Gtk::Entry en_name, en_password;
  Gtk::Separator m_Separator;
  Gtk::Button btn_login;
};

#endif // LOGIN_H