﻿#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "Usage: ./convert {command} {string}" << std::endl;
        return 1;
    }

    std::string command = argv[1];
    std::string text = argv[2];

    if (command == "up") {
        // Преобразование в верхний регистр
        for (char& c : text) {
            c = std::toupper(c);
        }
    }
    else if (command == "down") {
        // Преобразование в нижний регистр
        for (char& c : text) {
            c = std::tolower(c);
        }
    }
    else {
        std::cout << "Invalid command" << std::endl;
        return 1;
    }

    // Вывод результата
    std::cout << text << std::endl;

    return 0;
}