#include<iostream>
using namespace std;
#include <utility> 
void swaping(int sw[],int size){

   

  for (int i = 0; i < size; i += 2)
{
    if(i+1<size)
    {
       swap(sw[i], sw[i+1]);
    }
}
}









int main(){

    int arr[5] = {1, 3, 2, 5, 6};

    swaping(arr, 5);

    for (int i = 0; i < 5;i++)
    {
        cout << arr[i];
    }
}