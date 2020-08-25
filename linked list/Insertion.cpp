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

//linked class(object oriented)

// class LinkedList{
//     node*head;
//     node*tail;

//     public:
//     LinkedList(){

//     }
//     void insert(int d){

//     }
//     ....
// }

//passing by the reference
void insertAtHead(node*&head,int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
     node *n = new node(d);
     n->next = head;
    head = n;
}

int length(node *head){
    int cnt=0;
    while(head != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}

void insertAtTail(node*&head,int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next=new node(data);
    return;
}

void insertAtMiddle(node*&head,int data, int p){
    //corner case
    if(head==NULL or p==0){
        insertAtHead(head,data);

    }
    else if(p>length(head)){
        insertAtTail(head,data);//later

    }else{
        //take p-1 jumps
        int jump = 1;
        node*temp = head;
        while(jump<=p-1){
            temp = temp->next;
            jump++;
        }
        //create a new node
        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;
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
    print(head);
    cout<<endl;
    insertAtMiddle(head, 5,3);
    insertAtMiddle(head, 7,4);
    insertAtTail(head, 100);
    print(head);
    return 0;
}

// 9 -> 10 -> 1 -> 4 -> 3 -> 
// 9 -> 10 -> 1 -> 5 -> 7 -> 4 -> 3 -> 100 ->