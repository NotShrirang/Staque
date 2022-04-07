#include<iostream>
#include "queue.h"
#include "stack.h"
using namespace std;
class staque : public stack, public Queue
{
    public:
    staque()
    {
        cout<<"\n---------------------------------------------------------------------";
        cout<<"\nThis is 'staque' data structure!";
        cout<<"\nIt can be used as both stack and queue data structure.";
        cout<<"\n\nHow to use :";
        cout<<"\nAs a stack: push(), pop(), display()";
        cout<<"\nAs a queue: Insert(), Delete(), Display(), IsFull(), IsEmpty(), search(), elementReturner()";
        cout<<"\n\nHappy Coding!";
        cout<<"\n---------------------------------------------------------------------";
    }
};