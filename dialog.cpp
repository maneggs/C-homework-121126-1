#include <iostream>
#include <string>

int main()
{
    std::string name;
    int birthYear;

    std::cout << "Введите ваше имя: ";
    std::cin >> name;

    std::cout << "Укажите ваш год рождения: ";
    std::cin >> birthYear;

    std::cout << "Рад познакомиться, " << name << "!" << std::endl;
    std::cout << "В 2026 году вам исполняется (или уже исполнилось) " << 2026 - birthYear << " лет." << std::endl;

    return 0;
}
