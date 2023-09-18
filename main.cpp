// Description: This Program prompts usrers to enter numbers for
// the growth rate, death rate, starting population, and years using
// funtions to calculate the estimated population over the number
// of years that the user entered.
//
// Author: Grace O'Hara
// Date: September 12th, 2023
//

#include <iostream>
using namespace std;

double GrowthRate(double birthRate, double deathRate);
double EstimatedPopulation(double currentPopulation, double birthRate, double deathRate);


#define minimumStartPopulation 4
int main() {
    double deathRate, birthRate;
    long long int startPopulation;
    int years;
   
    
    do {
        cout << "Enter Death Rate (> 1): ";
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
        cout << "Enter the starting population (> minimumStartPopulation): ";
        cin >> startPopulation;
        if (startPopulation < minimumStartPopulation) {
            cout << "Population must  Min Pop." << minimumStartPopulation << "Please try again."  << endl;
        }
        
    }while (startPopulation < minimumStartPopulation);
     
    
    do {
        cout << "Enter Number of Years you want to project (>=1): ";
        cin >> years;
        if (years < 1) {
            cout << "Number of years must be at least 1. Please try again." << endl;
        }
    } while (years < 1);
    
    for (int year = 1; year <= years; ++year) {
            double growthRateValue = GrowthRate(birthRate, deathRate);
            double estimatedPopulationValue = EstimatedPopulation(startPopulation, birthRate, deathRate);
        
        cout << year << "\t" << estimatedPopulationValue << "\t\t" << growthRateValue << "%" << endl;
        
        startPopulation = estimatedPopulationValue;
            }
    
    return 0;
}


double GrowthRate(double birthRate, double deathRate) {
    return birthRate - deathRate;
}
double EstimatedPopulation(double currentPopulation, double birthRate, double deathRate) {
    return currentPopulation + (birthRate * currentPopulation) / 100 - (deathRate * currentPopulation) / 100;
}
