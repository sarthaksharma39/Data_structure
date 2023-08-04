#include <iostream>
using namespace std;

class stack
{
    int top;

public:
    int arr[3];
    stack() { top = -1; }
    bool push(int x)
    {
        if (top >= (3 - 1))
        {
            cout << "Stack Overflow" << endl;
            return false;
        }
        else
        {
            arr[++top] = x;
            cout << x << " is pushed into stack." << endl;
            return true;
        }
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow." << endl;
            return 0;
        }
        else
        {
            int x = arr[top--];
            return x;
        }
    }
};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.pop() << " is poped from the stack." << endl;
    s.push(6);
    s.push(7);
    return 0;
}
