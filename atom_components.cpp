#include <iostream>
#include <string>
#include "atoms.h"
#include "atom_components.h"
using namespace std;

const string up_quarks::mass = "2.01 MeV/c^2";
const double up_quarks::electric_charge = 2.0/3.0;
const float up_quarks::spin = 0.5;
const string up_quarks::statistics = "Fermi-Dirac";

     up_quarks::up_quarks()
     {
        cout << "An up quark has been constructed " << endl;
     }


    up_quarks::~up_quarks()
    {
        cout << "An up quark will be destroyed " << endl;
    }


    void up_quarks::Print_up_quarks()
    {
        cout << "Mass of up quark is: " << up_quarks::mass << endl <<
                "Electric charge of up quark is: " << up_quarks::electric_charge << " e" <<endl <<
                "Spin of up quark is: " << up_quarks::spin << endl <<
                "Statistics that up quark follows is: " << up_quarks::statistics << endl ;
    }


    double up_quarks::get_electric_charge()
    {
        return electric_charge;
    }


    //////////////////////////////////////////////////////////////

  const string down_quarks::mass = "4.7 MeV/c^2";                  
  const double down_quarks::electric_charge = -(1.0/3.0);             
  const float down_quarks::spin = 0.5;
  const string down_quarks::statistics = "Fermi-Dirac";
  
     down_quarks::down_quarks()
     {
        cout << "A down quark has been constructed " << endl;
     }
    
     
    down_quarks::~down_quarks()
    {
        cout << "A down quark will be destroyed " << endl;
    }
    
    
    void down_quarks::Print_down_quarks()
    {
        cout << "Mass of down quark is: " << down_quarks::mass << endl <<
                "Electric charge of down quark is: " << down_quarks::electric_charge << " e" << endl <<
                "Spin of down quark is: " << down_quarks::spin << endl <<
                "Statistics that down quark follows is: " << down_quarks::statistics << endl ;
    }
    
    
    double down_quarks::get_electric_charge()
    {
        return electric_charge;
    }
    
    
    //////////////////////////////////////////////////////////////
    
   const string gluons::mass = "0.0 MeV/c^2";                      
   const double gluons::electric_charge = 0.0;             
   const float gluons::spin = 1.0;
   const string gluons::statistics = "Bose-Einstein";
    
     gluons::gluons()
     {
        cout << "A gluon has been constructed " << endl;
     }
    
     
    gluons::~gluons()
    {
        cout << "A gluon will be destroyed " << endl;
    }
    
    
    void gluons::Print_gluons()
    {
        cout << "Mass of gluon is: " << gluons::mass << endl <<
                "Electric charge of gluon is: " << gluons::electric_charge << " e" << endl <<
                "Spin of gluon is: " << gluons::spin << endl <<
                "Statistics that gluon follows is: " << gluons::statistics << endl ;
    }
    
    
    double gluons::get_electric_charge()
    {
        return electric_charge;
    }
    
    
    ////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////
    
    const string protons::mass = "1.007 u";                      
    const double protons::electric_charge = 1.0;             
    const float protons::spin = 0.5;
    const string protons::statistics = "Fermi-Dirac";
    
     protons::protons()
     {
        cout << "\nA proton has been constructed " << endl;
     }
     
     
    protons::~protons()
    {
        cout << "\nA proton will be destroyed " << endl;
    }
    
    
    void protons::Print_protons()
    {
        cout << "Mass of proton is: " << protons::mass << endl <<
                "Electric charge of proton is: " << protons::electric_charge << " e" << endl <<
                "Spin of proton is: " << protons::spin << endl <<
                "Statistics that proton follows is: " << protons::statistics << endl << endl;
        u1.Print_up_quarks();
        u2.Print_up_quarks();
        d1.Print_down_quarks();
        g1.Print_gluons();
        g2.Print_gluons();
        g3.Print_gluons();
    }
    
    
    double protons::get_electric_charge()
    {
        return g1.get_electric_charge()+g2.get_electric_charge()+g3.get_electric_charge()+d1.get_electric_charge()+u1.get_electric_charge()+u2.get_electric_charge();
    }
    //////////////////////////////////////////////////////////////////////////////////////////
    
    const string neutrons::mass = "1.0085 u";
    const double neutrons::electric_charge = 0.0;             
    const float neutrons::spin = 0.5;
    const string neutrons::statistics = "Fermi-Dirac";
    
     neutrons::neutrons()
     {
        cout << "\nA neutron has been constructed " << endl;
     }
     
     
     neutrons::~neutrons()
    {
        cout << "\nA neutron will be destroyed " << endl;
    }
    
     
    void neutrons::Print_neutrons()
    {
        cout << "Mass of neutron is: " << neutrons::mass << endl <<
                "Electric charge of neutron is: " << neutrons::electric_charge << " e" << endl <<
                "Spin of neutron is: " << neutrons::spin << endl <<
                "Statistics that neutron follows is: " << neutrons::statistics << endl << endl ;
                u1.Print_up_quarks();
                
        u1.Print_up_quarks();
        d1.Print_down_quarks();
        d2.Print_down_quarks();
        gg1.Print_gluons();
        gg2.Print_gluons();
        gg3.Print_gluons();
    }
    
    
    double neutrons::get_electric_charge()
    {        
        return gg1.get_electric_charge()+gg2.get_electric_charge()+gg3.get_electric_charge()+d1.get_electric_charge()+d2.get_electric_charge()+u1.get_electric_charge();
    }
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    const string electrons::mass = "5.48579909070e-4 u";               
    const double electrons::electric_charge = -1.0;             
    const float electrons::spin = 0.5;
    const string electrons::statistics = "Fermi-Dirac";
    
      electrons::electrons()
     {
        cout << "\nAn electron has been constructed " << endl;
        //Print_electrons();
     }
      
     electrons::~electrons()
    {
        cout << "\nAn electron will be destroyed " << endl;
    }
    
     
    void electrons::Print_electrons()
    {
        cout << "Mass of electron is: " << electrons::mass << endl <<
                "Electric charge of electron is: " << electrons::electric_charge << " e" << endl <<
                "Spin of electron is: " << electrons::spin << endl <<
                "Statistics that electron follows is: " << electrons::statistics << endl ;
    }
    
    
    double electrons::get_electric_charge()
    {
        return electric_charge;
    }
  
