#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
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

//take the two pointer slow and fast ,fast move by 2 steps ans slow by 1 step
//when fast reached to end of the list the slow reched to half pf the list


node* midPoint(node *head){
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
    cout<<endl;
    node *mid = midPoint(head);
    cout<<mid->data<<endl;

    return 0;
}