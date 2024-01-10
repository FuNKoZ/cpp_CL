//
// Created by c21le on 10/01/2024.
//

#include "Animal.h"

Animal::Animal() :
    name(""),
    color(""),
    diet(""),
    habitat(""),
    sounds(""),
    isPet(false),
    age(0),
    weight(0.0),
    height(0.0) {}


Animal::Animal(const string& n,
               const string& c,
               const string& d,
               const string& h,
               const string& s,
               bool pet,
               int a,
               double w,
               double ht):
    name(n),
    color(c),
    diet(d),
    habitat(h),
    sounds(s),
    isPet(pet),
    age(a),
    weight(w),
    height(ht) {}



// Constructeur de copie
Animal::Animal(const Animal &other):
    name(other.getName()),
    color(other.getColor()),
    diet(other.getDiet()),
    habitat(other.getHabitat()),
    sounds(other.getSounds()),
    isPet(other.getIsPet()),
    age(other.getAge()),
    weight(other.getWeight()),
    height(other.getHeight()) {}

// Getters
string Animal::getName() const { return name; }
string Animal::getColor() const { return color; }
string Animal::getDiet() const { return diet; }
string Animal::getHabitat() const { return habitat; }
string Animal::getSounds() const { return sounds; }
bool Animal::getIsPet() const { return isPet; }
int Animal::getAge() const { return age; }
double Animal::getWeight() const { return weight; }
double Animal::getHeight() const { return height; }

// Setters
void Animal::setName(string& n) { name = n; }
void Animal::setColor(string& c) { color = c; }
void Animal::setDiet(string& d) { diet = d; }
void Animal::setHabitat(string& h) { habitat = h; }
void Animal::setSounds(string& s) { sounds = s; }
void Animal::setIsPet(bool pet) { isPet = pet; }
void Animal::setAge(int a) { age = a; }
void Animal::setWeight(double w) { weight = w; }
void Animal::setHeight(double ht) { height = ht; }

// Methods
void Animal::make_sound() {
    cout << sounds << endl;
}


void Animal::printInfo(){

    string petString;

    if (isPet) petString = "is";
    else petString = "is not";

    cout
    << "Animal of unknown type: " << endl
    << "Name : " << name << endl
    << "Color : " << color << endl
    << "Diet : " << diet << endl
    << "Habitat : " << habitat << endl
    << "Age : " << to_string(age) <<"'s old" << endl
    << "This animal " << petString << " a pet" << endl
    << "Weight : " << to_string(weight) << "kg" << endl
    << "Height : " << to_string(height) << "cm" << endl
    << endl;
}