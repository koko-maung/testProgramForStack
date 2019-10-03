//
//  prog3_main.cpp
//  Prog 3 stack
//  DATA STRUCTURE
//
//  Created by Ko Ko Maung on 4/13/19.
//  Copyright © 2019 Ko Ko Maung. All rights reserved.
//

#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack s1;       // Class created
    string cmd;     // Variable for command
    string GWord;   // Variable for Word to store
    
    
    while (1)
    {
        // List of command provided for user
        cout << "******************************"<< endl;
        cout << "Command list: " << endl<< "push, pop, match, exit" << endl << "Commands are case insensitive but the words are sensitive."<<endl;
        cout << "Enter command: ";
        cin >> cmd;
        // cases depending on input command
        if (cmd=="exit" || cmd=="Exit" || cmd=="EXit" || cmd=="EXIt" || cmd=="EXIT" || cmd=="eXit" || cmd=="eXIt" || cmd=="eXIt" || cmd=="eXIT" || cmd=="exIt" || cmd=="exIT" || cmd=="exiT" || cmd=="ExIt" || cmd=="ExIT" || cmd=="ExiT" || cmd=="eXiT")
            // Checking the command and making it case insensitive
        {
            // exit the program with 0
            return 0;
        }
        else if (cmd=="pop" || cmd=="Pop" || cmd=="POp" || cmd=="POP" || cmd=="pOp" || cmd=="pOP" || cmd=="poP" || cmd== "PoP")
            // Checking the command and making it case insensitive
        {
            // pop func from stack is called
            s1.pop();
            cout << "Stack: "<<endl;    // To print the stack
            s1.display(cout);
        }
        else if (cmd=="push" || cmd=="pUsh" || cmd=="pUSh" || cmd=="pUSH" || cmd=="puSh" || cmd=="puSH" || cmd=="pusH" || cmd=="Push" ||                   cmd=="PUsh" || cmd=="PUSh" || cmd=="PUSH" || cmd=="PuSh" || cmd=="PuSH" || cmd=="PusH" || cmd=="pUsH")
            // Checking the command and making it case insensitive
        {
            //prompt to push word into the stack
            cout << "Enter Word: ";
            cin >> GWord;
            s1.push(GWord); // push func from stack is called
            cout << "Stack: "<<endl;
            s1.display(cout);   // display func from stack is called
        }
        else if (cmd=="match" || cmd=="Match" || cmd=="MAtch" || cmd=="MATch" || cmd=="MATCh" || cmd=="MATCH" || cmd=="mAtch" || cmd=="mATch" ||           cmd=="mATCh" || cmd=="mATCH" || cmd=="maTch" || cmd=="maTCh" || cmd=="maTCH" || cmd=="matCh" || cmd=="matCH" || cmd=="matcH" ||           cmd=="MatcH" || cmd=="MaTch" || cmd=="MaTCh" || cmd=="MaTCH" || cmd=="MatCh" || cmd=="MatCH")
            // Checking the command and making it case insensitive
        {
            // promt to check the top of the stack and check if it matches the input
            cout << "Enter Word: ";
            cin >> GWord;
            if (GWord == s1.top())
                //if case for top of stack = word
            {
                cout << "User input "<< GWord << " matches top of stack." << endl;
            }
            else // top of stack != word
            {
                cout << "User input " << GWord << " doesn't match top of stack " << s1.top() << "." << endl;
            }
        }
        else
            // case for commands other than push, pop, match, and exit
        {
            cout << "Invalid command "<<cmd <<endl;
        }
    }
}
