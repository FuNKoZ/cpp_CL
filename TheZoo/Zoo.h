//
// Created by c21le on 10/01/2024.
//

#ifndef UNTITLED1_ZOO_H
#define UNTITLED1_ZOO_H


#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "Animal.h"

using namespace std;

class Zoo {

private:
    string name;
    const static int MAX_CAPACITY = 100;
    vector<Animal*> animals;

public:
    Zoo();
    Zoo(const string& name);
    Zoo(const Zoo& zoo);

    string getName() const;

    void setName(const string& n);

    const vector<Animal*>& getAnimals() const;

    void setAnimals(const vector<Animal*>& newAnimals);

    void listAnimals();

    void addAnimal(Animal* animal);

    int searchAnimalByName(string& name);

    void removeAnimalByName(string& name);

    template <typename T>
    double averageAgeForType(T value);
};


#endif //UNTITLED1_ZOO_H
