#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data=x;
        next=NULL;

    }
};

Node *insert(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *curr= head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;

}

void printlist(Node *head){
    Node *curr= head;
    while(curr !=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}


int main(){
    Node *head= new Node(6);
    head =insert(head,5);
    head = insert(head,4);
    printlist(head);
    return 0;
}