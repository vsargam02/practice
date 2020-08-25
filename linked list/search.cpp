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


//search operation linear search
bool search(node*head ,int key){
    node*temp = head;
    while(temp!=NULL){
        if(head->data==key){
            return true;
        }
        head = head->next;
    }
    return false;

}
//recursively
bool searchRecursive(node*head,int key){
    if(head==NULL){
        return false;
    }
    if(head->data==key){
        return true;
    }
    else{
        return searchRecursive(head->next,key);
    }
}
void print(node *head){
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
}

int main(){
    node *head = NULL;
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 1);
    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 19);
    insertAtHead(head, 90);
    print(head);
    cout<<endl;
    int key;
    cin>>key;
    if(searchRecursive(head, key)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}