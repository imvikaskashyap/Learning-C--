#include <iostream>

using namespace std;

// int main()
// {
//     char button;
//     cout << "press the button" << endl;
//     cin >> button;

//     switch (button)
//     {
//     case 'a':
//         cout << "Hello" << endl;
//         break;
//     case 'b':
//         cout << "Namaste" << endl;
//         break;
//     case 'c':
//         cout << "Salut" << endl;
//         break;
//     case 'd':
//         cout << "Hola" << endl;
//         break;
//     case 'e':
//         cout << "Ciao" << endl;
//         break;

//     default:
//         cout << "you have not press correct button" << endl;
//         break;
//     }
// }

// simple calculator

int main()
{
    char op;
    int num1, num2;
    cout << "input 2 numbers" << endl;
    cin >> num1 >> num2;
    cout << "input an operator" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 / num2 << endl;
        break;

    default:
        break;
    }

    return 0;
}