/////////////////////////////////////////////////////////////////////////////////////////////////////
    
    nucleous& nucleous::operator=(const nucleous& s)
    {
        if(this != &s)
        {
            prot = s.prot;
            netr = s.netr;
        }
            return *this;
    }
        
    
    nucleous::nucleous(int pr,int ne)
    {    
        prot = pr;
        netr = ne;
                
        for(int i = 0; i < 6; i++){
            proton[i] = new protons();
        }           
        netron = new neutrons*[netr];
        for(int i = 0; i < netr; i++){
           netron[i] = new neutrons();
        }
    }

    
    nucleous::~nucleous()
    {        
        for(int i = 0; i < netr; i++)
            delete netron[i];
        delete[] netron;    
        
        
        for(int i = 0; i < prot; i++){
            delete proton[i];
        }            
    }
      
    
    void nucleous::Print_Nucleous()
    {
        cout << "\n\nNucleous has: " << endl << endl;
             
        for(int i = 0; i < 6; i++){
            proton[i]->Print_protons();
            cout << endl ;
        }
        for(int i = 0; i < netr; i++){
            netron[i] -> Print_neutrons();
            cout << endl ;
        }            
    }


    double nucleous::get_electric_charge()
    {
        double charge_of_protons = 0.0;
        for(int i = 0; i < 6; i++){
           charge_of_protons += proton[i]->get_electric_charge();    
       }
        return charge_of_protons;
    }


