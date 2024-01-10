//
// Created by c21le on 10/01/2024.
//

#include "Bird.h"

// Constructeur par défaut
Bird::Bird() : wingspan(0.0) {
}

// Constructeur paramétré
Bird::Bird(const string& n,
           const string& c,
           const string& d,
           const string& h,
           const string& s,
           bool pet,
           int a,
           double w,
           double ht,
           double ws):
    Animal(n, c, d, h, s, pet, a, w, ht),
    wingspan(ws) {}

// Constructeur de copie
Bird::Bird(const Bird &other) :
    Animal(other),
    wingspan(other.getWingspan()) {}

// Getter pour wingspan
double Bird::getWingspan() const {
    return wingspan;
}

// Setter pour wingspan
void Bird::setWingspan(double ws) {
    wingspan = ws;
}

// Methods
void Bird::printInfo(){

    string petString;

    if (getIsPet()) petString = "is";
    else petString = "is not";

    cout
            << "Animal of type Bird:" << endl
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
