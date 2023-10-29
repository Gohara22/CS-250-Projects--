//
//  State.cpp
//  CS 250 - Project 3
//
//  Created by Grace O'Hara on 10/26/23.
//

#include "State.hpp"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

State::State()
{
    m_name = ""; 
}

State::State(string name, double energy, long long int stateSize)
{
    m_name = name;
    m_energy = energy * 1000000000000;
    m_stateSize = stateSize;
}

double State::findPercentage()
{
    double panelsNeeded = ceil ((m_energy) / 51);
    double panelArea = panelsNeeded * 18;
    m_percentage = ceil( (panelArea / m_stateSize) * 100);
    
    return m_percentage;
}

void State::setName(string name)
{
    m_name = name;
}
string State::getName()
{
    return m_name;
}

void State::setPercentage(double percentage)
{
    m_percentage = percentage;
}
double State::getPercentage()
{
    return m_percentage;
}
