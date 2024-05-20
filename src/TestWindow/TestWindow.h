#pragma execution_character_set("utf-8")
#ifndef TestWindow_H
#define TestWindow_H

#include <sqlite3.h>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_PNG_Image.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Multiline_Input.H>
#include <FL/Fl_Multiline_Output.H>
#include <string>

class Window1 {
public:
    Window1();
    Fl_Window* win;
    void show();
    void hide();
    void end();
    
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
   // Fl_Button* buttonAddImage;
    void show();
    void hide();
    //void redraw();
    static void enterText(Fl_Widget* widget, void* data);
    
    //static void saveAndDisplayText(Fl_Widget* btn, void* data);

};

class KonstuctorAddQ
{
public:
KonstuctorAddQ();
Fl_Window* questionScreen;
// Fl_Button* buttonAddImage;
void show();
void hide();
static void saveAndDisplayText(Fl_Widget* btn, void* data);
static void closeText(Fl_Widget* btn, void* data);

};

#endif