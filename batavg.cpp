// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.

// Last Modified Date: 3/27/2024

#include <iostream>
#include <iomanip> // for setprecision
using namespace std;


const int AT_BAT = 421;
const int HITS = 123;

int main()
{
	float batAvg;

	batAvg = static_cast<float>(HITS) / AT_BAT;									// an assignment statement 
	cout << setprecision(6) << fixed << "The batting average is " << batAvg << endl;	// output the result

	return 0;
}