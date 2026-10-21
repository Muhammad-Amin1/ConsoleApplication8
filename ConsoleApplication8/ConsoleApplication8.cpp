#define NOMINMAX
#include <Windows.h>
#include <iostream>
#include <string>
#include <limits>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); //1251 CP_UTF8 65001
    srand(time(NULL));

    while(true)
    {
        system("cls");
        std::cout << "\t\t ------ Создание Акаунту ------ \n";
        std::cout << "Введите логин: ";
        std::string login_player;
        std::getline(std::cin, login_player, '\n');

        std::cout << "\t\t ------ пароль должен быть от 5 до 15 !!! ------ \n ";

        std::cout << "Введите пароль: ";
        std::string password_player;
        std::getline(std::cin, password_player, '\n');

        if (password_player.size() >= 5 && password_player.size() <= 15)
        {
            std::cout << "Поздравляю акаунт создан !!! ";
            Sleep(1000);

            while (true)
            {
                system("cls");
                std::cout << "\t\t ------ Вход в Акаунту ------ \n";

                std::cout << "Введите логин: ";
                std::string login_save_player;
                std::getline(std::cin, login_save_player, '\n');

                std::cout << "Введите пароль: ";
                std::string password_save_player;
                std::getline(std::cin, password_save_player, '\n');

                if (login_save_player == login_player && password_save_player == password_player)
                {
                    std::cout << "Поздравляю вы успешно зашли в акаунт !!! ";
                    Sleep(1500);
                    break;
                }

                else
                {
                    std::cout << "Вы вели неправильно  !!! ";
                    Sleep(1500);
                }

            }


        }

        else
        {
            std::cout << "Вы вели неправильно";
            Sleep(1500);
        }

    }




    


/*
#define NOMINMAX
#include <Windows.h>
#include <iostream>
#include <string>
#include <limits>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251); //1251 CP_UTF8 65001
    srand(time(NULL));

    std::string a;
    int b;

    std::getline(std::cin, a);  // (откуда_инфаб, куда положить)
    std::cout << a << std::endl;


    std::cin >> b;
    std::cout << b << std::endl;
    // std::cin.ignore(32767, '\n'); очистка буфера
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // топовая очистка буфера

    std::getline(std::cin, a, '\n'); // (откуда_инфаб, куда положить, до какого символа читать)
    std::cout << a << std::endl;

*/
/*
    std::string name = "Text";

    std::string name1 = "psp" + name;


    std::cout << name << " ";

    std::cout << name << " " << name1 << "\n";

    for (int i = 0; i < name.size(); i++)
    {
        std::cout << name[i] << "\n";
    }
*/
/*
std::string a;
    int b;

    std::cin >> b;
    std::cout << b << "\n";

    std::cin >> a;
    std::cout << a << "\n";

    std::cin >> b;
    std::cout << b << "\n";

*/
/*
    std::string a;
    int b;

    std::getline(std::cin, a);  // (откуда_инфаб, куда положить)
    std::cout << a << std::endl;


    std::cin >> b;
    std::cout << b << std::endl;
    std::cin.ignore(32767, '\n');

    std::getline(std::cin, a, '\n'); // (откуда_инфаб, куда положить, до какого символа читать)
    std::cout << a << std::endl;
*/
    

    return 0;

}


