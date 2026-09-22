#include<iostream>
using namespace std;
int series(int a){

    int b = 0;

    int c = 1;

    int temp = 0;

    for (int i = 0; i < a;i++){

        temp = c;

        c = b + c;

        b = temp;
        }

    return b;

}


int main(){

    int a;

    cin >> a;

    int b = series(a);

    cout << b;
}