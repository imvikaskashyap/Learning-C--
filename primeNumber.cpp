#include <iostream>

using namespace std;

// check prime number 

// int main(){
//     int n;
// cin >> n;
// int i;

// for (i = 2; i < n;i++){
//     if(n%i==0){
//         cout << "Non Prime" << endl;
//         break;
//     }
// }if(i==n){
//         cout << "Prime" << endl;
//     }
//     return 0;
// }


// check prime number from a to b
int main(){
int a, b;
cin >> a >> b;

for (int num = a; num <=b; num++){
    int i;
    for (i = 2; i < num; i++){
        if(num%i==0)
        {
            break;
        }

    }
    if(i==num){
        cout << "Prime number : " << num << endl;
    }
}
return 0;
}