//
// Created by c21le on 10/01/2024.
//

#include "Zoo.h"

Zoo::Zoo(): name("") {}

Zoo::Zoo(const string &name): name(name){}

Zoo::Zoo(const Zoo& zoo):
    name(zoo.getName()),
    animals(zoo.getAnimals()){}

// Getter pour name
string Zoo::getName() const {
    return name;
}

// Setter pour name
void Zoo::setName(const string& n) {
    name = n;
}

// Getter pour animals
const vector<Animal*>& Zoo::getAnimals() const {
    return animals;
}

// Setter pour animals
void Zoo::setAnimals(const vector<Animal*>& newAnimals) {
    animals = newAnimals;
}

void Zoo::listAnimals() {
    for (Animal *animal : animals) {
        animal->printInfo();
    }
}

void Zoo::addAnimal(Animal* newAnimal) {

    if (animals.size() == MAX_CAPACITY) return;

    for(Animal* animal: animals){
        if (animal->getName() == newAnimal->getName()) return;
    }

    auto it = lower_bound(
            animals.begin(),
            animals.end(),
            newAnimal,
            [](const Animal* a, const Animal* b) {
        return a->getName() < b->getName();
        }
    );


    animals.insert(it, newAnimal);
}


int Zoo::searchAnimalByName(string &name) {
    for(int i = 0; i<animals.size(); i++){
        if (animals[i]->getName() == name) return i;
    }
    return -1;
}

void Zoo::removeAnimalByName(std::string &name) {

    int res = -1;

    for(int i = 0; i<animals.size(); i++){
        if (animals[i]->getName() == name) res = i;
    }

    if (res < 0 ) {
        cout << "This animal isn't in the zoo" << endl;
        return;
    }
    else animals.erase(animals.begin() + res);
}
