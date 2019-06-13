
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "atom_components.h"
#include "atoms.h"
using namespace std;


int main(void)
{

    int netronia,plithos,no_protons = 0,no_neutrons = 0;
    double fortio = 0.0;

    srand (time(NULL));
    plithos = rand() % (20 + 1 - 1) + 1;


    atoms *a[plithos];
    cout << "Creating " << plithos << " isotopes " << endl;


    for(int i = 0;i < plithos; i++){
       netronia = rand() % (8 + 1 - 6) + 6;
       a[i] = new atoms(6,netronia);
    }

    for(int i = 0;i < plithos; i++){

        cout << "//////////////////////////////" << endl;
        a[i]->Print_atom();

        fortio += a[i]->get_electric_charge();
        no_protons += a[i]->get_atomic_number();
        no_neutrons += a[i]->get_mass_number();
    }

    no_neutrons = no_neutrons - no_protons;

    cout << "\n\nNumber of protons created: " << no_protons << endl;
    cout << "Number of neutrons created: " << no_neutrons << endl;
    cout << "Overall electric charge created is: " << fortio << " e" << endl << endl;

    for(int i = 0;i < plithos; i++){
        delete a[i];
    }


    return 0;
}

