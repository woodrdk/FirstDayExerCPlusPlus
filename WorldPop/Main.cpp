#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {

	/* 1. Population
	Write a C++ program that asks the user to enter the current world population 
	and the current population of the U.S..Store the information in variables of type long long.
	Have the program display the percent that the U.S.population is of the world's population.
	The output should look something like this: (User input is shown in red.Your mileage may vary)

		Enter the world's population: 7666863500

		Enter the population of the U.S.: 327733500

		The population of the U.S.is 4.274675% of the world population.*/

	long long popWorld = 0;
	cout << "Enter the world's population: ";
	cin >> popWorld;

	long long popUS = 0;
	cout << "Enter the population of the U.S. ";
	cin >> popUS;

	double perc = 0;

	perc = 100 * popUS / popWorld;
	
	cout << "The population of the U.S is " << perc << "% of the world population." << endl;
	
	cout << endl << endl << endl;




	/*2. Degrees
	Write a C++ program that asks the user to enter a latitude in degrees, minutes, and seconds and 
	then displays the latitude in decimal format.There are 60 seconds of arc to a minute and 60 minutes
	of arc to a degree.Represent these values with named constants.You should use a separate variable for
	each input value.A sample run should look like this:
	Enter a latitude in degrees, minutes, and seconds:

	First, enter the degrees: 37

	Next, enter the minutes of arc: 51

	Finally, enter the seconds of arc: 19
	
	37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
	*/

	int degrees = 0;
	int minutes = 0;
	int seconds = 0;
	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;

	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;

	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	double decimalLat = 0;
	decimalLat = (seconds / 60.0);
	decimalLat = (decimalLat + minutes) / 60.0;
	decimalLat = decimalLat + degrees;
	cout << degrees << " degrees," << minutes << " minutes, " << seconds << " seconds = " << decimalLat << " degrees" << endl;


	system("pause");
	return 0;
}