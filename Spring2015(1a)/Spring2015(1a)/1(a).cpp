#include <iostream>

using namespace std;

void main() {
	cout << "******************** Bridge toll collection booth ********************";
	cout << endl;
	cout << endl;

	double motor_cycle, private_car_or_microbus , pickup_van , bus , truck ;

	cout << "Give the input number of vehicles. " << endl;
	cout << endl;

	cout << "Motor Cycle : ";
	cin >> motor_cycle;

	cout << "Private car / Micro Bus : ";
	cin >> private_car_or_microbus;

	cout << "Pickup Van : ";
	cin >> pickup_van;

	cout << "Bus : ";
	cin >> bus;

	cout << "Truck : ";
	cin >> truck;

	int total = (motor_cycle * 20) + (private_car_or_microbus * 150) + (pickup_van * 210) + (bus * 450) + (truck * 650);

	cout << "Total revenue earned at that day : " << total << " BDT" <<endl;
	cout << endl;
}