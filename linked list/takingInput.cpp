#include<iostream>
using namespace std;
 
class node{
    public:
    int data;
    node*next;

    //constructor
    node(int d){
        data = d;
        next = NULL;
    }
}; 

void insertAtHead(node *&head, int d){
    if(head == NULL){
        head = new node(d);
        return;
    }
    node *n = new node(d);
    n->next = head;
    head= n;
}

void print(node *head){
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
}
//1 -way passing the head to tha takeinput function
//adding nodes at the head of the linked list
// void take_input(){

// }

// 2nd way
//create the new headpointer inside the take input function
//return head pointer to the main

//take input untill -1
node* take_input(){
     int d;
    cin>>d;
    node *head = NULL;
    while(d != -1){
        insertAtHead(head, d);
        cin>>d;
   }
   return head;
}

int main(){
    node *head = take_input();
    print(head);
    return 0;
}