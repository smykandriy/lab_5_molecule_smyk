#include <iostream>
#include "molecule.h"
#include "calc.h"
using namespace std;

int main() {

    Molecule obj1;
    obj1.setMolecule("Carbonic acid");
    const int len = 6;
    Atom atom[len];
    atom[0].H();
    atom[5].H();
    atom[4].C();
    atom[3].O();
    atom[2].O();
    atom[1].O();

    cout << "Before sorting:" << endl << "Molecule: " << obj1.moleculeName << endl << endl;
    cout << "Atoms:" << endl;
    for (int i = 0; i < len; i++) {
        cout << atom[i].name << "\tAtomic mass: " << atom[i].atomicMass << endl;
    }

    sortAtom(&atom[0], len);
    

    cout << endl << "After sorting:" << endl << "Molecule: " << obj1.moleculeName << endl << endl;
    cout << "Atoms:" << endl;
    for (int i = 0; i < len; i++) {
        cout << atom[i].name << "\tAtomic mass: " << atom[i].atomicMass << endl;
    }
    
    cout << endl << "Average atomic mass: ";
    cout << averageMass(&atom[0], len) << endl;


    return 0;
}