﻿# CMakeList.txt: проект CMake для filmSearchEngine; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (filmSearchEngine "src/filmSearchEngine.cpp" "include/filmSearchEngine.h" "include/Configuration.h" "include/ConverterJSON.h" "include/Entry.h"   "src/Configuration.cpp" "src/ConverterJSON.cpp" "src/Entry.cpp"  )

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
target_link_libraries(filmSearchEngine PRIVATE nlohmann_json::nlohmann_json)
target_include_directories(filmSearchEngine PUBLIC include)