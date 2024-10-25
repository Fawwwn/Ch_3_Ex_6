#include <iostream>

using namespace std;

int main()
{
	double sugar = 0.03125;
	double butter = 0.02083;
	double flour = 0.05729;
	double cookie;
	

	cout << "How many cookies would you like to make? " << endl;
	cin >> cookie;
	
	double cookieTotal;

	double sugarTotal = sugar * cookie;
	double butterTotal = butter * cookie;
	double flourTotal = flour * cookie;

	


	cout << "For this amount of cookies this is what is needed\nSugar " << sugarTotal << "\nButter " << butterTotal << "\nFlour " << flourTotal << endl;

	return 0;

}