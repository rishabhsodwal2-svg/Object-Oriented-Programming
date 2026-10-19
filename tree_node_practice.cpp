# include <iostream>
using namespace std;
class treenode{
    public:
    int val;
    treenode *left;
    treenode*right;
    treenode(int v){
        val = v;
        left =NULL;
        right=NULL;
    }
}; 
void preorder(treenode*root){
    if(root==NULL) return ;
    cout<<root->val<<" ";  // root
    preorder(root->left);  // left
    preorder(root->right); // right
}
void inorder(treenode*root){
    if(root==NULL) return ;
    preorder(root->left);  //left 
    cout<<root->val<<" ";  //root
    preorder(root->right); //right
}
void postorder(treenode*root){
    if(root==NULL) return ;
    preorder(root->left); // left
    preorder(root->right); // right
    cout<<root->val<<" "; // root
}
int main(){// allocate the values dynamically;
    treenode *a = new treenode(10);
    treenode *b = new treenode(20);
    treenode *c = new treenode(30);
    treenode *d = new treenode(40);
    treenode *e = new treenode(50);
    treenode *f = new treenode(60);
    treenode *g = new treenode(70);
    // then linke all the nodes and binary tree is crated 
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    preorder(a);
    cout<<endl;
    inorder(a);
    cout<<endl;
    postorder(a);
    cout<<endl;  
}