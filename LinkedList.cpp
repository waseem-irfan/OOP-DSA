#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
        next = NULL;
    }
};

class List
{
    node *head;

public:
    List()
    {
        head = NULL;
    }
    void insert_at_position(int v, int p);
    void print(void);
    void sorting();
};

void List::insert_at_position(int v, int p)
{
    node *temp = new node;
    temp->data = v;
    if (p == 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        node *ptr = head;
        while (p > 1)
        {
            ptr = ptr->next;
            p--;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void List::print()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        node *temp = head;
        cout << "Linked List: ";
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
}

void List::sorting(){
    node *a, *b;
    int c;
    a = head;
    while(a->next != NULL){
        b = a->next;
        while(b != NULL){
            if(a->data>b->data){
                c = a->data;
                a->data = b->data;
                b->data = c;
            }
            b = b->next;
        }
        a = a->next;
    }
}

int main()
{
    
    List L1;
    int e;
    cout<<"How many elements do you want to insert in a list: ";
    cin>>e;
    cout<<endl;
    for(int i = 0; i<e; i++){
        int num;
        cout<<"Enter "<< i+1 <<" element : ";
        cin>>num;
        cout<<endl;
        L1.insert_at_position(num,i); 
    }
    L1.print();
    cout<<endl;
    cout<<"***Sorted in Ascending Order***"<<endl;
    L1.sorting(); 
    cout<<endl;
    L1.print();
    cout<<endl;
    int v , p;
    cout<<"Insert an element at specfic position"<<endl;
    cout<<endl;
    cout<<"Enter Element: ";
    cin>>v;
    cout<<endl;
    cout<<"Enter position(index start with 0): ";
    cin>>p;
    cout<<endl;
    L1.insert_at_position(v,p);
    L1.print();
    cout<<endl;
    cout<<"***Sorted in Ascending Order***"<<endl;
    L1.sorting();
    cout<<endl;
    L1.print();
    cout<<endl;
    cout<<"Enter another element: ";
    cin>>v;
    cout<<endl;
    L1.insert_at_position(v,p);
    L1.sorting();
    cout<<endl;
    L1.print();
    cout<<endl;

    return 0;
}
