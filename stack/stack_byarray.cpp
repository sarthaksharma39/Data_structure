// Stack implementation using arrays.
/*#include <iostream>
using namespace std;

int top = -1;
int arr[2];
bool insert(int x)
{ // push function

    arr[++top] = x;
    return true;
}
int remove()
{
    int x = arr[top];
    top--;
    return x;
}
int main()
{
    int s = 5;
    cout << "Enter the size of the stack: ";
    cin >> s;
    int arr[s]; // stack of size s

    cout<<insert(2)<<endl;
    cout<<insert(3)<<endl;
    cout<<insert(4)<<endl;
    cout<<insert(5)<<endl;
    cout<<remove()<<endl;
    cout<<remove()<<endl;
    return 0;
}

//This case is not happening so we have to use classes.
*/



// Implementing stack using array (basic and standard form) with the help of classes.
#include <iostream>
using namespace std;

class stack
{
    int top;

public:
    int arr[5];
    stack()
    {
        top = -1;
    }
    bool push(int x)
    {
        if (top== 4)
        {
            cout << "Stack overflow" << endl;
            return false;
        }
        else
        {
            arr[++top] = x;
            return true;
        }
    }

    int pop()
    {
        if (top < 0)
        {
            cout << "Stack underflow" << endl; //showing warnign here as return not included.
            return 0;
        }
        else
        {
            int x = arr[top];
            top--;
            return x;
        }
    }
};

int main()
{
    stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(5);
    s.push(5);// if only run till here show :stack overflow
    for (int i = 0; i < 6; i++)
    {
        cout << s.pop() << " ";
    }

    return 0;
}