//
//  Stack.h
//  Prog 3 stack
//  DATA STRUCTURE
//
//  Created by Ko Ko Maung on 4/13/19.
//  Copyright © 2019 Ko Ko Maung. All rights reserved.
//

#ifndef Stack_h
#define Stack_h
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Stack // class for stack
{
public:
    Stack();                            // constructor
    ~Stack();                           // destructor
    bool empty();                       // Check the stack if its empty ot not
    string top();                       // get the word at the top of the stack
    void push(const string &val);       // push the word into the stack
    void pop();                         // pop the word from the top if the stack
    void display(ostream &out);         // print all elements of the stack
private:
    class Node                          // new class node to manipulate the pointers
    {
    public:
        string word;                    // data or word
        Node *next;                     // Node to point next location
    };
    Node *tos;                          // Node for top of stack
};

#endif /* Stack_h */
