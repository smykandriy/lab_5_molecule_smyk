#pragma once
#include "molecule.h"
#include <iostream>
using namespace std;

void PrintVector(vector <Atom> vect) {
    for (Atom obj : vect) {
        cout << obj.getName() << "\tAtomic mass: " << obj.getAtomicMass() << endl;
    }
}

double AverageMass(vector <Atom> vect) {
    double average, sum;
    for (Atom obj : vect) {
        sum += obj.getAtomicMass();
    }
    average = sum / vect.size();
    return average;
}

//lambda definition for sorting
auto sortRuleLambda = [] (Atom const& atom_left, Atom const& atom_right) -> bool
    {
       return atom_left.getAtomicMass() < atom_right.getAtomicMass();
    };