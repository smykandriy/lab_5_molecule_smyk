#pragma once
#include "molecule.h"
#include <iostream>
using namespace std;

void sortAtom(Atom arr[], int len) {
    int i, j;
    for (i = 0; i < len; i++) {
        for (j = i+1; j < len; j++) {
            if (arr[j].atomicMass < arr[i].atomicMass) {
                arr[len+1] = arr[i];
                arr[i] = arr[j];
                arr[j] = arr[len+1];
            }
        }
    }
}

inline float averageMass(Atom arr[], int len) {
    int i, count = 0;
    Atom *ptr = 0;
    float sum = 0; 
    float average = 0;
    for (i = 0; i < len; i++) {
        ptr = &arr[i];
        sum += ptr->atomicMass;
        count++;
    }
    average = sum / count;
    return average;
}