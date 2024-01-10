//
// Created by c21le on 10/01/2024.
//

#ifndef UNTITLED1_BIRD_H
#define UNTITLED1_BIRD_H

#include "Animal.h"

class Bird : public Animal{

private:
    double wingspan;

public:
    // Constructeurs
    Bird();  // Constructeur par défaut
    Bird(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double ht, double ws);
    Bird(const Bird &other);  // Constructeur de copie

    double getWingspan() const;

    void setWingspan(double ws);

    void printInfo() override;
};


#endif //UNTITLED1_BIRD_H
