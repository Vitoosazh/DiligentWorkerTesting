cmake_minimum_required(VERSION 3.28.2 FATAL_ERROR)

project(DWT)

add_executable(DWT 
					src/main.cpp
					src/TestWindow/TestWindow.cpp
					src/TestWindow/TestWindow.h
					src/TestWindow/TestWindow2.h 
					src/TestWindow/TestWindow2.cpp
					src/Headers/StartScreen.cpp
					src/Headers/StartScreen.h
					src/Headers/Konstructor.cpp
					src/Headers/Konstructor.h
					src/Headers/UX_UI.cpp
					src/Headers/UX_UI.h
					src/Headers/Client.cpp
					src/Headers/Client.h
					src/Headers/LoginAdmin.cpp
					src/Headers/LoginAdmin.h
					src/Headers/Menu.cpp
					src/Headers/Menu.h
					src/Headers/ListTests.cpp
					src/Headers/ListTests.h
					src/Headers/ListResults.cpp
					src/Headers/ListResults.h
					src/Headers/LoginWorker.cpp
					src/Headers/LoginWorker.h
					src/Headers/Testing.cpp
					src/Headers/Testing.h
					

)
				


add_subdirectory(
					external/fltk
					external/sqlite
				
)

include_directories(external/sqlite)

target_link_libraries(DWT 
						
						fltk
						sqlite3
										
						
)

