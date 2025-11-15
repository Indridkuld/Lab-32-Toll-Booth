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

    popDeque(tollLine);

    cout << "Initial Queue:\n";
    for (Car& c : tollLine) {
        cout << "    ";
        c.print();
    }

    while (!tollLine.empty()) {
        timeStep++;
        int randNum = rand() % 100; // random number between 0-99

        if (randNum < 55) { // 55% head car pays and leaves
            cout << "Time: " << timeStep << "Operation: Car paid: ";
            tollLine.front().print();
            tollLine.pop_front();
        } else {
            // 45% a new car joins
            tollLine.push_back(Car());
            cout << "Time: " << timeStep << " Operation: Joined lane: ";
            tollLine.back().print();
        }
    }
    // prints final state of the queue
    cout << "\nQueue: " << endl;
    if (tollLine.empty()) {
            cout << "    Empty\n";
        } else {
            for (Car& c : tollLine) {
                cout << "    ";
                c.print();
            }
        }
    
    return 0; 
}


void popDeque(deque<Car>& dq) {
    for (int i = 0; i < initSIZE; i++) {
        dq.push_back(Car()); 
    }
}
