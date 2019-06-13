#include <iostream>
#include "atoms.h"
#include "atom_components.h"
using namespace std;

atoms::atoms(int p,int n)
    {

        mass_number = p + n;
        atomic_number = p;
        netronia = n;
        electric_charge = 0.0;
        
        pirinas = new nucleous(p,n);
        
        for(int i = 0; i < 6; i++){
           electron[i] = new electrons();
        }
        
        
        cout << "\nAn atom has been constructed " << endl <<
                     "protons: " << atomic_number << endl <<
                     "neutrons: "    << netronia << endl;
    }

atoms::~atoms()
    {
           cout << "\nAn atom will be destroyed " << endl;
           
           for(int i = 0; i < 6; i++){
               delete electron[i];
           }
           
           delete pirinas;
    }

int atoms::get_mass_number()
{
    return mass_number;
}

int atoms::get_atomic_number()
{
    return atomic_number;
}

double atoms::get_electric_charge()
{
    double charge_of_protons=0.0,charge_of_electrons=0.0,overall;
    
    charge_of_protons = pirinas->get_electric_charge();
    for(int i = 0; i < 6; i++){
        charge_of_electrons += electron[i] -> get_electric_charge();
    }
    overall = charge_of_protons + charge_of_electrons;
    return overall;
}



void atoms::Print_atom()
{
    cout << "\nThe atom has mass number: " << mass_number << endl
         << "has atomic number: " << atomic_number << endl
         << "and electric charge: " << electric_charge << " e" << endl;
    
    pirinas->Print_Nucleous();
    
     for(int i = 0; i < 6; i++){
         electron[i] ->Print_electrons();
     }
    
    cout << "//////////////////////////" << endl
         << "//////////////////////////" << endl
         << "//////////////////////////" << endl;
}