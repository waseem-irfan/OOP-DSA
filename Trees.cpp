#include <iostream>
using namespace std;

struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;

};

// Creation of Node in dynamic memory or heap:
BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode;
    // (*newNode).data = data;
    // OR
    newNode ->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;

}

// Function to insert in BST, returns address of root node.
BstNode* insert(BstNode* root , int data){
    if(root == NULL){
        root = GetNewNode(data);

    }
    else if(data<=root->data){
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
    return root;
}

// Making function to search a number.
bool search(BstNode* root, int data){
    if(root == NULL){
        return false;
    }
    else if(root->data== data){
        return true;
    }
    else if(data <= root->data){
        return search(root->left,data);
    }
    else{
        return search(root->right,data);
    }

}

// Deletion of a Node.
BstNode* delete(BstNode* root , int data){
    if(root == NULL){
        return root;
    }
    else if(data < root->data){
        root->left = delete(root->left,data);
    }
    else if(data>root->data){
        root->right = delete (root->right, data);
    }
    else{
        // Case 1: No child
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        // Case 2: One child
        else if(root->left == NULL){
            BstNode* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            BstNode* temp = root;
            root = root->left;
            delete temp;
        }
        // Case 3: With two children
        else{
            BstNode* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = delete(root->right,temp->data);
        }
        return root;

    }
}

int main(){
    BstNode* root =NULL; // pointing to the address of root
    root = insert(root,12);
    root = insert(root,17);
    root = insert(root,22);
    root = insert(root, 5);
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    cout<<endl;
    if(search(root,number)==true){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found."<<endl;
    }
    
    return 0;
}