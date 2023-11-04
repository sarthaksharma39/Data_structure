//stack implementation using linked list
//it is simply insertathead and deleteathead linkedList.
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

  void push(Node*& head,int x){
    Node* temp= new Node(x);
    temp->next=head;
    head=temp;
  }
  void pop(Node*& head){
    if (head == nullptr) {
        cout << "Stack is empty. Cannot pop." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp; 
  }
  void print(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
  }


int main(){
    Node*head=new Node(5);
    push(head,10);
    push(head,15);
    print(head);
    pop(head);
    print(head);
    return 0;
}
