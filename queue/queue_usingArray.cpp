// Queue implementation using array in c++

#include <iostream>
using namespace std;

struct queue
{
    int size, front, cap;
    int *arr;

    queue(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
        front = 0;
    }

    ~queue()
    {
        delete[] arr;
    }

    bool isFull()
    {
        return (size == cap);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is full. Cannot enqueue " << x << endl;
            return;
        }
        arr[(front + size) % cap] = x;
        size++;
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1; // You can choose another value or throw an exception.
        }
        int y = arr[front];
        front = (front + 1) % cap;
        size--;
        return y;
    }

    int getFront()
    {
        if (isEmpty())
            return -1;
        else
            return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
            return -1;
        else
        {
            return arr[(front + size - 1) % cap];
        }
    }
};

int main()
{
    // Example usage of the queue
    queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "Front: " << q.getFront() << endl; // Output: 1
    cout << "Rear: " << q.getRear() << endl;   // Output: 3

    q.dequeue();

    cout << "Front after dequeue: " << q.getFront() << endl; // Output: 2

    return 0;
}
