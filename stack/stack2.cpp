//using stack with option from the user whether push or pop.

#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <int> s;
    m:
    int num;
    cout<<"Enter the number to do the operation:\n1.Push to stack\n2.Pop out stack\n3.Exit"<<endl;
    cin>>num;
    if(num==1){
        int x;
        cout<<"Enter the number to insert: ";
        cin>>x;
        s.push(x);
        goto m;
    }
    else if(num==2){
        cout<<s.top()<<endl;
        s.pop();

    }
    else{
        exit(1);
    }
}