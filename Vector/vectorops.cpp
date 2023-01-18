#include<iostream>
using namespace std;
#include <vector>
int main(){
vector <int> v;
// vector <int> *vec = new vector<int>();
// insert element
v.push_back(10);
v.push_back(20);
v.push_back(30);
// indexing
cout << v[1]<<endl;
cout << v.at(1) << endl;
// vector size
cout << v.size() << endl;
// vector iteration
for (int i = 0; i < v.size(); i++)
{
cout << v[i] << endl;   
}

return 0;
}
