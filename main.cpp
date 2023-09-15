// Description:
//
// Author: Grace O'Hara
// Date: September 12th, 2023
//

#include <iostream>
// #include <math>
using namespace std;

#define minimumStartPopulation 4
int main() {
    double deathRate, birthRate;
    long long int startPopulation;
    int years;
   // double popEstimation;
    
    do {
        cout << "Enter Death Rate: ";
        cin >> deathRate;
        if (deathRate < 1){
            cout << "Error. Please enter a number that is not less then 1. Please try again." << endl;
        }
    }while (deathRate < 1);
    
    do {
        cout << "Enter the Birth Rate (> 0): ";
        cin >> birthRate;
              if (birthRate < 0) {
                 cout << "Birth rate cannot be negative. Please try again." << endl;
                }
    }while (birthRate < 0);
    
    do {
        cout << "Enter the starting population ( > minimumStartPopulation): ";
        cin >> startPopulation;
        if (startPopulation < minimumStartPopulation) {
            cout << "Population must  Min Pop." << minimumStartPopulation << "Please try again."  << endl;
        }
        
    }while (startPopulation < minimumStartPopulation);
        
    cout << "Number of Years: ";
    cin >> years;
    
    
    
    return 0;
}

// int estimationPop(int )
