﻿// Homworck2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#define PI 3.14159265

using namespace std;

float a, b, c, d, h, R;

int main()
{
    setlocale(LC_ALL, "RUS");

    cout << "Введите длины" << endl;
    cin >> a >> b >> d >> c >> h >> R;
    cout << "Периметр трапеции равен" << a + b + c + d << endl;
    cout << "Площадь трапеции равна" << ((a + b) / 2) * h << endl;
    cout << "Периметр квадрата" << 4 * a << endl;
    cout << "Площадь квадрата" << 2 * a * a << endl;
    cout << "Периметр круга" << 2 * PI * R << endl;
    cout << "Площадь круга" << 2 * R * R << endl;

    return 0;
};


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.