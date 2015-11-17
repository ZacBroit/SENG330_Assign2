#include <iostream>
#include <string>
using namespace std;

class GymMachine
{
public:
	int powerConsumption;
	int size;
	
	GymMachine(int power, int area){
		cout << "In GymMachine Constructor! \n";
		size = area;
		powerConsumption = power;
	};

	GymMachine(const GymMachine* other){
		powerConsumption = other->powerConsumption;
		size = other->size;
	}
	//virtual GymMachine* clone();

};

class RowingMachine : public GymMachine
{
public:
	int resistance;
	RowingMachine(int resist): GymMachine(25, 7)
	{
		cout << "In Rowing Machine Constructor! \n";
		resistance = resist;
	}
	RowingMachine(const RowingMachine* other): GymMachine(other){
		cout << "In Rowing Machine copy constructor \n";
		//powerConsumption = other->powerConsumption;
		//size = other->size;
	}

	RowingMachine* clone(int resist){
		cout << "In Rowing Machine clone \n";
		return new RowingMachine(this);
	}
};

class Treadmill : public GymMachine
{
public:
	int maxSpeed;
	Treadmill(int speed) : GymMachine(10, 5)
	{
		cout << "In Treadmill Constructor! \n";
		maxSpeed = speed;
	}
	Treadmill(const Treadmill* other): GymMachine(other){
		cout << "In Treadmill copy constructor \n";
		//powerConsumption = other->powerConsumption;
		//size = other->size;
	}

	Treadmill* clone(int speed){
		cout << "In Treadmill clone \n";
		return new Treadmill(this);
	}

};


//client code

Treadmill* tread = new Treadmill(0);
RowingMachine* row = new RowingMachine(0);

RowingMachine* createRowingMachine(int resist){
	RowingMachine* tmp = row->clone(resist);
	tmp->resistance = resist;
	return tmp;
}

Treadmill* createTreadmill(int speed){
	Treadmill* tmp = tread->clone(speed);
	tmp->maxSpeed = speed;
	return tmp;
}

int main(){

	//testing code
	cout << "In client code! \n";
	cout << "Trying to test creating a Treadmill object \n";

	Treadmill* test = createTreadmill(20);
	cout << "Made Treadmill with max speed: " << test->maxSpeed << "\n";
	cout << "Treadmill power is: " << test->powerConsumption << "\n";

	Treadmill * test2 = createTreadmill(30);
	cout << "Made Treadmill with max speed: " << test2->maxSpeed << "\n";
	cout << "Treadmill power is: " << test2->powerConsumption << "\n";

	//assignment code
	cout << "Here you can add more gym machine's to your gym \n";
	cout << "Type in 'Treadmill' to add in a new Treadmill, \n";
	cout << "Type in 'Rowing' to add in a new Rowing Machine, \n";
	cout << "Or, type in 'exit' to finish adding new machines \n";
	
	string machineType;
	cin >> machineType;
	//Loops until user enters in 'exit'
	while(machineType.compare("exit")!=0){
		if(machineType.compare("Treadmill")==0){
			int speed;
			cout << "What is the max speed of the Treadmill?: \n";
			cin >> speed;
			Treadmill* tmp = createTreadmill(speed);
		}
		else if(machineType.compare("Rowing")==0){
			int resist;
			cout << "What is the resistance of the Rowing Machine?: \n";
			cin >> resist;
			RowingMachine* tmp = createRowingMachine(resist);
		}
		else{
			cout << "Please type one of the following: \n";
			cout << "'Treadmill' to add a new Treadmill \n";
			cout << "'Rowing' to add a new Rowing Machine \n";
			cout << "'exit' to finish adding machines \n\n";
		}
		cout << "Your last entry was: " << machineType << "\n";
		cout << "What would you like to add next?: \n";
		cin >> machineType;
	}

	return 0;

}