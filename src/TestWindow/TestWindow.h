#pragma execution_character_set("utf-8")
#ifndef TestWindow_H
#define TestWindow_H

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>


class Window1 {
public:
    Window1();
    Fl_Window* win;
    void show();
    void hide();
    static void openWindow2(Fl_Widget* widget, void* data);
};

#endif