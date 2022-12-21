#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "molecule.h"
#include "calc.h"

int main() {
    Molecule obj;
    obj.setMolecule("Carbonic Acid");
    
    const int kAtomsCount = 6;
    vector<Atom> atoms_vector;
    for (int index = 0; index < kAtomsCount; index++) {
        Atom atom;
        atoms_vector.push_back(atom);
    }

    atoms_vector[0].Hydrogen();
    atoms_vector[5].Hydrogen();
    atoms_vector[4].Carbon();
    atoms_vector[3].Oxygen();
    atoms_vector[2].Oxygen();
    atoms_vector[1].Oxygen();

    cout << "Before sorting:" << endl << "Molecule: " << obj.getMoleculeName() << endl << endl;
    cout << "Atoms:" << endl;
    PrintVector(atoms_vector);

    sort(atoms_vector.begin(), atoms_vector.end(), sortRuleLambda);

    cout << endl << "After sorting:" << endl << "Molecule: " << obj.getMoleculeName() << endl << endl;
    cout << "Atoms:" << endl;
    PrintVector(atoms_vector);

    cout << endl << "Average atomic mass: ";
    cout << AverageMass(atoms_vector) << endl;

    return 0;
}