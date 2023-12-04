//
//  Dogs.hpp
//  CS 250- Project 5
//
//  Created by Grace O'Hara on 11/27/23.
//

#ifndef Dogs_hpp
#define Dogs_hpp

#include <iostream>
#include <fstream>
#include <unordered_map>
#include <stdexcept>
#include <string>
#include "CSV.hpp"
#include <stdio.h>
using namespace std;

class Dogs {
    
private:
    unordered_map<string, int> dogPop; // Hash table with country names as keys
    int totalDogs;
   
public:
    Dogs(const string& filename);
    void showTotalDogs();
    void findDogsInCountry(const string& country);
};

#endif /* Dogs_hpp */
