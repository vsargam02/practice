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

void deleteAtHead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp = head->next;
    delete head;
    head=temp;
}

void deleteAtTail(node *&head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        return;
    }
    node *temp = head;
    while(temp->next->next !=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}


int length(node *head){
    int len=0;
	while(head!=NULL)
	{
		head=head->next;
		len+=1;
	}
	return len;
}

void deleteAtMiddle(node *&head, int p){
    if(head == NULL){
        return;
    }
    if(p==0){
		deleteAtHead(head);
	}
	else if(p==length(head)){
		deleteAtTail(head);
	}
   else
	{
		int jumps=1;
		node* temp=head;
		while(jumps<=p-1)
		{
			temp=temp->next;
			jumps+=1;
		}
		node* temp1=temp->next->next;
		delete temp->next;
		temp->next=temp1;
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
    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 20);
    insertAtHead(head, 24);
    print(head);
    cout<<endl;
    deleteAtHead(head);
    print(head);
    cout<<endl;
    deleteAtTail(head);
    print(head);
    cout<<endl;
    deleteAtMiddle(head, 3);
    print(head);
    return 0;
}

// 24 -> 20 -> 5 -> 4 -> 3 -> 2 -> 1 ->
// 20 -> 5 -> 4 -> 3 -> 2 -> 1 ->
// 20 -> 5 -> 4 -> 3 -> 2 ->
// 20 -> 5 -> 4 -> 2 ->