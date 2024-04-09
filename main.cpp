#include "clases/login.h"
#include <gtkmm.h>

int main(int argc, char *argv[])
{
  auto app = Gtk::Application::create("org.gtkmm.example");
  // Glib::RefPtr<Gtk::CssProvider> css_provider = Gtk::CssProvider::create();
  // css_provider->load_from_path("style/styles.css"); // Ruta al archivo CSS
  // Gtk::StyleContext::add_provider_for_display(Gdk::Display::get_default(), css_provider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
  return app->make_window_and_run<Login>(argc, argv);
}