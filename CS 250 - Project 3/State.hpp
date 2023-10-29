//
//  State.hpp
//  CS 250 - Project 3
//
//  Created by Grace O'Hara on 10/26/23.
//

#include <string>
using namespace std;

#ifndef State_hpp
#define State_hpp

#include <stdio.h>

class State
{
public:
    State();
    State(string, double, long long int);
    // get and set functions
    double findPercentage();
    void setName(string);
    string getName();
    void setPercentage(double);
    double getPercentage();
    
private:
    string m_name;
    double m_energy;
    long long int m_stateSize;
    double m_percentage;
};

#endif /* State_hpp */
