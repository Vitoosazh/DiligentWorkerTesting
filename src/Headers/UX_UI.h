#pragma once
#ifndef UX_UI_H
#define UX_UI_H

#include "StartScreen.h"
#include "LoginAdmin.h"
#include "Menu.h"
#include "Konstructor.h"
#include "Testing.h"
#include "LoginWorker.h"
#include "ListResults.h"
#include "ListTests.h"

class Interface {
public:	
	Konstructor* screenKonstructor;
	StartScreen* ss;
	LoginAdmin* logUI;
	LoginWorker* logWorker;
	Menu* menUI;
	Testing* testUI;
	ListTests* listTest;
	ListResults* listResult;


	
	Interface(void* );

	void Hide();
	void showStartScreen();
	void showLogAdmin();
	void showKonstructor();
	void showMenu();
	void showTesting();
	void showLoginWorker();
	void showListResults();
	void showListTests();

	

};
#endif