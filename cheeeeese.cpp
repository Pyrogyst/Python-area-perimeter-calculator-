// Jessop Cheese Program :P
// 2.76 per container
// Production Cost 4.12 per container
// Profit 1.45 per container

#include <iostream>
#include <iomanip>
using namespace std;

//Constants (no hardcoding)
float PPC = 2.74;
float PCPC = 4.12;
float PrPC = 1.45;

int main()
{
	// Top Print
	cout << "/////////////////////////////////////////////////////////////////////" << endl;
	cout << "***************** GitHub Changup :D ********************" << endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
	cout << " " << endl;

	// The Input
	float CKilo = 0;
	cout << "Please enter the total number of kilograms of cheese produced: ";
	cin >> CKilo;

	// The Math
	const int cContainers = static_cast<int> (CKilo / PPC);
	const float pdContainers = static_cast<float> (cContainers * PCPC);
	const float pContainers = static_cast<float> (cContainers * PrPC);

	//Print Outcomes
	cout << left << "The number of containers to hold the cheese is: " << right << setw(27) << cContainers << endl;
	//Forces 2 decimals 
	cout << fixed << setprecision(2);
	//--------------------------------
	cout << left << "The cost of producing " << cContainers << " container(s) of cheese is: $" << right << setw(24) << pdContainers << endl;
	cout << left << "The profit from producing " << cContainers << " container(s) of cheese is: $" << right << setw(20) << pContainers << endl;

	//Ending (cleaner program after output)
	system("PAUSE");

	return 0;
	
	//PROFESSOR NOTE! 
		//could not figure out EXACT spacing. Some comments would be nice! Thanks.
}
