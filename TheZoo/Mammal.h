//
// Created by c21le on 10/01/2024.
//

#ifndef UNTITLED1_MAMMAL_H
#define UNTITLED1_MAMMAL_H

#include "Animal.h"

class Mammal: public Animal {

private:
    string furColor;

public:
    Mammal();
    Mammal(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double ht, const string& fc);
    Mammal(const Mammal &other);
    void printInfo() override;

    string getFurColor() const;

    void setFurColor(const string& fc);
};


#endif //UNTITLED1_MAMMAL_H
