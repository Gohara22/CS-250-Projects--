//
//  Professor.cpp
//  CS 250- Project 2
//
//  Created by Grace O'Hara on 10/2/23.
//

#include "Professor.hpp"
#include <iostream>

using namespace std;

Professor::Professor(string name, string office_location)
    : Person(name), office_location(office_location) {}

void Professor::display_office_location() const {
    cout << get_name() << "'s office is located at: " << office_location << endl;
}
