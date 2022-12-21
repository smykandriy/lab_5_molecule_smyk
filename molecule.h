#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Molecule {
  private:

    string molecule_name;
  public:

    void setMolecule(string input_molecule_name) {
        molecule_name = input_molecule_name;
    }

    string getMoleculeName() {
        return molecule_name;
    }
};

class Atom: public Molecule {
  private:

    string name;
    double atomic_mass;
    int neutron, proton, electron;

    enum type {
        ISOTYPE,
        RADIOACTIVE,
        ION,
        ANTIMATTER,
        STABLE
    };
  public:

    double getAtomicMass() const {
        return atomic_mass;
    }
    string getName() {
        return name;
    }

    Atom() {
        this->name = "Hydrogen";
        this->atomic_mass = 1.008;
        this->neutron = 0;
        this->proton = 1;
        this->electron = 1;
    }

    void Hydrogen() {
        this->name = "Hydrogen";
        this->atomic_mass = 1.008;
        this->neutron = 0;
        this->proton = 1;
        this->electron = 1;
    }
    void Carbon() {
        this->name = "Carbon";
        this->atomic_mass = 12.01;
        this->neutron = 6;
        this->proton = 6;
        this->electron = 6;
    }
    void Oxygen() {
        this->name = "Oxygen";
        this->atomic_mass = 15.99;
        this->neutron = 8;
        this->proton = 8;
        this->electron = 8;
    }

    bool IsNeutral() {
        return (neutron == proton) ? true: false;
    }
    friend void PrintVector(vector <Atom> vect);
};