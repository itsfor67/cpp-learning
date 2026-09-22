#include <iostream>
using namespace std;
#include <climits>
int max(int arr[],int size){

    int Maximum = INT_MIN;

    for (int i = 0; i < size;i++){

        if(arr[i]>Maximum){

            Maximum = arr[i];


        }

    }
    return Maximum;
}


int secondLargest(int secondL[],int size){



    int largest = max(secondL, size);

    int secondmax = INT_MIN;
    for (int i = 0; i < size;i++){


        if(secondL[i]>secondmax && secondL[i]<largest){

            secondmax = secondL[i];
        }

    }

    return secondmax;
}


int main(){

    int a;
    cin >> a;
    int num[100];

    for (int i = 0; i < a;i++){

        cin >> num[i];
    }

    cout << "the second largest number is: " << secondLargest(num, a);
}
