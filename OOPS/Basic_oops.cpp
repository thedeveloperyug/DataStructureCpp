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
char *name;

// Static member belong to the class 
static int timetoComplete;

// Default Constructor 
Hero(){
    name = new char[100];
    cout << "Hero default Constructor Called" << endl;
}
// // Writing copy constructor manually
Hero(Hero& temp){
    this->grade = temp.grade;
    char *ch = new char[strlen(temp.name)+1];
    strcpy(ch, temp.name);
    this->name =ch;
}

// Parameterized Constructor called
Hero(int h){
    this->health = h;
    // cout << "Hero Constructor Called " << h << endl;
}


// getter for private data members
int getGrade(){
    return grade;
}
// setter for private data member
int setGrade(int g){
    this->grade = g;
    return g;
}
int setName(char name[]){
    strcpy(this->name,name);
  
}
// Static functions can only access the static members
int static example(){
    return timetoComplete;
}

~Hero(){
    cout<< "Destructor Called" << endl;
}

};
// we have to initialize the static data member outside of the class before being used with help of scope resolution operator.
int Hero::timetoComplete=30;

int main(){

    // Static Object Creation
    Hero h1;
    cout<<"Size of Hero Class " << sizeof(h1)<<endl;
    h1.health = 35;
    cout<< "Hero's Health with static allocation "<< h1.health<<endl;

    // Updating Private Data Member
    h1.setGrade(10);
    // Printing Private Data Member
    cout<<"Hero's Grade " << h1.getGrade()<<endl;

    // Copy Constructor
    Hero my_hero1;
    my_hero1.setGrade(7);
    Hero my_hero2(my_hero1);
    cout << "Hero's Grade with Copy Constructor  "<< my_hero2.getGrade() << endl; 


    // Shallow & Deep Copy
    // Default constructor do shallow copy for Deep copy you have to manually set the updated value in copy constructor
    Hero d1;
    d1.setName("Yogesh");
    cout << "d1 Name : " << d1.name << endl;      
    Hero d2(d1);
    cout << "d2 Name : " << d2.name << endl;    
    d1.name[5] = 'P';
    cout << "d1 Name : " << d1.name << endl;       
    cout << "d2 Name : " << d2.name << endl; 

    // Dynamic Object Creation
    Hero *b = new Hero(10);
    b->setGrade(11);
    cout<<"Hero's health with parameterized constructor " << b->health<<endl;
    cout  << "Hero's Grade with dynamic allocation (*b) " << (*b).getGrade() << endl;
    cout  << "Hero's Grade with dynamic allocation b-> " << b->getGrade() << endl;

    // Accessing Static data member without any objects
    cout <<"Static Data Member " << Hero::timetoComplete<<endl;
    cout <<"Static Function "  << Hero::example()<<endl;

    return 0;
}