#pragma execution_character_set("utf-8")
#ifndef TestWindow2_H
#define TestWindow2_H
#include "TestWindow.h"

class Window2 {
public:
    Window2();
   
    Fl_Window* win;
    void show();
    void hide();
    static void openWindow1(Fl_Widget* widget, void* data);
};

#endif