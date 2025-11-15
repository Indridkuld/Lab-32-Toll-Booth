// COMSC-210 |Lab 32: Toll Booth| Aidan Woodcock | 2025-11-14
// IDE used: Visual Studio Code
#include <iostream>
#include <deque>
#include <cstdlib>
#include <ctime>

#include "Car.h"

using namespace std; 

int initSIZE = 2, timeStep = 0;

void popDeque(deque<Car>& dq) ; 

int main() {
    deque<Car> tollLine; 

    while (!tollLine.empty()) {
        timeStep++;
        
        popDeque(tollLine);


    }


    
    return 0; 
}


void popDeque(deque<Car>& dq) {
    for (int i = 0; i < initSIZE; i++) {
        dq.push_back(Car()); 
    }
}
