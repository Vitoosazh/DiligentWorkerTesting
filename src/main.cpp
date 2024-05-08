#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Box.H>


Fl_Window* new_window;


// Функция-обработчик для кнопки
void close_button_callback(Fl_Widget* widget, void* userdata)
{
    // Закрываем окно
    new_window->hide();
}

void open_button_callback(Fl_Widget* widget, void* userdata)
{
    // Закрываем окно
    new_window = new Fl_Window(300, 200, "Новое окно");
    Fl_Button* close_button = new Fl_Button(50, 50, 200, 100, "Закрыть окно");
    new_window->show();

    close_button->callback(close_button_callback);
}


int main()
{

    // Создаем главное окно
    Fl_Window* window = new Fl_Window(400, 300, "Пример программы с библиотекой FLTK" );
    ;
    // Создаем кнопку
    Fl_Button* button = new Fl_Button(150, 150, 100, 50, "Нажми меня");
    
    

    // Устанавливаем функцию-обработчик для кнопки
    button->callback(open_button_callback);

    //

        // Создаем кнопку закрытия нового окна


        // Отображаем новое окно

   

    // Отображаем главное окно
    window->end();
    window->show();

    // Запускаем главный цикл обработки событий
    return Fl::run();
}