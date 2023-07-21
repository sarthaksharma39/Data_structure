#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next = NULL;
    }
};

//function to print a linked list
void printlist(Node *head){
    Node *curr= head;
    while(curr !=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

//to search a element in a linked list
int searchll(Node *head,int x){
    int pos=1;
    Node *curr=head;
    while(curr!=NULL){
        if(curr->data==x){
            return pos;
        }
        else{
            curr=curr->next;
            pos++;
        }
    }
    return -1;
}

//Insert at begin
Node *insertatbegin(Node *head, int x){
    Node *temp= new Node(x);
    temp->next=head;
    return temp;
}

//insert at end of the linked list
Node *insertatend(Node *head,int x){
    Node *temp= new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

//Delete head of the node 
Node *deletehead(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node *temp=head->next;
    delete head;
    return temp;
}

//delete last node of the linked list
Node *deletelastnode(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next ==NULL){
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    curr->next=NULL;
    return head;

}


int main(){
    Node *head= new Node(6);
    Node *temp= new Node(8);
    head->next=temp;
    printlist(head);
    cout<<"Element at position :"<< searchll(head,6)<<endl;

    head = insertatbegin(head,10);
    printlist(head);

    insertatend(head,50);
    printlist(head);

    head= deletehead(head);
    printlist(head);

    deletelastnode(head);
    printlist(head);
    
    return 0;
}