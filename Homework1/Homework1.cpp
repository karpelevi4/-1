#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    //Задание «Имя». Написать программу, которая выводит на экран Ваше имя.
    string n;
    cout << "Your name: ";
    cin >> n;
    cout << "Your name is " << n << endl << endl;

    // Задание «Арифметика». Ввести с клавиатуры два числа и найти их сумму, 
    // разность, произведение и, если возможно, частное от деления одного на другое.
    double number1, number2;
    cout << "First number: ";
    cin >> number1;
    cout << "Second number: ";
    cin >> number2;
    cout << "Sum: " << number1 + number2;
    cout << "\nDifference: " << number1 - number2;
    cout << "\nMultiplication: " << number1 * number2;
    if (number2 == 0) {
        cout << "\nDivision: not possible";
    }
    else {
        cout << "\nDivision: " << number1 / number2 << endl << endl;
    }

    // Задание «Уравнение». Для любых введенных с клавиатуры b и c 
    // решить уравнение вида bx + c = 0
    double b, c;
    cout << "bx + c = 0\nb: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    if ((c == 0) && (b == 0)) {
        cout << "x = any number" << endl << endl;
    }
    else {
        if (b == 0) {
            cout << "x = no solutions" << endl << endl;
        }
        else {
            cout << "x = " << -(c / b) << endl << endl;
        }
    }

    // Задание «Еще уравнение». Для любых введенных с клавиатуры 
    // a, b и c решить уравнение вида ax^2 + bx + c = 0.
    double A, B, C, disc;
    cout << "ax^2 + bx + c = 0\na: ";
    cin >> A;
    cout << "b: ";
    cin >> B;
    cout << "c: ";
    cin >> C;
    disc = B * B - 4 * A * C;
    if ((A == 0) && (B == 0) && (C == 0)) {
        cout << "x = any number" << endl << endl;
    }
    else {
        if (((A == 0) && (B == 0)) || (disc < 0)) {
            cout << "x = no solutions" << endl << endl;
        }
        else {
            if (A == 0) {
                cout << "x = " << -(c / b) << endl << endl;
            }
            else {
                cout << "x1 = " << (-B + sqrt(disc)) / (2 * A) << "\nx2 = " << (-B - sqrt(disc)) / (2 * A) << endl << endl;
            }
        }
    }

    // Задание «Лампа со шторой». В комнате светло, если на улице 
    // день и раздвинуты шторы или если включена лампа.Ваша программа 
    // должна, в зависимости от времени суток и состояния лампы и штор,
    // отвечать на вопрос, светло ли в комнате.
    int da, la, cu;
    string day, lamp, curt;
    do {
        cout << "Is it night? ";
        cin >> day;
        if (day == "no") {
            da = 3;
        }
        else {
            if (day == "yes") {
                da = 1;
            }
            else {
                cout << "The answer must be yes or no" << endl;
                da = 0;
            }
        }
    } while (da <= 0);
    do {
        cout << "Are the curtains closed? ";
        cin >> curt;
        if (curt == "no") {
            cu = 3;
        }
        else {
            if (curt == "yes") {
                cu = 1;
            }
            else {
                cout << "The answer must be yes or no" << endl;
                cu = 0;
            }
        }
    } while (cu <= 0);
    do {
        cout << "Is the lamp turned on? ";
        cin >> lamp;
        if (lamp == "yes") {
            la = 6;
        }
        else {
            if (lamp == "no") {
                la = 1;
            }
            else {
                cout << "The answer must be yes or no" << endl;
                la = 0;
            }
        }
    } while (la <= 0);
    if (da + la + cu >= 6) {
        cout << "It is light in the room." << endl;
    }
    else {
        cout << "It is dark in the room" << endl;
    }
    
    return 0;
}
