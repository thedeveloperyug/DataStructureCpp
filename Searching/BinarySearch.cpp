// Program Name: Binary Search
// Author: Yogesh Pandey


#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int x){
    int start=0, end=n-1;
    while(start <= end){
        int mid = (start+end)/2; // Divided start and end index of array by 2.
        if(arr[mid]==x){
            return mid; //if desired element founded, return it
        }
        else if(x < arr[mid]){
            end = mid - 1; //if element is less than mid, set end as mid - 1;
        }
        else{
            start = mid + 1; //if element is greater than mid, set start as mid + 1;
        }
    }
    return -1;
}

int main(){
    int n; //take input for array size from user
    cout <<"Enter the Size of array: ";
    cin >> n;
    int input[100];
    cout << "Enter element separated by space: " << endl;
    for(int i=0; i<n;i++){
        cin >> input[i]; // Enter element
    }
    int x; 
    cout << "Enter the element that you want to search: " ;
    cin >> x;  //Search for the element
    cout << "Searching..." << endl;
    
    cout<<"Your element present at index: "<< binarySearch(input,n,x) << endl;
}