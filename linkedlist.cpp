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

//insert at a given position of the linked list
Node *insertPOS(Node * head,int pos,int data){
    Node *temp= new Node(data);
    if(head==NULL){
        return temp;
    }
    if(pos==1){
        temp->next=head;
        return temp;
    }
    Node *curr= head;
    
    for(int i=0;i<pos-2 && curr->next!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next=curr->next;
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

//Enter a number to sorted linked list
Node *sortedinsert(Node *head,int x){
    Node *temp= new Node(x);
    if(head==NULL) return temp;
    if(x<head->data){
        temp->next=head;
        return temp;
    }
    Node *curr= head;
    while(curr->next!=NULL && curr->next->data<x){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}


int main(){
    Node *head= new Node(9);
    Node *temp= new Node(13);
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

    
    insertPOS(head,2,10);
    printlist(head);
    insertPOS(head,3,12);
    printlist(head);
    insertPOS(head,5,15);
    printlist(head);
    head=insertPOS(head,1,7);
    printlist(head); //till now i manually sorted the linked list

    head= sortedinsert(head,11);//error not working
    return 0;
}