//
// Created by c21le on 10/01/2024.
//

#ifndef UNTITLED1_ANIMAL_H
#define UNTITLED1_ANIMAL_H

#include <string>
#include <iostream>

using namespace std;

class Animal {

private:
    string name;
    string color;
    string diet;
    string habitat;
    string sounds;
    bool isPet;
    int age;
    double weight;
    double height;

public:
    Animal();

    Animal(const string& n, const string& c, const string& d, const string& h, const string& s, bool pet, int a, double w, double ht);

    Animal(const Animal &other);  // Constructeur de copie

    // Getters
    string getName() const;
    string getColor() const;
    string getDiet() const;
    string getHabitat() const;
    string getSounds() const;
    bool getIsPet() const;
    int getAge() const;
    double getWeight() const;
    double getHeight() const;

    // Setters
    void setName(string& n);
    void setColor(string& c);
    void setDiet(string& d);
    void setHabitat(string& h);
    void setSounds(string& s);
    void setIsPet(bool pet);
    void setAge(int a);
    void setWeight(double w);
    void setHeight(double ht);

    void make_sound();
    virtual void printInfo();
};


#endif //UNTITLED1_ANIMAL_H
