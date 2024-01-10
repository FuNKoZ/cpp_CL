//
// Created by c21le on 10/01/2024.
//

#include "Reptile.h"

Reptile::Reptile() : scalePattern("") {
}

// Constructeur paramétré
Reptile::Reptile(const string& n,
                 const string& c,
                 const string& d,
                 const string& h,
                 const string& s,
                 bool pet,
                 int a,
                 double w,
                 double ht,
                 const string& sp):
    Animal(n,c, d, h, s, pet, a, w, ht),
    scalePattern(sp) {}

// Constructeur de copie
Reptile::Reptile(const Reptile &other) :
    Animal(other),
    scalePattern(other.getScalePattern()) {}

// Getter pour scalePattern
string Reptile::getScalePattern() const {
    return scalePattern;
}

// Setter pour scalePattern
void Reptile::setScalePattern(string& sp) {
    scalePattern = sp;
}

// Methods
void Reptile::printInfo(){

    string petString;

    if (getIsPet()) petString = "is";
    else petString = "is not";

    cout
            << "Animal of type Reptile:" << endl
            << "Name : " << getName() << endl
            << "Color : " << getColor() << endl
            << "Diet : " << getDiet() << endl
            << "Habitat : " << getHabitat() << endl
            << "Age : " << to_string(getAge()) <<"'s old" << endl
            << "This animal " << petString << " a pet" << endl
            << "Weight : " << to_string(getWeight()) << "kg" << endl
            << "Height : " << to_string(getHeight()) << "cm" << endl
            << endl;
}
