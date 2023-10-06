//
//  Professor.hpp
//  CS 250- Project 2
//
//  Created by Grace O'Hara on 10/2/23.
//

#ifndef Professor_hpp
#define Professor_hpp

#include "Person.hpp"
#include <string>

using namespace std;

#include <stdio.h>

class Professor : public Person
{
  public: 
    Professor(string name, string office_location);
    void display_office_location() const;
    
  private:
    string office_location;
}; 

#endif /* Professor_hpp */
