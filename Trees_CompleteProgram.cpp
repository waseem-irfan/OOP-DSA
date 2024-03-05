#include<iostream>
using namespace std;
struct BstNode{
    int data;
    BstNode* left ;
    BstNode* right;

};
//Creation of a new Node in heap/dynamic memory allocation
BstNode* GetnewNode(int data){
    BstNode* newNode = new BstNode;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insertion of a Node
BstNode* insert(BstNode* root , int data){
    if(root==NULL){
        root = GetnewNode(data);
    }
    else if(data<= root->data){
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
}

// Inorder Traversal

void Inorder(BstNode* root){
    if(root==NULL){
        return;
    }
    // left traversl
    Inorder(root->left);
    // root Traversal;
    cout<<root->data<<"->";
    //Right Traversal
    Inorder(root->right);
}
//Searching a Node
bool Search(BstNode* root,int data){
    if(root==NULL){
        return false;
    }
    else if(root->data==data){
        return true;
    }
    else if(data<=root->data){
        return Search(root->left,data);
    }
    else{
        return Search(root->right,data);
    }
}
BstNode *FindMin(BstNode *node) {
  BstNode *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}


// Deleting a Node
BstNode* Delete(BstNode* root, int data){
    
    if(root==NULL){
        return root;
    }
    else if(data<root->data){
        root->left = Delete(root->left,data);
    }
    else if(data>root->data){
        root->right = Delete(root->right,data);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
        }
        else if(root->left==NULL){
            BstNode* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            BstNode* temp = root;
            root = root->left;
            delete temp;
        }
        else{
            BstNode* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
        return root;
    }
}

int main(){
    BstNode* root = NULL;
    root = insert(root,45);
    root = insert(root,12);
    root = insert(root,4);
    root = insert(root,7);
    root = insert(root,43);
    root = insert(root,24);
    cout<<"InOrder travel: "<<endl;
    Inorder(root);
    cout<<endl;
    int num;
    cout<<"Enter a Node that you want to find: ";
    cin>>num;
    cout<<endl;
    if(Search(root,num)==true){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    int num2;
    cout<<"Enter a Node You want to delete: ";
    cin>>num2;
    cout<<endl;
    root = Delete(root,num2);
    Inorder(root);

    return 0;
}