#include <iostream>
using namespace std;
#include <math.h>

int main() {
    /*cout << "helloworld" << endl;

    int a = 0;
    int b = a + 1;
    if((a=3)==b){
        cout << a;
    }else{
        cout << a + 1;
    }*/

   /* char a;
    cin >> a;

    if(a >= 'A' && a <= 'Z'){
        cout << "the character is upper case" << endl;

    }if(a>= 'a'&& a<='z'){
        cout << "character is lower case" << endl;

    }if(a>='0'&&a<='9'){
        cout << "this is numeric";
    }*/

    /*int a;
    cin >> a;
    int b = 1;
    while(b <= 10){

        cout << a * b<<endl;
        b = b + 1;
    }*/

    /*int a;
    cin >> a;

    int b = 1;

    while(b<=a){

        int c = 1;

        while(c<=b){
            cout << c;
            c = c + 1;
            
        }
        cout << endl;

        b = b + 1;
    }*/

    //bitwise operator

    /*int a = 4;
    int b = 6;

    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a " << ~a << endl;
    cout << "a^b " << (a ^ b) << endl;*/



    //finbonacii series

   /*int a;
    cin >> a;

    int b = 0;
    int c = 1;
  

    for (int i = 1;i<=a ;i++)
    {
        cout << b << " "; 

        int sum = b + c;


        

       
        b = c;
       c = sum;

    }*/

   /* int a;
    cin >> a;

    bool isprime = 1;

    for (int i = 2; i < a;i++){

        if (a % i == 0){

            cout << "NOT PRIME"<<endl;
            isprime = 0;
            break;
        }
    }

    if (isprime == 0){
        cout << "not a prime number ";

    }else{
        cout << "it is prime number ";
    }*/
      int a;
    cin >> a;

    int ans = 0;
    int place = 1; // represents 10^i, kept as an integer

    while (a != 0) {
        int bit = a & 1;
        ans = ans + bit * place;

        a = a >> 1;
        place *= 10;
    }

    cout << "answer is " << ans << endl;
   


}
