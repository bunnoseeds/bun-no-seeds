// this code will calculate a hotel's:
// --total income
// --total # of occupied rooms
// --total # of unoccupied rooms
// --occupancy rate
// based off the specificatios the user makes about the hotel:
// --how many floors
// --how many rooms in each floor
// --how many of those rooms are occupied 

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

	const int priceSingleRoom = 60,
		priceDoubleroom = 75,
		priceKingRoom = 100,
		priceSuiteRoom = 150,
		minFloors = 1,
		maxFloors = 5,
		minRooms = 1,
		maxRooms = 30;
	int floors, rooms, singleRooms, doubleRooms, kingRooms, suiteRooms, sumOfRooms;
	int totalSingleRooms = 0, totalDoubleRooms = 0, totalKingRooms = 0, totalSuiteRooms = 0, totalRooms = 0;
	string place;
	char intFloors;

	cout << "where is this hotel located? " << endl;
	getline(cin, place);


	/*do {
		cout << "Enter number: ";
		cin >> intFloors;
		if (isdigit(intFloors))
		{
			cout << "Yahoo";
		}
		else {
			cout << "This is not a number... ";
		};
	} while (intFloors != 'x');
	*/

	//do while loop determining if floors are within constraints
	do {
		cout << "enter total numbers of floors of the hotel: ";
		cin >> floors;
		if ((floors < minFloors) || (floors > maxFloors)) {
			cout << "number of floors should be between 1 and 5 !! please try again. " << endl;
		}
	} while ((floors < minFloors) || (floors > maxFloors));

	//do while loop determining if rooms are within constraints


	//do while loop for rooms

	for (int i = 0; i < floors; i++) {
		do {
			cout << "enter total numbers of rooms on FLOOR " << floors - i << ": ";
			cin >> rooms;
			if ((rooms > maxRooms) || (rooms <= minRooms)) {
				cout << "number of floors should be between 1 and 30 !! please try again. : ";
			}
			else
				totalRooms = totalRooms + rooms;
		} while ((rooms > maxRooms) || (rooms <= minRooms));

		do {
			cout << "how many single rooms are occupied in floor " << floors - i << "? " << endl;
			cin >> singleRooms;
			totalSingleRooms = totalSingleRooms + singleRooms;
			cout << "how many double rooms are occupied in floor " << floors - i << "? " << endl;
			cin >> doubleRooms;
			totalDoubleRooms = totalDoubleRooms + doubleRooms;
			cout << "how many king rooms are occupied in floor " << floors - i << "? " << endl;
			cin >> kingRooms;
			totalKingRooms = totalKingRooms + kingRooms;
			cout << "how many suite rooms are occupied in floor " << floors - i << "? " << endl;
			cin >> suiteRooms;
			totalSuiteRooms = totalSuiteRooms + suiteRooms;
			sumOfRooms = singleRooms + doubleRooms + kingRooms + suiteRooms;
			if (sumOfRooms > rooms) {
				cout << "error, try again. " << endl;
			}
			else
				cout << "next floor: " << endl;

		} while (sumOfRooms > rooms);
	}

	//calculations
//hotel income
	double hotelIncome, occupancyRate;
	double occupiedR, unOccupiedR;

	hotelIncome = (totalSingleRooms * priceSingleRoom) + (totalDoubleRooms * priceDoubleroom) + (totalKingRooms * priceKingRoom) + (totalSuiteRooms * priceSuiteRoom);
	occupiedR = totalSingleRooms + totalDoubleRooms + totalKingRooms + totalSuiteRooms;
	unOccupiedR = (totalRooms)-occupiedR;
	occupancyRate = (occupiedR / (totalRooms)) * 100;
	cout << "hotel income is: $" << setprecision(2) << fixed << hotelIncome << endl;
	cout << "Total # of Occupied Rooms: " << occupiedR << endl;
	cout << "Total # UnOccupied Rooms: " << unOccupiedR << endl;
	cout << "Occupancy rate: " << setprecision(2) << fixed << occupancyRate << "%" << endl;

	return 0;
}
