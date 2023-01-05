#include<iostream>

using namespace std;

int main(){
    int a;
    cout << "a:";
    cin >> a;

    int b;
    cout << "b:";
    cin >> b;

    int c;
    c = b;
    b = a;
    a = c;

    cout << "a:" << a << endl;
    cout << "b:" << b << endl;


    //     cin >> a;
    //     cin >> b;

    //  cout << a + b << endl;

    return 0;
}