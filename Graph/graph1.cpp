#include<iostream>
using namespace std;
void print_it(int** edgearr,int n, int sv, bool* visited){
    cout << sv << endl;
    visited[sv] = true;
    for (int i = 0; i < n; i++){
        if (i==sv) //sv =  starting vertex
        {
            continue; // skip it jump to next condition
        }
        if (edgearr[sv][i]==1){
            if (visited[i]){
                continue;
            } 
            print_it(edgearr,n,i,visited);
        }
    }
}

int main(){
    int e, n;
    cout << "Enter number of  vertices and edges ";
    cin>> n >>e ;
    int** edgearr = new int*[n]; //2D array of edges
    for (int i = 0; i <n; i++){
        edgearr[i] = new int[n];
        for (int j = 0; j <n; j++){
            edgearr[i][j] = 0; //filled with 0 value in 2D matrix
        }   
    }
    for (int i = 0; i <e; i++)
    {
        int f,s;
        cout << "Enter "<< i<< "th pair of Vertex: ";
        cin >> f >> s;
        edgearr[f][s]=1;
        edgearr[s][f]=1;
    }
   bool* visited = new bool[n];
   for (int i = 0; i < n; i++){
    visited[i]=false;
   }
   
    print_it(edgearr,n,0,visited);    
    return 0;
}