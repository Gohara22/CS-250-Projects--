//
//  CSV.hpp
//  CS 250 - CSV Example
//
//  Created by Grace O'Hara on 11/16/23.
//

#ifndef CSV_hpp
#define CSV_hpp

#include <stdio.h>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class CSV
{
    public:
      CSV();
      void getLine(ifstream&);
      string getField(int);
      int getNumFields();
    
    private:
      vector<string> m_fields;
      int m_numFields;
    
};

#endif /* CSV_hpp */
