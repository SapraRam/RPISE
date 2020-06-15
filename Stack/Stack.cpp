#include "pch.h"
#include <iostream>
#include <stdio.h>

using namespace System;
using namespace std;

int stk[10];
int sp = 10;

void Push(int v);
int Pop();
void Print();

int main()
{
    Push(5);
    cout << "Stack..."<< sp << stk[sp] << endl;
    return 0;
}


//function to push value in stack
void Push(int v)
{
    if (sp == 0)
    {
        cout << "Stack over flow" << endl;
    }
    else
    {
        sp = sp - 1;
        stk[sp] = v;
    }
}

int Pop()
{
    if (sp == 9)
    {
        cout << "Nothing to pop" << endl;
    }
    else
    {
        sp = sp + 1;
        return stk[sp - 1];
    }
}

void Print()
{
    if (sp == 9)
    {
        cout << "Nothing to print" << endl;
    }
    else
    {
        for (int i = sp; i < 10; i)
        {
            cout << "value at " << i << " is : " << stk[i] << endl;
        }
    }
}