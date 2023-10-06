//
//  Student.cpp
//  CS 250- Project 2
//
//  Created by Grace O'Hara on 10/2/23.
//

#include "Student.hpp"
#include <iostream>

using namespace std;
#define maxcourses 10

Student::Student(string name) : Person(name)
{}

void Student::add_course(string course)
{
    if (courses.size() < maxcourses ) {
        courses.push_back(course);
    } else {
        cout << "Student cannot take more than " << maxcourses << "courses." << endl;
    }
}
void Student::remove_course(string course) {
    for (auto it = courses.begin(); it != courses.end(); ++it) {
        if (*it == course) {
            courses.erase(it);
            return;
        }
    }
    cout << get_name() << " is not enrolled in " << course << "." << endl;
}
void Student::list_courses() const {
    cout << "Courses taken by " << get_name() << ":" << endl;
    for (const string& course : courses) {
        cout << course << endl;
    }
}
