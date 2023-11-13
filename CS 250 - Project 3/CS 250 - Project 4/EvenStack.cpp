//
//  EvenStack.cpp
//  CS 250 - Project 4
//
//  Created by Grace O'Hara on 11/8/23.
//

#include "EvenStack.hpp"
#include <stack>
#include <iostream>
#include <string>

using namespace std;

EvenStack::EvenStack() {
    // Constructor
}

void EvenStack::push(int value) {
    if (value % 2 == 0) {
        evenStack.push(value);
    }
    else
    {
        cout << "Error you can only print even numbers." << endl;
        cout << "Remove the following: ";
    }
}
    

bool EvenStack::empty() const {
    return evenStack.empty();
}

size_t EvenStack::size() const {
    return evenStack.size();
}

int EvenStack::top() const {
    return evenStack.top();
}

void EvenStack::pop() {
    evenStack.pop();
}

void EvenStack::getEvenNumbers(stack<int>& theStack) {
     stack<int> temp1;
     stack<int> temp2;
    
     temp1 = theStack;
        int value;
        while (!temp1.empty()) {
            value = temp1.top();
            temp1.pop();
            if (value%2 == 0)
                temp2.push(value);
        }

       while (!temp2.empty())
       {
           evenStack.push(temp2.top());
           temp2.pop();
       }
   
}

void EvenStack::emptyStack() {
    while (!evenStack.empty()) {
        int value = evenStack.top();
        evenStack.pop();
        cout << value << " ";
    }
}
