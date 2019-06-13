
#ifndef ATOMS_H
#define ATOMS_H

#include <iostream>
#include "atom_components.h"
using namespace std;

class atoms {
    
public:
   
    atoms(int p,int n);
    ~atoms();
    
    
    int get_mass_number();
    int get_atomic_number();
    double get_electric_charge();
    
    void Print_atom();
    
private:
    
    nucleous* pirinas;
    electrons* electron[6];
    
    short mass_number;    //prot + netr
    short atomic_number;  //protonia
    double electric_charge;
    
    short netronia;
    
    
};

#endif /* ATOMS_H */

