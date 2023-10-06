// Description: Use implementation to create a class list for a student including there teachers
// name and office number
//
// Author: Grace O'Hara
// Date: October 1st, 2023
//

#include <iostream>
#include "Person.hpp"
#include "Student.hpp"
#include "Professor.hpp"


using namespace std;

int main()
{
    // Create instances of Student and Professor
       Student student("Kaitlyn Kelly");
       Professor professor("Dr. Johnson", "Room 123");

       // Add courses to the student
       student.add_course("Math 101");
       student.add_course("Physics 201");
       student.add_course("History 101");

       // List student's courses
       student.list_courses();

       // Remove a course from the student
       student.remove_course("Physics 201");

    cout << endl;
       // List student's courses again
       student.list_courses();

       // Display professor's office location
       professor.display_office_location();
    
    return 0;
}
