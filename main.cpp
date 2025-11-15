// COMSC-210 |Lab 32: Toll Booth| Aidan Woodcock | 2025-11-14
// IDE used: Visual Studio Code
#include <iostream>
#include <deque>
#include <cstdlib>
#include <ctime>

#include "Car.h"

using namespace std; 

int main() {
    int initSIZE = 2, timeStep = 0;
    deque<Car> tollLine; 

    for (int i = 0; i < initSIZE; i++) {
        tollLine.push_back(Car()); 
    }
    
    return 0; 
}