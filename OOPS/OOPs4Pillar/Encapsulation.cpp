#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age=8;
    int height;
    public:
    
    
    int hidingInformaition(int a){
        this->age*=a;
        return age;
    }
    int getage(){
        return this->age;
    }
};
int main(){
    student s;
    // s.name = "shubham";
    // s.age = 20;
    // s.height = 180;
    // cout<<s.name<<endl;
    cout << s.hidingInformaition(7) <<endl;

    return 0;
}


// OUTPUT: 56