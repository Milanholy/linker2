
#include <iostream>
#include <string>
#include "header_funk.h"

int main() {
    int x;
    std::string yes = "да";
    std::string k;
    std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
    std::cin >> k;
    if (k == yes) {
        std::cout << "Введите начальное значение счетчика: ";
        std::cin >> x;
        Counter c(x);
        while (true){
            char y;
            std::cout << "Введите команду ('+','-','=','x'): ";
            std::cin >> y;
            switch (y) {
                case '+':
                    c.incrim_count();
                    continue;
                case '-':
                    c.decrim_cout();
                    continue;
                case '=':
                    c.print_dig();
                    continue;
                case 'x':
                    return 0;
            }
        }
    }

    return 0;
}





