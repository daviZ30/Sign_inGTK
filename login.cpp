#include "clases/login.h"
#include "viewModel/viewModel.h"
#include <gtkmm.h>
#include <iostream>

static ViewModel_login viewmodel;
Login::Login() : box_login(Gtk::Orientation::VERTICAL),
                 btn_login("login"),
                 lbl_name("Name: "),
                 lbl_password("Password: ")
{
  set_title("Login");

  set_child(box_login);

  // Margenes de los componetes y expandir
  lbl_name.set_margin(10);
  lbl_name.set_expand();
  en_name.set_margin(10);
  en_name.set_expand();
  lbl_password.set_margin(10);
  lbl_password.set_expand();
  en_password.set_margin(10);
  en_password.set_expand();
  btn_login.set_margin(10);
  btn_login.set_expand();

  // Name de mi box
  box_login.set_name("box");

  // Añadir los componentes al box
  box_login.append(lbl_name);
  box_login.append(en_name);

  box_login.append(lbl_password);
  box_login.append(en_password);

  box_login.append(m_Separator);
  box_login.append(btn_login);

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
    std::cout << "Session iniciada" << std::endl;
    hide();
  }
  else
  {
    std::cout << "Error en la contrasela o usuario" << std::endl;
  }
}