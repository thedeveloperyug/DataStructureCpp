#include<iostream>
#include "swap.cpp"
using namespace std;
void bubbleSort(int* arr, int size){

    for (int i = 0; i < size-1; i++)
    {
      for (int j = 0; j < size-1-i; j++)
      {
        if(arr[j]>arr[j+1])
        swap(arr+j,arr+j+1); // we directly swap array because swap takes reference  variable as args.
      }
      
    }
    
}
int main(){
    int *arr, size;
    cin>> size;
    arr = new int[size];
    for (int i = 0; i <size; i++)
    {
        cin >> *(arr+i);
    }
    bubbleSort(arr,size);
     for (int i = 0; i <size; i++)
    {
        cout <<endl<< *(arr+i) << " index:"<< +i;
    }
    
    return 0;
}