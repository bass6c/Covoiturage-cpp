#include <iostream>
#include <string>
#ifndef DATE_H
#define DATE_H
#endif
using namespace std;

class Date{
    int jour;
    int mois;
    int annee;
    public :
    Date();
    Date(int jour,int mois, int annee);
    int getJour();
    int getMois();
    int getAnnee();
    void setJour(int j);
    void setMois(int mois);
    void setAnnee(int ann);
    void affiche_date();
    void saisir_date();
    friend bool operator==( Date &d1, Date &d2);
    // void saisir_Date();

    


};