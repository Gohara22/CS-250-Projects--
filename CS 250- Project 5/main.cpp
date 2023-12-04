/*
 Description: Using hashing to explore dog populations. Also using
 a class, a file and and a menu.
 Author: Grace O'Hara
 Date: November 27, 2023
*/

#include <iostream>
#include "Dogs.hpp"
#include <fstream>
#include <unordered_map>
#include <stdexcept>
using namespace std;

int main() {
    
    try {
           Dogs dogExplorer("dogs.txt"); // Provide the correct file name

           int choice;
           do {
               cout << "Enter your choice (1-3): ";
               cin >> choice;

               switch (choice) {
                   case 1:
                       dogExplorer.showTotalDogs();
                       break;
                   case 2: {
                       string country;
                       cout << "Enter the country name: ";
                       cin >> country;
                       for (int i = 0; i < country.length(); i++)
                       {
                           country[i] = toupper(country[i]);
                       }
                       dogExplorer.findDogsInCountry(country);
                       break;
                   }
                   case 3:
                       cout << "Exiting the program." << endl;
                       break;
                   default:
                       cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
               }

           } while (choice != 3);
       } catch (const exception& e) {
           cerr << "Error: " << e.what() << endl;
       }
    
    return 0;
}
