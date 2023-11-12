/**
 * debugme.cpp
 * 
 * Casey Lee
 * leecasey
 * 
 * EECS 183:Lab 3
 * Debugging the Code
 *
 * We will debugging the tamagotchi pet simulator to determine a pet's current happiness and hunger level.
 */

#include <iostream>
#include <string>
using namespace std;


int petPet(int happiness, int numPets) {
	// local variable to store updated happiness value
	int newHappiness = 0;

	// increase and return dog happiness
	newHappiness = happiness + numPets;
	return newHappiness;
}


int feedPet(int hunger, int food) {
	// local variable to store updated hunger
	int newHunger = 0;

	// decrease and return dog hunger
	newHunger = hunger - food;
	return newHunger;
}

int main() {
	cout << endl << "TamagotchEECS Pet Simulator" << endl;

	// enter the starting pet data
	cout << "Please enter pet name: ";
	string petName = "";
	getline(cin, petName);

	cout << endl << "Please enter pet initial hunger: ";
	int hunger = 0;
	cin >> hunger;

	cout << endl << "Please enter pet initial happiness: ";
	int happiness = 0;
	cin >> happiness;

	cout << endl << "Please enter number to be used for feeding and petting: ";
	int careForPet = 0;
	cin >> careForPet;
	
	// Notes: There are bugs in the code below!

	// call helper functions to update pet data
	int newHunger = feedPet(hunger, careForPet);
	int newHappiness = petPet(happiness, careForPet);

	// dispay the updated pet data
	cout << endl << "After caring for " << petName;
	cout << ", current hunger is: " << newHunger;
	cout << " and happiness is: " << newHappiness;
	cout << endl;
	cout << "Thanks for using TamagotchEECS Pet Simulator! Good luck!" << endl;

	return 0;
}
