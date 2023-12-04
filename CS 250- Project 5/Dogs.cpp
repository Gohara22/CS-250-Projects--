//
//  Dogs.cpp
//  CS 250- Project 5
//
//  Created by Grace O'Hara on 11/27/23.
//

#include "Dogs.hpp"
#include "CSV.hpp"
#include <string>
using namespace std;

Dogs::Dogs(const string& filename) : totalDogs(0) {
    ifstream fOne;
    fOne.open(filename, ios::in);

    CSV myCSV;
    int record = 0;
    string countryName;
    int pop;
    
    while (fOne) {
        myCSV.getLine(fOne);
        if (myCSV.getNumFields() > 0) {
            record++;
            countryName = myCSV.getField(0);
            for (int i=0; i < countryName.length(); i++)
            {
                countryName[i] = toupper(countryName[i]);
            }
            pop = stoi(myCSV.getField(1));
            dogPop[countryName] = pop;
            totalDogs += pop;
        }
    }
    
    fOne.close();
}

void Dogs::showTotalDogs() {
    cout << "Total number of dogs in the world: " << totalDogs << endl;
}

void Dogs::findDogsInCountry(const string& country) {
    if (dogPop.find(country) != dogPop.end()) {
        cout << "Number of dogs in " << country << ": " << dogPop[country] << endl;
    } else {
        throw runtime_error("Country not found in the data.");
    }
}
