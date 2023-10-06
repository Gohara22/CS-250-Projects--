//
//  Person.cpp
//  CS 250- Project 2
//
//  Created by Grace O'Hara on 10/2/23.
//

#include "Person.hpp"
using namespace std;

Person::Person(string name) : name(name) {}

string Person::get_name() const {
    return name;
}
