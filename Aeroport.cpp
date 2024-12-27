

#include "Aeroport.h"
#include <random>

using namespace std ;



int Aeroport::nombre_aeroport = 0 ;
int Aeroport::identifiant = 1000 ;
static int capacite_total = 0 ;

Aeroport::Aeroport() {
}

Aeroport::Aeroport(string nom) {
    this->nom = nom;
}

Aeroport::Aeroport(string nom, string code, int capacite, int nombre_piste, int nombre_vol, double surface_total,
                   double consommation_energitique) {
    this->nom = nom;
    this->code = code;
    this->capacite = capacite;
    this->nombre_piste = nombre_piste;
    this->nombre_vols = nombre_vol;
    this->surface_total = surface_total;
    this->consommation_energitique = consommation_energitique;
    this->identifiant = generer_identifiant_unique()  ;
    nombre_aeroport++ ;
    capacite_total += capacite ;
}

void Aeroport::afficherDetails() {
    cout<< "detail de l'aeroport :" << endl
    << "nom : " << nom << endl
    <<"code : " << code << endl
    << "ID :" << identifiant << endl
    << "capacite : " << capacite << endl
    << "nombre de piste : " << nombre_piste << endl
    << "nombre de vols : " << nombre_vols << endl
   << "densite d'occupation : " << calcul_ratio_passager_surface() <<endl
    << "efficaite energitique : " <<calcul_capacite_energitique() << endl ;

}

int Aeroport::get_capacite() {
    return capacite ;
}

int Aeroport::get_nombre_pistes() {
    return nombre_piste ;
}

string Aeroport::get_nom() {
    return nom ;
}

string Aeroport::get_code() {
    return code ;
}

int Aeroport::getNombretotal_aeroports() {
    return nombre_aeroport ;
}

int Aeroport::generer_identifiant_unique() {
   static random_device rd ;
    static mt19937 gen(rd());
    uniform_int_distribution<> distribution(1000, 9999);
    int id = distribution(gen) ;
    return id ;
}

int Aeroport::calculer_capacite_totale(int nouvelle_capacite) {
    return capacite_total ;
}

double Aeroport::calculer_densite_aeroports() {
    return (nombre_vols / capacite) * 100 ;
}

void Aeroport::modifier_capacite(int nouvelle) {
    capacite = nouvelle ;
}

void Aeroport::ajouter_piste(int nouvelle) {
    nombre_piste += nouvelle ;
}

void Aeroport::mettre_a_jour_nombre_vols(int nouveaux) {
    nombre_vols += nouveaux ;
}

double Aeroport::calcul_capacite_energitique() {
    double capacite_total = capacite * consommation_energitique ;
    return capacite_total ;
}

Aeroport::Aeroport(string, string, int, int, int, double, double, int) {
}

double Aeroport::calcul_ratio_passager_surface() {
    return (nombre_vols * capacite) / surface_total ;
}






