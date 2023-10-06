//
//  Person.hpp
//  CS 250- Project 2
//
//  Created by Grace O'Hara on 10/2/23.
//

#ifndef Person_hpp
#define Person_hpp

#include <string>

using namespace std;

#include <stdio.h>

class Person
{
    public:
        Person(string name);
        string get_name() const;

    private:
        string name;
};

#endif /* Person_hpp */
