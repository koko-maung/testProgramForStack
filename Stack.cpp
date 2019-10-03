//
//  Stack.cpp
//  Prog 3 stack
//  DATA STRUCTURE
//
//  Created by Ko Ko Maung on 4/13/19.
//  Copyright © 2019 Ko Ko Maung. All rights reserved.
//

#include "Stack.h"
#include <stdio.h>
#include <string>
#include <iostream>


Stack::Stack()
// constructor
{
    tos = NULL;
}
Stack::~Stack()
// destructor
{
    delete tos;
}
bool Stack::empty()
// checking if the stack is empty
{
    return tos == NULL;
}
string Stack::top()
// getting word from top of the stack
{
    return tos->word;
}
void Stack::push(const string &val)
// functing to push the word into the stack
{
    Node* temp; // creating new node (class)
    temp = new Node();
    temp -> word = val;
    temp -> next = tos;
    tos = temp;
}
void Stack::pop()
// function to pop from top of the stack
{
    Node* temp;
    if (tos==NULL)
        // checking if the stack is empty
        cout<< "ERROR: Stack is empty."<<endl;
    else
    {
        // poping from stack
        temp = tos;
        tos = tos -> next;
    }
}
void Stack::display(ostream &out)
// function to print the whole stack
{
    Node* ptr;
    ptr = tos;
    if (tos==NULL)
        return;
    else
    {
        while (ptr!=NULL)
            // printing all the words stored untill the pointer is pointed to NULL
        {
            cout<< ptr -> word << endl;
            ptr = ptr -> next;
        }
    }
}
