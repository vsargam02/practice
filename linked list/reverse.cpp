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

void insertAtHead(node*&head,int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
     node *n = new node(d);
     n->next = head;
    head = n;
}

//REVERSE THE LINKED LIST

void reverse(node*&head){
    node* C = head;
    node* P = NULL;
    node*N;

    while(C!=NULL){
        //save the next node
        N =C->next;
        //make the current point to prev
        C->next = P;

        //update P and C take them to 1 step forwar 
        P=C;
        C=N;

    }
    head = P;
}

void print(node *head){
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
}

node *take_input(){
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