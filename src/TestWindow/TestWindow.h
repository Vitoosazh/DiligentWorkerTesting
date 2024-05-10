#pragma execution_character_set("utf-8")
#ifndef TestWindow_H
#define TestWindow_H

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>


class Window1 {
public:
    Window1();
    Fl_Window* win;
    void show();
    void hide();
    //Fl_Color originalColor;
    static void openWindow2(Fl_Widget* widget, void* data);
    static void changeButtonColor(Fl_Widget* widget, void* data);
    static void openLogInScreen(Fl_Widget* widget, void* data);
};

class LogInAdmin
{
public:
    LogInAdmin();
    //Fl_Window* LogInScreen;
    //Fl_Input* passwordInput;
    void show();
    void hide();
    static void submitButtonCallback(Fl_Widget* widget, void* data);
};

class Menu
{
public:

    Menu();
    Fl_Window* menuScreen;
    //Fl_Input* passwordInput;
    void show();
    void hide();
    static void openKonstructor(Fl_Widget* widget, void* data);
    static void openTestsList(Fl_Widget* widget, void* data);
    static void openResultList(Fl_Widget* widget, void* data);
   
};

class Konstuctor
{
public:

    Konstuctor();
    Fl_Window* konstrucorScreen;
    void show();
    void hide();
    
};

#endif