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
	virtual GymMachine* clone();

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

	RowingMachine* clone(){

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

	Treadmill* clone(){
		
	}

};


//client code

Treadmill* tread = new Treadmill(0);
RowingMachine* row = new RowingMachine(0);

int main(){
	cout << "In client code! \n";
	cout << "Trying to test creating a Treadmill object \n";

	Treadmill* tread = createTreadmill(20);
	cout << "Made Treadmill with max speed: " << tread->maxSpeed << "\n";
	cout << "Treadmill power is: " << tread->powerConsumption << "\n";

	return 0;

}

RowingMachine* createRowingMachine(resist){
	return row.clone(resist);
}

Treadmill* createTreadmill(speed){
	return tread.clone(speed);
}