#include <iostream>

#include "Aeroport.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    cout<< "=== details des aeroport==="<< endl ;
    Aeroport aeroport = Aeroport("chrarle de gaule" , "xxxcharle",20000,20,30,500.0,200.0 );
    aeroport.afficherDetails() ;
    cout << "---------------------------------------------"<< endl ;
    Aeroport aeroport2 = Aeroport("chrarle de gaule" , "xxxcharle",20000,20,30,500.0,200.0 );
    aeroport2.afficherDetails() ;
    cout<<"========================================================="<<endl << "nombre total d'aeroport :"<< aeroport2.getNombretotal_aeroports() << endl
    << "capacité total passager :" << Aeroport::calculer_capacite_totale;
    return 0;
}// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.