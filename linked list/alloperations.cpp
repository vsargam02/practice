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

//function (procedural programming)

//passing a pointer by reference
int length(node*head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
void insertAtHead(node*&head,int d){
    if(head==NULL){
        head = new node(d);
        return;
    }
     node *n = new node(d);
     n->next = head;
    head = n;
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

void insertInMiddle(node*&head,int data, int p){
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


void print(node*head)
{
    while(head!=NULL){
        cout<<head->data<<" ->";
        head = head->next;
    }
    cout<<endl;
}
void deleteAtHead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp = head->next;
    delete head;
    head=temp;
}
//search operation
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
    else{
        return searchRecursive(head->next,key);
    }
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

bool detectCycle(node*head){
    node*slow = head;
    node*fast = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow){
            return true;
        }

    }
    return false;
}

int main(){
    node*head;
    node*head2;
    cin>>head>>head2;
    cout<<head<<head2;
    
    // node*head = NULL;
    // insertAtHead(head,3);
    // insertAtHead(head,2);
    // insertAtHead(head,1);
    // insertAtHead(head,0);

    // print(head);
    // insertInMiddle(head,4,3);
    // insertAtTail(head,7);
    // deleteAtHead(head);
    // print(head);

    // int key;
    // cin>>key;
    // if(searchRecursive(head,1)){
    //     cout<<"elemnt found";
    // }else{
    //     cout<<"not dounf element";
    // }

    return 0;


}

