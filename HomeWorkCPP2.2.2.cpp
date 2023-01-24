#include <iostream>
//#include <locale.h>
#include <windows.h>

struct bank {
    long long score;
    std::string name;
    long money;
};

void dep(bank& owner, long& newmoney) {
    owner.money = newmoney;
}

int main()
{
    long newmoney = 0;
    bank owner;
    //setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Введите номер счёта: ";
    std::cin >> owner.score;
    std::cout << "Введите имя владельца: ";
    std::cin >> owner.name;
    std::cout << "Введите баланс: ";
    std::cin >> owner.money;
    std::cout << "Введите новый баланс: ";
    std::cin >> newmoney;
    dep(owner, newmoney);
    std::cout << "Ваш счёт: " << owner.name << ", " << owner.score <<", " << owner.money << std::endl;
}