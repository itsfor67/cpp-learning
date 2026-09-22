#include<iostream>
using namespace std;


bool isPrime(int a){


    if (a < 2){

        return false;
    }

    bool num = true;

    for (int i = 2; i < a; i++){

        if(a%i == 0){
            num = false;
            break;

        }
        
    }

    return num;
} 

int main(){



    int n;

    cout << " enter a Number to check wether its prime or not: ";
    cin >> n;

    int b = isPrime(n);

    cout << (b ? "isprime" : "not a prime");
}