#include <iostream>
#include <string>
#ifndef TRAJET_H
#define TRAJET_H
#endif
#include "Ville.h"
// #include "Date.h"
#include "P_carte.h"
#include "P_paylib.h"
#include "horaire.h"

using namespace std;

class Trajet{
    protected:
    Ville origine;
    Ville destination;
    Date date;
    Horaire horaire;
    char sens;  //{A ou D} A:allee D:double}
    public:
    Trajet();
    Trajet(Ville origine, Ville destination, Date d, Horaire h,char s);
    Ville getDestination();
    Ville getOrigine();
    void setDestination(Ville v);
    void setOrigine(Ville v);
    Date getDate();
    void setDate(Date d);
    Horaire getHoraire();
    void setHoraire(Horaire h);
    char getSens();
    void setSens(char A);
    void affiche_trajet();
    void saisir_trajet();
    friend bool operator==( Trajet &t1, Trajet &t2);
};
