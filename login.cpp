#include "clases/login.h"
#include "viewModel/viewModel.h"
#include "clases/radiobuttons.h"
#include <gtkmm.h>
#include <iostream>

static ViewModel_login viewmodel;
Login::Login() : btn_login("login"),
                 lbl_name("Name: "),
                 lbl_password("Password: ")
{
  set_title("Login");

  set_child(grid_login);

  btn_login.set_margin(15);
  lbl_password.set_margin_top(10);

  // Name de mi box
  grid_login.set_name("my_grid");
  grid_login.set_halign(Gtk::Align::CENTER);
  grid_login.set_valign(Gtk::Align::CENTER);

  // Añadir los componentes al box
  grid_login.attach(lbl_name, 0, 0);
  grid_login.attach(en_name, 0, 1);

  grid_login.attach(lbl_password, 0, 2);
  grid_login.attach(en_password, 0, 3);

  grid_login.attach(m_Separator, 0, 4);
  grid_login.attach(btn_login, 0, 5);

  // Indicar el widget pordefecto
  set_default_widget(btn_login);

  // Añadir el lisener al boton
  btn_login.signal_clicked().connect(sigc::mem_fun(*this,
                                                   &Login::on_button_clicked));
}

Login::~Login()
{
}

void Login::on_button_clicked()
{
  if (viewmodel.getUser() == en_name.get_text() && viewmodel.getPassword() == en_password.get_text())
  {
    std::cout << "Sesión iniciada" << std::endl;
    //  this->set_visible(false);
    rbWindow = new RadioButtons();
    this->get_application()->add_window(*rbWindow);
    rbWindow->signal_hide().connect(sigc::mem_fun(*this, &Login::RadioButtonsClose));
    rbWindow->show();
    this->get_application()->remove_window(*this);
  }
  else
  {
    std::cout << "Error en la contraseña o usuario" << std::endl;
  }
}
void Login::RadioButtonsClose()
{
  rbWindow = 0;
}