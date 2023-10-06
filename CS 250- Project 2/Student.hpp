//
//  Student.hpp
//  CS 250- Project 2
//
//  Created by Grace O'Hara on 10/2/23.
//

#ifndef Student_hpp
#define Student_hpp

#include "Person.hpp"
#include <vector>

using namespace std;

#include <stdio.h>

class Student : public Person {
public:
    Student(string name);
    void add_course(string course);
    void remove_course(string course);
    void list_courses() const;

private:
    vector<string> courses;
};

#endif /* Student_hpp */
