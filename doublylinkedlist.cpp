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
    Node *curr= head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;

}

int main(){
    
    return 0;
}