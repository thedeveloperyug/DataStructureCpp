#include <vector>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;  // Tree data value
    vector <TreeNode<T>*> child;  //store child address and T type of data in a vector
   TreeNode(T data){
    this->data = data;
   }
};
