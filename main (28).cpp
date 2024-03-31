/******************************************************************************

# Author:           William Pommersheim
# BannerID:         001397328
# Course:           CS 181
# Assignment:       PA4
# Date Assigned:    Monday, March 18, 2024
# Date/Time Due:    Saturday, March 30, 2024 -- 11:55 pm

# Description:      This program will exercise ObjectOriented concepts with C++.

# Certification of Authenticity:
    I certify that this assignment is entirely my own work.
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include "Employee.h"
using namespace std;

int main()
{
    int maxManagers = 100;
    int numbOfManagers;
    Manager *ptr [100];
    
    
    cout << "Enter Number of Managers: ";           //User Input # of Managers
    cin >> numbOfManagers;
    cout << endl;
    string name;
    double wage, hours, bonus;
    
    for (int i = 0; i < numbOfManagers; i++)        // User Input for each Manager
    {
        cout << "Enter Manager " << i << " name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Manager " << i << " hourly wage: ";
        cin >> wage;
        cout << "Enter Manager " << i << " hours worked: ";
        cin >> hours;
        cout << "Enter Manager " << i << " bonus: ";
        cin >> bonus;
        
        ptr[i] = new Manager(name, wage, hours, bonus);     //Dynamically create new user object with values ^
        
        
        cout << endl;
    }
    
    
    string highestPaidManager;
    double guy, avg, sum = 0, mostMoney = 0;
    for (int i = 0; i < numbOfManagers; i++)
    {
        guy = ptr[i]-> calcPay();                       // Calculate avg and Highest paid manager
        if (guy > mostMoney)
        {
            mostMoney = guy;
            highestPaidManager = ptr[i] -> getName();
        }
        sum += guy;
    }
    
    avg = (sum / numbOfManagers);
    
    cout << "Highest paid manager is " << highestPaidManager << " who is paid $" << setprecision(2) << fixed << mostMoney << endl;
    cout << "Average pay is $" << setprecision(2) << fixed << avg << endl;
    
    
    for (int i = 0; i < numbOfManagers; i++)            // Deallocate memory
    {
        delete ptr[i];
    }
   return 0; 
}