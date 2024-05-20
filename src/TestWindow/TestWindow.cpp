//#include "TestWindow.h"
#include "TestWindow2.h"

Fl_Color originalColor;
Fl_Input* passwordInput;
Fl_Window* LogInScreen;
//Fl_Multiline_Output* output;
std::string inputText;



Window1::Window1()

{
	win = new Fl_Window(500, 600, 300, 200, "DiligentWorkerTesting");

	Fl_Button* button = new Fl_Button(100, 100, 120, 30, "Открыть окно 2");
	button->callback(openWindow2, this);

	Fl_Button* button1 = new Fl_Button(50, 50, 120, 30, "Нажми меня");
	button1->callback(changeButtonColor, this);

	Fl_Button* Log = new Fl_Button(150, 150, 120, 30, "Администратор");
	Log->callback(openLogInScreen, this);

}

LogInAdmin::LogInAdmin()

{
	LogInScreen = new Fl_Window(400, 200, "Авторизация");
	passwordInput = new Fl_Input(100, 50, 120, 25, "Пароль:");
	//passwordInput->type(FL_SECRET);
	Fl_Button* submitButton = new Fl_Button(100, 100, 120, 25, "Войти");
	submitButton->callback(submitButtonCallback);
}

Menu::Menu()

	{
		menuScreen = new Fl_Window(1200, 800, "Меню Администратора");
		Fl_Button* buttonKonstructor = new Fl_Button(100, 100, 120, 30, "Конструктор тестов");
		buttonKonstructor->callback(openKonstructor, this);
		Fl_Button* buttonTestList = new Fl_Button(100, 200, 120, 30, "Список тестов");
		buttonTestList->callback(openTestsList, this);
		Fl_Button* buttonResultList = new Fl_Button(100, 300, 120, 30, "Результаты испытуемых");
		buttonResultList->callback(openResultList, this);
			
	}

Konstuctor::Konstuctor()
{
	konstrucorScreen = new Fl_Window(1200, 800, "Конструктор Тестов");
	
	Fl_Button* textButton = new Fl_Button(150, 10, 100, 30, "Написать вопрос");
	textButton->callback(enterText, this);
	//output = new Fl_Multiline_Output(300, 100, 400, 200, "Display text: ");

}

KonstuctorAddQ::KonstuctorAddQ()
{

	questionScreen = new Fl_Window(440, 150, "Text Input and Display Example");
	Fl_Multiline_Input* input = new Fl_Multiline_Input(100, 20, 200, 30, "Enter text: ");
	Fl_Button* buttonSaveText = new Fl_Button(100, 60, 100, 30, "Сохранить вопрос");
	Fl_Button* buttonCloseText = new Fl_Button(200, 60, 100, 30, "Закрыть");
	Fl_Button* editButton = new Fl_Button(150, 150, 100, 30, "Изменить");
	
	buttonSaveText->callback(saveAndDisplayText, static_cast<void*>(input));
	buttonCloseText->callback(closeText, this);

	
}





void KonstuctorAddQ::saveAndDisplayText(Fl_Widget* btn, void* data) {

	inputText = static_cast<Fl_Multiline_Input*>(data)->value(); // Получаем текст из Fl_Input и сохраняем его в глобальную переменную
	//output->value(inputText.c_str()); // Отображаем текст в Fl_Output

}


void Konstuctor::show() {

	konstrucorScreen->show();
	Fl::run();
}
void Konstuctor::hide()
{
	konstrucorScreen->hide();
}


void Menu::show() {

	menuScreen->show();
	Fl::run();
}
void Menu::hide()
{
	menuScreen->hide();
}

void LogInAdmin::hide()
{
	LogInScreen->hide();
}



void LogInAdmin::submitButtonCallback(Fl_Widget* widget, void* data) {

	//Fl_Button* submitButton = (Fl_Button*)widget;
	/*
	
	
	*/
	const char* password = passwordInput->value();
	if (strcmp(password, "admin1") == 0) {

		//LogInAdmin* LogInScreen = (LogInAdmin*)data;
		LogInScreen->hide();
		Menu menuScreenShot;
		menuScreenShot.show();
		
	}
	else {
		//Menu menuScreen;
		//menuScreen->label("Неверный пароль");
		passwordInput->value("");
	}
}

void LogInAdmin::show() {

	LogInScreen->show();
	//Fl::run();
}



void Window1::changeButtonColor(Fl_Widget* widget, void* data) {
	
	Fl_Button* button1 = (Fl_Button*)widget;
	// Преобразуем указатель на виджет в указатель на кнопку
	if (button1->color() != FL_GREEN) {
		originalColor = button1->color();
		button1->color(FL_GREEN);
	}
	else {
		button1->color(originalColor);
	}
}

void Window1::show() {
		
	win->show();
	Fl::run();
}
void Window1::hide()
{
	win->hide();
}

void Window1::end()
{
	win->end();
}





void KonstuctorAddQ::show() {

	questionScreen->show();
	Fl::run();
}
void KonstuctorAddQ::hide()
{
	questionScreen->hide();
}

void Window1::openWindow2(Fl_Widget* widget, void* data) {

	Window1* window1 = (Window1*)data;

	Window2 window2;
	window1->hide();
	window2.show();
	
}

void Window1::openLogInScreen(Fl_Widget* widget, void* data) {

	Window1* win = (Window1*)data;
	win->hide();
	LogInAdmin LogInScreen;
	LogInScreen.show();

}

void Menu::openKonstructor(Fl_Widget* widget, void* data) {

	Menu* menuScreen = (Menu*)data;
	menuScreen->hide();
	Konstuctor konstructorScreen;
	konstructorScreen.show();

}

void Menu::openTestsList(Fl_Widget* widget, void* data) {

	Menu* menuScreen = (Menu*)data;
	menuScreen->hide();
	Konstuctor konstructorScreen;
	konstructorScreen.show();

}

void Menu::openResultList(Fl_Widget* widget, void* data) {

	Menu* menuScreen = (Menu*)data;
	menuScreen->hide();
	Konstuctor konstructorScreen;
	konstructorScreen.show();

}

void Konstuctor::enterText(Fl_Widget* widget, void* data) {
/*
	Fl_Window* windowText = new Fl_Window(440, 150, "Text Input and Display Example");
	Fl_Input* input = new Fl_Input(100, 20, 200, 30, "Enter text: ");
	Fl_Button* saveButton = new Fl_Button(100, 60, 100, 30, "Save");
	saveButton->callback(saveAndDisplayText, static_cast<void*>(input)); // Устанавливаем callback на кнопку сохранения 
	windowText->end();
	windowText->show();
*/
	KonstuctorAddQ questionScreen;
	questionScreen.show();

}

void KonstuctorAddQ::closeText(Fl_Widget* btn, void* data) {

	KonstuctorAddQ* questionScreen = (KonstuctorAddQ*)data;

	questionScreen->hide();
	
}