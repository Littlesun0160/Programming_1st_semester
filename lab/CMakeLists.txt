cmake_minimum_required(VERSION 3.25.0) # Проверка версии CMake.
									 # Если версия установленой программы
									 # старее указаной, произойдёт аварийный выход.

set(PROJECT_NAME test) # задать константу с именем проекта 
project("${PROJECT_NAME}") # имя проекта 


set(CMAKE_CXX_STANDARD 17) # устанавливаем 17 стандарт языка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/")

add_executable("${PROJECT_NAME}" ConsoleApplication1.cpp
							src/reading.cpp
							inc/reading.hpp
							src/SimpleNum.cpp
							inc/SimpleNum.hpp
							src/SummOfElements.cpp
							inc/SummOfElement.hpp
							src/NormaSort.cpp
							inc/NormaSort.hpp
							src/Writing.cpp
							inc/Writing.hpp) # добавить исполняемый файл

					 
file(COPY файл.txt DESTINATION "/") # скопировать файл text.txt в корневую папку проекта
file(COPY итог.txt DESTINATION "/")