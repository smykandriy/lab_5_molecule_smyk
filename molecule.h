#pragma once
#include <iostream>
using namespace std;

class Molecule {
    public:
    string moleculeName;
    void setMolecule(string mn) {
        moleculeName = mn;
    }
};

class Atom: public Molecule {
    public:
    string name;
    float atomicMass;
    int neutron, proton, electron;
    friend float avgMass(Atom arr[], int len);
    friend void sortAtom(Atom arr[], int len);

    enum type {
        ISOTYPE,
        RADIOACTIVE,
        ION,
        ANTIMATTER,
        STABLE
    };
    void H() {
        name = "Hydrogen";
        atomicMass = 1.008;
        neutron = 0;
        proton = 1;
        electron = 1;
    }
    void C() {
        name = "Carbon";
        atomicMass = 12.01;
        neutron = 6;
        proton = 6;
        electron = 6;
    }
    void O() {
        name = "Oxygen";
        atomicMass = 15.99;
        neutron = 8;
        proton = 8;
        electron = 8;
    }
    bool isNeutral() {
        return (neutron == proton) ? true: false;
    }
    ~Atom() {
        cout << endl << name << " destructed";
    }
};
