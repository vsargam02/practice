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
void print(node* head)
{
   
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return;
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

int main(){
    node*head2;
    node*head;

    cin>>head>>head2;
    cout<<head<<head2;

    node* newHead = merge(head,head2);
    cout<<newHead<endl;

}