#include "TestWindow2.h"
#include "TestWindow.h"



Window2::Window2() {
   
    win = new Fl_Window(500, 600, 300, 200, "Personal");
    Fl_Button* button = new Fl_Button(100, 100, 120, 30, "Назад");
    button->callback(openWindow1, this);
}

void Window2::show() {
     
    win->show();
    Fl::run();
}

void Window2::hide()
{
    win->hide();
}

void Window2::openWindow1(Fl_Widget* widget, void* data) {
    
    Window2* window2 = (Window2*)data;
    
    Window1 window1;
    window2->hide();
    window1.show();

}