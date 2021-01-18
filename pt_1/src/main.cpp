// File: main.cc

#include "helloworld.h"
#include <gtkmm/application.h>

int main (int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  HelloWorld helloworld;

  //Shows the window and returns when it is closed.
  return app->run(helloworld);
}
//#include <gtkmm.h>
//
//int main(int argc, char** argv)
//{
//        auto app = Gtk::Application::create(argc, argv);
//        
//        Gtk::Window window;
//        window.set_default_size(600,400);
//        
//        return app->run(window);
//}