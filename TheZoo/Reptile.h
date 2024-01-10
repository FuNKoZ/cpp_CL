//
// Created by c21le on 10/01/2024.
//

#ifndef UNTITLED1_REPTILE_H
#define UNTITLED1_REPTILE_H

#include "Animal.h"

class Reptile : public Animal {

private:
    string scalePattern;

public:
    // Constructeurs
    Reptile();  // Constructeur par défaut
    Reptile(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double ht, const string& sp);
    Reptile(const Reptile &other);  // Constructeur de copie

    // Getter pour scalePattern
    string getScalePattern() const;

    // Setter pour scalePattern
    void setScalePattern(string& sp);

    // Methods
    void printInfo() override;
};


#endif //UNTITLED1_REPTILE_H
