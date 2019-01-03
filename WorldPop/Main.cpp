#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {

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

	cout << degrees << " degrees," << minutes << " minutes, " << seconds << " seconds = " << "degrees" << endl;





	system("pause");
	return 0;
}