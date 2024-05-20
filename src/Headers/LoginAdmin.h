#pragma once
#ifndef LoginAdmin_H
#define LoginAdmin_H
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>

class LoginAdmin : public Fl_Double_Window {
public:
	LoginAdmin(void *);

	Fl_Input* passwordInput;
	Fl_Button* LogA;

};

void LogAMenu(Fl_Widget*, void*);

#endif