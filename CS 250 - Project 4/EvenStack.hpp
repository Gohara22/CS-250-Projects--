//
//  EvenStack.hpp
//  CS 250 - Project 4
//
//  Created by Grace O'Hara on 11/8/23.
//

#ifndef EVENSTACK_H
#define EVENSTACK_H

#include <stack>
#include <iostream>
#include <string>

using namespace std;

class EvenStack {
public:
    EvenStack();
    void push(int value);
    bool empty() const;
    size_t size() const;
    int top() const;
    void pop();
    void getEvenNumbers(stack<int>& inputStack);
    void emptyStack();

private:
    stack<int> evenStack;
};


#endif /* EvenStack_hpp */
