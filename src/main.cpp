//#include "Headers/Konstructor.h"
#include "Headers/Client.h"
//#include "Headers/UX_UI.h"


int main(int agrc, char **argv)
{
   
    Client client;
    client.Run();
    return Fl::run();;
}

/*Работа С ДБ
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    sqlite3* DB;
    int exit = 0;
    sqlite3_open("C:/ATP/DTF/external/db.db", &DB);

    if (exit) {
        cerr << "Error" << sqlite3_errmsg(DB) << endl;
        return -1;
        }
    else {
        cout << "Open DB" << endl;
    }
    sqlite3_close(DB);
    return 0;
}

*/

//Создание теста
/*
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/fl_ask.H>
#include <string>

class MyClass {
public:
    MyClass(const char* name) : objectName(name) {}

    void showObjectName() {
        fl_alert("Object Name: %s", objectName.c_str());
    }

private:
    std::string objectName;
};

void createObjectCallback(Fl_Widget* widget, void* data) {
    Fl_Window* mainWindow = (Fl_Window*)widget->parent();
    Fl_Input* input = (Fl_Input*)data;
    const char* objectName = input->value();

    MyClass* newObj = new MyClass(objectName);
    newObj->showObjectName();

    mainWindow->copy_label(objectName); // Обновляем название окна
}

int main() {
    Fl_Window mainWindow(250, 150, "Create Object Example");

    Fl_Input objectNameInput(20, 20, 210, 30, "Enter Object Name:");
    Fl_Button createObjectButton(80, 70, 100, 40, "Create Object");
    createObjectButton.callback(createObjectCallback, &objectNameInput);

    mainWindow.end();
    mainWindow.show();

    return Fl::run();
}
*/