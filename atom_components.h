

#ifndef ATOM_COMPONENTS_H
#define ATOM_COMPONENTS_H

#include <iostream>
#include <string>
using namespace std;



class up_quarks {
    
public:

     up_quarks();
    ~up_quarks();
    void Print_up_quarks();
    double get_electric_charge();
    
private:
    
    static const string mass;                     
    static const double electric_charge;             
    static const float spin;
    static const string statistics;
};

///////////////////////////////////////////////////////////////////////////////////////////

class down_quarks {
    
public:

     down_quarks();
    ~down_quarks();
    void Print_down_quarks();
    double get_electric_charge();

private:

  static const string mass;
  static const double electric_charge;
  static const float spin;
  static const string statistics;
};

//////////////////////////////////////////////////////////////////////////

class gluons {
    
public:
    
    gluons();
    ~gluons();
    void Print_gluons();
    double get_electric_charge();
    
private:
    
   static const string mass;                      
   static const double electric_charge;          
   static const float spin;
   static const string statistics;
};

//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

class protons {
    
public:
    
     protons();
    ~protons();
    void Print_protons();
    double get_electric_charge();
    
private:
    
    static const string mass;                  
    static const double electric_charge;            
    static const float spin;
    static const string statistics;
    
    up_quarks u1,u2;
    down_quarks d1;
    gluons g1,g2,g3;
};



class neutrons {

    public:
    
     neutrons();
    ~neutrons();
    void Print_neutrons();
    double get_electric_charge();
    
private:
    
    static const string mass;                     
    static const double electric_charge;            
    static const float spin;
    static const string statistics;
    
    up_quarks u1;
    down_quarks d1,d2;
    gluons gg1,gg2,gg3;
    
};


class electrons {
    
public:
    
    electrons();
    ~electrons();
    void Print_electrons();
    double get_electric_charge();
    
private:
    
   static const string mass;              
   static const double electric_charge;            
   static const float spin;
   static const string statistics;
    
    
};

//////////////////////////////////////////////////////////////////////////////////////////////

class nucleous {
    
private:
    
    int prot;
    int netr;
    
    protons* proton[6];
    neutrons** netron;
    
public:
            
         nucleous& operator=(const nucleous& s);
         nucleous(int pr,int ne);
         ~nucleous();
         void Print_Nucleous();
         double get_electric_charge();
};


#endif /* ATOM_COMPONENTS_H */

