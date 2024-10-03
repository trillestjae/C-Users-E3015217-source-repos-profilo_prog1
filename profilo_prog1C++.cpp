#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString(double);
int toInt(string);
double toDouble(string);
double getMass();
double setWeight(double mass);
void showWeight(double weight);

int main() {
    // Local variables
    double weight;
    double mass;

    // get mass
    mass = getMass();

    // get weight
    weight = setWeight(mass);

    // display weight evaluation
    showWeight(weight);
    return 0;
}

double getMass() {
    double getMass;
    double enteredMass;

    cout << "Enter object's mass: " << endl;
    cin >> enteredMass;

    return enteredMass;
}

double setWeight(double mass) {
    double calculatedWeight;
    double massMultiplier;

    massMultiplier = 9.8;
    calculatedWeight = mass * massMultiplier;

    return calculatedWeight;
}

void showWeight(double weight) {
    double upperWtLimit;
    double lowerWtLimit;

    upperWtLimit = 1000;
    lowerWtLimit = 10;
    cout << "Object Weight: " << weight << endl;
    if (weight > upperWtLimit) {
        cout << "Too heavy. More than " << upperWtLimit << "Newtons" << endl;
    }
    else {
        if (weight < lowerWtLimit) {
            cout << "Too light. Less than “&lowerWtLimit&” Newtons." << endl;
        }
    }
}

// The following implements type conversion functions.
string toString(double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt(string text) {
    return atoi(text.c_str());
}

double toDouble(string text) {
    return atof(text.c_str());
}
