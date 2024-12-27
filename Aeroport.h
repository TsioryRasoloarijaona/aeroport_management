//
// Created by tsiory on 12/18/24.
//

#ifndef AEROPORT_H
#define AEROPORT_H

#include <string>
#include <iostream>
using namespace std ;

class Aeroport {
private :
    string nom, code;
    int capacite, nombre_piste, nombre_vols;
    double surface_total, consommation_energitique;
    static int nombre_aeroport;
    static  int identifiant;

public:
    Aeroport();

    Aeroport(string);

    Aeroport(string nom, string code, int capacite, int nombre_piste, int nombre_vol, double surface_total,
             double consommation_energitique);

    Aeroport(string, string, int, int, int, double, double, int);

    void afficherDetails();

    int get_capacite();

    int get_nombre_pistes();

    string get_nom();

    string get_code();

    int getNombretotal_aeroports();

    int static generer_identifiant_unique();

    static int  calculer_capacite_totale(int) ;

   double  calculer_densite_aeroports() ;

    void modifier_capacite (int) ;

    void ajouter_piste (int) ;

    void mettre_a_jour_nombre_vols (int) ;

    double calcul_capacite_energitique() ;

    double calcul_ratio_passager_surface() ;


};


#endif //AEROPORT_H
