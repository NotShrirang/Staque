#include<iostream>
#define MAX 10
using namespace std;
struct queue
{
    int front, rear, val;
};
class Queue
{
    int queue[MAX];
    struct queue Q;
    public:
    Queue()
    {
        Q.front=-1;
        Q.rear=-1;
    }
    int IsFull();
    int IsEmpty();
    int Insert(int val);
    int Delete();
    int Display();
    int search(int key);
    int elementReturner(int pos);
    int size();
    int* copy();
};
int Queue::IsFull() // returns 1 if full.
{
    if(Q.rear==MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Queue::IsEmpty() // returns 1 if empty.
{
    if(Q.front<0 || Q.front>Q.rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Queue::Insert(int val) // returns rear pointer.
{
    if(IsFull()==1)
    {
        cout<<"Queue is full. Delete an element to add new element.\n";
        return 0;
    }
    else if(IsEmpty()==1)
    {
        Q.rear=Q.rear+1;
        Q.front=Q.front+1;
        queue[Q.rear]=val;
        return Q.rear;
    }
    else
    {
        Q.rear=Q.rear+1;
        queue[Q.rear]=val;
        return Q.rear;
    }
}
int Queue::Delete() // returns deleted value
{
    if(IsEmpty()==1)
    {
        cout<<"\nThe queue is empty! Please add an element.\n";
        return 0;
    }
    else if (Q.front == Q.rear)
    {
        Q.val = Q.front;
        Q.front = -1;
        Q.rear = -1;
        return Q.val;
    }
    else
    {
        Q.val=queue[Q.front];
        for(int i=Q.front;i<Q.rear;i++)
        {
            queue[i]=queue[i+1];
        }
        Q.rear--;
        return Q.val;
    }
}
int Queue::Display() // returns nothing.
{
    cout<<"\nQueue : ";
    for(int i=Q.front;i<=Q.rear;i++)
    {
        cout<<queue[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
int Queue::search(int key) // returns position of 1st occurence of searched element. Returns -1 if element not found.
{
    int i;
    if(IsEmpty()==1)
    {
        return -1;
    }
    else
    {
        for(i=Q.front; i<=Q.rear; i++)
        {
            if(queue[i]==key)
            {
                return i;
            }
        }
        if(i>Q.rear)
        {
            return -1;
        }
    }
    return 0;
}
int Queue::elementReturner(int pos) // returns element at given element. Returns -2 if empty. Returns -1 if pos doesn't exist.
{
    if(IsEmpty()==1)
    {
        return -2;
    }
    else
    {
        if(pos<=Q.rear)
        {
            return queue[pos];
        }
        else if(pos<MAX)
        {
            return -3;
        }
        else
        {
            return -1;
        }
    }
}
int Queue::size() // returns size of queue.
{
    int i = Q.front;
    while (i <= Q.rear)
    {
        i++;
    }
    return i;
}
int* Queue::copy()
{
    int temp[size()], i=0;
    for(i=Q.front; i<=Q.rear; i++)
    {
        temp[i]=queue[i];
    }
    int *s;
    s = &temp[i];
    *(s+1)=0;
    int *ptr;
    ptr = &temp[0];
    return ptr;
}