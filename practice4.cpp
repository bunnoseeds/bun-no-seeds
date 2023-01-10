// this this code will calculate the final cost to implement a sign. 
// the cost will vary depending on:
// --how many sides there are 
// --whether or not it requires the removal of an old sign
// --whether or not it requires lights


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int colors;
	char oldSelection,
		lightedSelection;

	const double REMOVAL = 0.10,
		LIGHTED = 0.25;

	const double one = 250,
		two = 325,
		three = 450,
		four = 625,
		five = 850;

	double finalPrice{},
		oldSignCost,
		lightedSignCost;

	cout << "Enter the number of colors in the sign: ";
	cin >> colors;
	cout << "\nDo you want a lighted sign (y/n)?: ";
	cin >> lightedSelection;
	cout << "\nDo you need an old sign removed (y/n)?: ";
	cin >> oldSelection;

	if (colors >= 1) {
		if (colors == 1) {
			if (lightedSelection == 'y') {
				if (oldSelection == 'y') {
					lightedSignCost = one * LIGHTED;
					oldSignCost = one * REMOVAL;
					finalPrice = one + lightedSignCost + oldSignCost;
				}
				else if (oldSelection == 'n') {
					lightedSignCost = one * LIGHTED;
					finalPrice = one + lightedSignCost;
				}
			}
			else if (lightedSelection == 'n') {
				if (oldSelection == 'y') {
					oldSignCost = one * REMOVAL;
					finalPrice = one + oldSignCost;
				}
				else if (oldSelection == 'n') {
					finalPrice = one;
				}
			}
		}
		else if (colors == 2) {
			if (lightedSelection == 'y') {
				if (oldSelection == 'y') {
					lightedSignCost = two * LIGHTED;
					oldSignCost = two * REMOVAL;
					finalPrice = two + lightedSignCost + oldSignCost;
				}
				else if (oldSelection == 'n') {
					lightedSignCost = two * LIGHTED;
					finalPrice = two + lightedSignCost;
				}
			}
			else if (lightedSelection == 'n') {
				if (oldSelection == 'y') {
					oldSignCost = two * REMOVAL;
					finalPrice = two + oldSignCost;
				}
				else if (oldSelection == 'n') {
					finalPrice = two;
				}
			}
		}
		else if (colors == 3) {
			if (lightedSelection == 'y') {
				if (oldSelection == 'y') {
					lightedSignCost = three * LIGHTED;
					oldSignCost = three * REMOVAL;
					finalPrice = three + lightedSignCost + oldSignCost;
				}
				else if (oldSelection == 'n') {
					lightedSignCost = three * LIGHTED;
					finalPrice = three + lightedSignCost;
				}
			}
			else if (lightedSelection == 'n') {
				if (oldSelection == 'y') {
					oldSignCost = three * REMOVAL;
					finalPrice = three + oldSignCost;
				}
				else if (oldSelection == 'n') {
					finalPrice = three;
				}
			}
		}
		else if (colors == 4) {
			if (lightedSelection == 'y') {
				if (oldSelection == 'y') {
					lightedSignCost = four * LIGHTED;
					oldSignCost = four * REMOVAL;
					finalPrice = four + lightedSignCost + oldSignCost;
				}
				else if (oldSelection == 'n') {
					lightedSignCost = four * LIGHTED;
					finalPrice = four + lightedSignCost;
				}
			}
			else if (lightedSelection == 'n') {
				if (oldSelection == 'y') {
					oldSignCost = four * REMOVAL;
					finalPrice = four + oldSignCost;
				}
				else if (oldSelection == 'n') {
					finalPrice = four;
				}
			}
		}
		else if (colors >= 5) {
			if (lightedSelection == 'y') {
				if (oldSelection == 'y') {
					lightedSignCost = five * LIGHTED;
					oldSignCost = five * REMOVAL;
					finalPrice = five + lightedSignCost + oldSignCost;
				}
				else if (oldSelection == 'n') {
					lightedSignCost = five * LIGHTED;
					finalPrice = five + lightedSignCost;
				}
			}
			else if (lightedSelection == 'n') {
				if (oldSelection == 'y') {
					oldSignCost = five * REMOVAL;
					finalPrice = five + oldSignCost;
				}
				else if (oldSelection == 'n') {
					finalPrice = five;
				}
			}
		}
		cout << "\nThe price is $" << fixed << setprecision(2) << finalPrice << "." << endl;
	}
	else
		cout << "Inalid input." << endl;

	return 0;
}
