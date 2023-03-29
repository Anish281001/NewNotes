#include<iostream>
#include<vector>
using namespace std;

struct Node
{
  int data;

  Node *left , *right;

  Node(int val)
{
     data = val;
     left = NULL;
     right = NULL;
  }
  
};
  
  bool getpath(Node *root , int key , vector<int> &path)
  { 

    if(root == NULL)
    {
      return false ;
    }

    path.push_back(root->data);
    if(root->data == key)
    {
      return true;
    }

    if(getpath(root->left , key ,path) || getpath(root->right , key , path))
    {
      return true ;
    }

     path.pop_back();
     return false ;

  }


 int lca(Node* root , int n1 , int n2 )
 {
    vector<int> path1 , path2 ;

    if(!getpath(root , n1 , path1) || !getpath(root , n2 , path2))
    {
      return -1;
    }

    int pc ;
    for(pc =0 ; pc <path1.size() && path2.size() ;pc++)
    {
      if(path1[pc] != path2[pc])
      {
        break;
      }
    }
 
   return path1[pc-1];

}


int main()
{
  Node *root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->right->left = new Node(5);
  root->right->right = new Node(6);
  root->right->left->left = new Node(7);

  int n1 = 7 ;
  int n2 = 6;

  int LCA = lca(root , n1 , n2 );

  if(LCA == -1)
  {
    cout<<"lca doesn't exist"<<endl;

  }
  else{
    cout<<"lca is " << lca <<endl;
  }

  return 0;
}
                   