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

node* midpoint(node *head){
    if(head == NULL or head->next == NULL){
        return head;
    }
    node *slow = head;
    node *fast = head->next;
    while(fast != NULL and fast->next != NULL){
         fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node* merge(node*a, node*b){
    //base case
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    //take a head pointer 
    node*c;
    if(a->data < b->data){
        c=a;
        c->next = merge(a->next,b);
    }
    else{
        c=b;
        c->next = merge(a->next,b);
    }
    return c;
}
node* mergeSort(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node* mid = midpoint(head);
    node* a=head;
    node*b = mid->next;
    mid->next NULL;
    //recur sort the two parts
    a = mergeSort(a);
    b= mergeSort(b);
    //merge them
    node*c =merge(a,b);
    return c;

}