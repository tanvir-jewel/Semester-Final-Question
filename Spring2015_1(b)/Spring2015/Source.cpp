#include <iostream>

using namespace std;

void main() {

	cout << "******************** Electric tariff System ********************" << endl << endl;
	double unit;
	cout << "Enter the unit consumed by user : ";
	cin >> unit;
	double total = 0;

	if (unit <= 100)
	{
		total = total +  (unit * 15);
		unit = 0;
	}
	else
	{
		total = total + (100 * 15);
		unit= unit - 100;
	}

	
	if (unit <= 200 && unit > 0) {
		
		total = total + (unit * 18);
	
		unit = 0;
	}
	else if (unit > 200)
	{
		total = total +  (200 * 18) ;
		unit = unit - 200;
	}


	if (unit > 0)
	{
		total = total + (unit * 25) ;
	}

	cout << "Total electricity bill = " << total << " BDT" << endl;
	
}