#include<iostream>
using namespace std;
#include<climits>

int GetMax(int h [], int size){
    int max = INT_MIN;

    for (int i = 0; i < size;i++){


        if(h[i]>max){

            max = h[i];
        }

        
    }
    return max;
}


int GetMin(int m1[],int n){

    int min = INT_MAX;

    for (int i = 0; i < n;i++)
    {
      if(m1[i]<min){

          min = m1[i];
      }

        
    }
    return min;


}





int main(){

    int a;
    cin >> a;

    int arr[100];

    for (int i = 0; i < a;i++){

        cin >> arr[i];

    }

    cout << "maximum value is " << GetMax(arr, a) << endl;
    cout << "minimum value is " << GetMin(arr, a) << endl;
}
