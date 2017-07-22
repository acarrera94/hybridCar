//
//  main.cpp
//  Hybrid Car
//
//  Created by Andre Carrera on 9/22/15.
//
//
//
/*
 
 
 extra Credit: 166.6666 Mpg
 
 test cases
 
 
  Miles per year:       10000     5000     15000
price of gallon of gas: 3.00      2.00     4.00
  cost of a hybrid:     20000     22000    15000
 efficiency of hybrid:  60        75       47
 Resell of Hybrid:      15000     19000    11000
 Cost of Car:           15000     17000    7000
 efficiency of Car:     30        30       44
 resell:                10000     15000    6000
 
 Hybrid total gallons:  833.3333  333.333  1704.55
 Hybrid total cost:     7500      3666.67  1818.18
 
 Car total gallons:     1666.6666 833.333  1595.74
 Car total Cost:        10000     3666.67  10383
 
 lower cost              hybrid    hybrid   car
 lower gallons           hybrid    hybrid  hybrid
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double estimatedMilesYear = 0; //inicializing the variables asignment gets
    double estimatedPriceOfGas = 0;
    double initialCostOfHybrid = 0;
    double MPGHybrid = 0;
    double estimatedResellValueHybrid = 0;
    double initialCostofCar = 0;
    double MPGCar = 0;
    double estimatedResellValueCar = 0;
    const double years = 5;
    string BuyerCriterion = ""; //don't have to initialize it
    string Total = "Total";
    string Gas = "Gas";
    
    
    
    cout << " What is the estimated Miles driven per year? " << endl; //prompts
    cin >> estimatedMilesYear;
    if (estimatedMilesYear <= 0)
    {
        cout << "Only positive numbers are valid" << endl;
        cout << "Please enter a positive number" << endl;
            cin >> estimatedMilesYear;
    }
    
    cout << " What is the estimated price of a gallon of gas during the 5 years of ownership? " << endl;
    cin >> estimatedPriceOfGas;
    if (estimatedPriceOfGas <= 0)
    {
        cout << "Only positive numbers are valid" << endl;
        cout << "please enter a a positive number" << endl;
            cin >> estimatedPriceOfGas;
    }

    cout << " What is the initial cost of a hybrid car? " << endl;
    cin >> initialCostOfHybrid;
    if (initialCostOfHybrid <= 0)
    {
        cout << "Only positive numbers are valid" << endl;
        cout << "please enter a a positive number" << endl;
            cin >> initialCostOfHybrid;
    }
    
    cout << " What is the fuel efficiency of the hybrid car in MPG? " << endl;
    cin >> MPGHybrid;
    if (MPGHybrid <= 0)
    {
        cout << "Only positive numbers are valid" << endl;
        cout << "please enter a a positive number" << endl;
            cin >> MPGHybrid;
    }
    
    cout << " What is the estimated resell value of the hybrid car after 5 years? ";
    cin >> estimatedResellValueHybrid;
    if (estimatedResellValueHybrid <= 0)
    {
        cout << "Only positive numbers are valid" << endl;
        cout << "please enter a a positive number" << endl;
            cin >> estimatedResellValueHybrid;
    }
    
    cout << " What is the initial cost of a non-hybrid car? " << endl;
    cin >> initialCostofCar;
    if (initialCostofCar <= 0)
    {
        cout << "Only positive numbers are valid" << endl;
        cout << "please enter a a positive number" << endl;
            cin >> initialCostofCar;
    }
    cout << " What is the fuel efficiency of the non-hybrid car in MPG? " << endl;
    cin >> MPGCar;
    if (MPGCar <= 0)
    {
        cout << "Only positive numbers are valid" << endl;
        cout << "please enter a a positive number" << endl;
            cin >> MPGCar;
    }
    
    cout << " What is the estimated resell value of the non-hybrid car after 5 years? ";
    cin >> estimatedResellValueCar;
    if (estimatedResellValueCar <= 0)
    {
        cout << "Only positive numbers are valid" << endl;
        cout << "please enter a a positive number" << endl;
            cin >> estimatedResellValueCar;
    }
    
    cout << " Do you want to minimize Gas consumption or minimize Total Cost? Enter \"Gas\" or \"Total\". " ;
    cin >> BuyerCriterion;
    
    
    double gallonsHybrid = (estimatedMilesYear*years)/MPGHybrid;

    double gallonsCar = (estimatedMilesYear*years)/MPGCar;
    
    double totalCostHybrid = estimatedPriceOfGas * gallonsHybrid + (initialCostOfHybrid - estimatedResellValueHybrid);
    
    double totalCostCar = estimatedPriceOfGas * gallonsCar + (initialCostofCar - estimatedResellValueCar);


if (BuyerCriterion == Gas )
{
    if (gallonsHybrid < gallonsCar)
    {
        cout << "lower gas comsumption: " << "Hybrid Car" << endl;
        cout << "Hybrid Car:" << endl;
        cout << "total gallons consumed over 5 years: " << gallonsHybrid << " gallons"<< endl;
        cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostHybrid
        << endl << endl;
        

        cout << "Non-Hybrid Car:" << endl;
        cout << "total gallons consumed over 5 years: " << gallonsCar << " gallons" <<  endl;
        cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostCar << endl;
    }
    else if (gallonsCar < gallonsHybrid)
    {
        cout << "lower gas comsumption: " << "Non-Hybrid Car" << endl;
        cout << "Non-Hybrid Car:" << endl;
        cout << "total gallons consumed over 5 years: " << gallonsCar << " gallons" <<  endl;
        cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostCar << endl << endl;
        cout << "Hybrid Car:" << endl;
        cout << "total gallons consumed over 5 years: " << gallonsHybrid << " gallons"<< endl;
        cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostHybrid
        << endl << endl;
    }
    else if (gallonsHybrid == gallonsCar)
    {
        cout << "lower gas comsumption: " << "Both the same" << endl;
        cout << "Hybrid Car:" << endl;
        cout << "total gallons consumed over 5 years: " << gallonsHybrid << " gallons"<< endl;
        cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostHybrid
        << endl << endl;
        
        
        cout << "Non-Hybrid Car:" << endl;
        cout << "total gallons consumed over 5 years: " << gallonsCar << " gallons" <<  endl;
        cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostCar << endl;
    }
}
else if (BuyerCriterion == Total)
    {
        if (totalCostHybrid < totalCostCar)
        {
            cout << "Lower Total Cost: Hybrid car" << endl;
            cout << "Hybrid Car:" << endl;
            cout << "total gallons consumed over 5 years: " << gallonsHybrid << " gallons"<< endl;
            cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostHybrid
            << endl << endl;
            
            
            cout << "Non-Hybrid Car:" << endl;
            cout << "total gallons consumed over 5 years: " << gallonsCar << " gallons" <<  endl;
            cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostCar << endl;
        }
        else if (totalCostCar < totalCostHybrid)
        {
            cout << "Lower Total Cost: Non-Hybrid car" << endl;
            cout << "Non-Hybrid Car:" << endl;
            cout << "total gallons consumed over 5 years: " << gallonsCar << " gallons" <<  endl;
            cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostCar << endl << endl;
            cout << "Hybrid Car:" << endl;
            cout << "total gallons consumed over 5 years: " << gallonsHybrid << " gallons"<< endl;
            cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostHybrid
            << endl << endl;
            
        }
        else if (totalCostHybrid ==totalCostCar)
        {
            cout << "Lower Total Cost: The same for both cars" << endl;
            cout << "Hybrid Car:" << endl;
            cout << "total gallons consumed over 5 years: " << gallonsHybrid << " gallons"<< endl;
            cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostHybrid
            << endl << endl;
            
            
            cout << "Non-Hybrid Car:" << endl;
            cout << "total gallons consumed over 5 years: " << gallonsCar << " gallons" <<  endl;
            cout << "total cost of owning the car for 5 years (fuel cost + depreciacion in car value): $" << totalCostCar << endl;
        }
        
        
    }



    return 0;
    system("pause");
}
