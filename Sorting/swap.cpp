#include<iostream>
using namespace std;
void swap(int*x, int*y){
    int z;
    z = *y;
     *y = *x;
     *x =z;
}
// int main(){
//     int a,b;
//     a= 2,b=4;
//     cout<< a <<b <<endl;
//     swap(&a,&b);
//     cout << a << b;

//     return 0;
// }