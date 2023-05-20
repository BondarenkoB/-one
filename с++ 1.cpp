#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double velocity, time, acceleration;

    cout << "Введіть значення швидкості (v): ";
    cin >> velocity;

    cout << "Введіть значення часу (t): ";
    cin >> time;

    cout << "Введіть значення прискорення (a): ";
    cin >> acceleration;

    double distance = velocity * time + (acceleration * time * time) / 2;

    cout << "Пройдена відстань: " << distance << endl;

    return 0;
}
