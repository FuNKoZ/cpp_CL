#include "Zoo.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"

int main() {
    // Création d'un zoo
    Zoo myZoo("Mon Zoo");

    // Ajout d'animaux au zoo
    myZoo.addAnimal(new Mammal("Lion", "Brown", "Carnivore", "Savannah", "Roar", false, 5, 150, 3.0, "Yellow"));
    myZoo.addAnimal(new Bird("Eagle", "Brown", "Carnivore", "Mountains", "Screech", false, 3, 5, 0.6, 2.0));
    myZoo.addAnimal(new Reptile("Snake", "Green", "Carnivore", "Jungle", "Hiss", false, 2, 2, 0.2, "Diamond"));

    // Liste des animaux dans le zoo
    std::cout << "Liste des animaux dans le zoo:" << std::endl;
    myZoo.listAnimals();
    std::cout << std::endl;

    // Recherche et suppression d'un animal par nom
    std::string searchName = "Eagle";
    int searchResult = myZoo.searchAnimalByName(searchName);

    if (searchResult != -1) {
        std::cout << "L'animal " << searchName << " est present dans le zoo." << std::endl;
        myZoo.removeAnimalByName(searchName);
        std::cout << "L'animal " << searchName << " a ete supprime." << std::endl;
    } else {
        std::cout << "L'animal " << searchName << " n'est pas present dans le zoo." << std::endl;
    }

    std::cout << std::endl;

    // Liste mise à jour des animaux dans le zoo après suppression
    std::cout << "Liste des animaux dans le zoo après suppression:" << std::endl;
    myZoo.listAnimals();
    std::cout << std::endl;

    return 0;
}
