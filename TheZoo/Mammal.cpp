//
// Created by c21le on 10/01/2024.
//

#include "Mammal.h"

// Constructeur par défaut
Mammal::Mammal() :
    furColor("") {}

// Constructeur paramétré
Mammal::Mammal(const string& n,
               const string& c,
               const string& d,
               const string& h,
               const string& s,
               const bool pet,
               const int a,
               const double w,
               const double ht,
               const string& fc):
    Animal(n, c, d, h, s, pet, a, w, ht),
    furColor(fc) {}

// Constructeur de copie
Mammal::Mammal(const Mammal &other) :
    Animal(other),
    furColor(other.getFurColor()) {}

// Getter pour furColor
string Mammal::getFurColor() const {
    return furColor;
}

// Setter pour furColor
void Mammal::setFurColor(const string& fc) {
    furColor = fc;
}

// Methods
void Mammal::printInfo(){

    string petString;

    if (getIsPet()) petString = "is";
    else petString = "is not";

    cout
            << "Animal of type Mammal:" << endl
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
