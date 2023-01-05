#include <iostream>

using namespace std;

int main (){
// continue


    for (int i = 1; i < 100; i++){

        if(i%2==0){
            continue;
        }
            cout << "you can go outside on :"<< i<< endl;

        if (i%3==0){
            continue;
        }
        cout << i << endl;


    }



    return 0;
}