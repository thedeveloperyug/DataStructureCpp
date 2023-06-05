#include<bits/stdc++.h>
using namespace std;

class Hero{
// Private Data Members
private:
int grade;

// Public Data members
public:
int health;
char level;

// getter for private data members
int getGrade(){
    return grade;
}
// setter for private data member
int setGrade(int g){
    grade = g;
    return g;
}



};

int main(){
    // Static Object Creation
    Hero h1;
    cout<<"Size of Hero Class " << sizeof(h1)<<endl;
    h1.health = 35;
    cout<< "Hero's Health "<< h1.health<<endl;

    // Updating Private Data Member
    h1.setGrade(10);
    // Printing Private Data Member
    cout<<"Hero's Grade " << h1.getGrade()<<endl;

    return 0;
}