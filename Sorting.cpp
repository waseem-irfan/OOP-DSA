/*------------------Bubble Sorting -----------------*/
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void print_list(Node *head){
    Node* start = head;
    while (start)
    {
        cout<<start->data<<"->";
        start = start->next;
    }
    cout<<endl;
}
void swap(Node* node1, Node* node2){
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}

// function to Bubble Sort
void bubble_sort(Node* head){
    int swapped;
    Node* lptr; // left pointer will always point to the start of the list
    Node* rptr = NULL; // right pointer points to the end of the list.
    do{
        swapped = 0;
        lptr = head;
        while(lptr->next!= rptr){
            if(lptr->data>lptr->next->data){
                swap(lptr,lptr->next);
                swapped =1;
            }
            lptr = lptr->next;
        }
        //as the largest element is at the end of the list, assign that to rPtr as there is no need to
		//check already sorted list
        rptr = lptr;
    }while(swapped);
}

int main(){
    Node *head = new Node(2);
	head -> next = new Node(1);
	head -> next -> next = new Node(4);
	head -> next -> next -> next = new Node(3);
	head -> next -> next -> next  -> next = new Node(6);
	head -> next -> next -> next  -> next -> next = new Node(5);

	cout<<"The original list = "<<endl;
	print_list(head);

	bubble_sort(head);

	cout<<"The Sorted list = "<<endl;
	print_list(head);
    return 0;
}

/*----------------- Insertion Sorting ----------------*/
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int x)
//     {
//         val = x;
//         next = NULL;
//     }
// };

// class LinkedListIS
// {
// public:
//     Node *head;
//     Node *sorted;
//     void insert_at_beg(int val)
//     {
//         Node *newNode = new Node(val);
//         newNode->next = head;
//         head = newNode;
//     }
//     // Function to sort a list using insertion sort
//     void insertionSort(Node *headref)
//     {
//         sorted = NULL;
//         Node *current = headref;
//         // Traverse the given linked list & insert every node to sorted
//         while (current != NULL)
//         {
//             Node *next = current->next;
//             // Insert current in sorted list
//             sortedInsert(current);
//             current = next;
//         }
//         // Update head_ref to sorted list
//         head = sorted;
//     }
//     /* Function to insert a new_node in a list.*/
//     void sortedInsert(Node *newNode)
//     {
//         if (sorted == NULL || sorted->val >= newNode->val)
//         {
//             newNode->next = sorted;
//             sorted = newNode;
//         }
//         else
//         {
//             Node *current = sorted;
//             /* Locate the node before insertion */
//             while (current->next != NULL && current->next->val < newNode->val)
//             {
//                 current = current->next;
//             }
//             newNode->next = current->next;
//             current->next = newNode;
//         }
//     }
//     void printlist(Node *head)
//     {
//         while (head != NULL)
//         {
//             cout << head->val << " ";
//             head = head->next;
//         }
//     }
// };

// int main()
// {
//     LinkedListIS list;
//     list.head = NULL;
//     list.insert_at_beg(5);
//     list.insert_at_beg(20);
//     list.insert_at_beg(4);
//     list.insert_at_beg(3);
//     list.insert_at_beg(30);
//     cout << "Linked List before sorting" << endl;
//     list.printlist(list.head);
//     cout << endl;
//     list.insertionSort(list.head);
//     cout << "Linked List After sorting" << endl;
//     list.printlist(list.head);
//     return 0;
// }

/*------------------ Selection sorting-----------------*/
#include<iostream>
using namespace std;
void SelectionSort(int A[], int n){
    for (int i=0; i<n-1; i++){
        int iMin = i;
        for(int j = i+1 ; j<n; j++){
            if(A[j]<A[iMin]){
                iMin = j;
            }
            int temp = A[i];
            A[i] = A[iMin];
            A[iMin]= temp;
        }
    }
}
int main(){
    int A[] = {1,4,7,2,8,0};
    SelectionSort(A,6);
    for(int i=0; i<6 ; i++){
        cout<<A[i]<<" ";
    }


    return 0;
}