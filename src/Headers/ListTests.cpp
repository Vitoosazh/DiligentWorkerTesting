#include "ListTests.h"
#include "Client.h"

namespace lTests {
	Client* client;
}

ListTests::ListTests(void* data) : Fl_Double_Window(300, 200, "����") {

	lTests::client = (Client*)data;

	

}

