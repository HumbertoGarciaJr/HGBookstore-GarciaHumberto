/*
 * main.cpp
 *
 *  Description: Proof Of Concept Prototype
 *  (Very Experimental Code in earlier phases,
 *  not all options work here, they just make sure the program is feasible from start to end)
 *  (NOT FINAL VERSION):
 *      Author: Humberto Garcia
 */
 //PROOF OF CONCEPT PROTOTYPE DRIVER FILE

#include <iostream>
#include <vector>
#include <string>
using namespace std;
//DRIVER FILE

//Main Function(Method)
int main()
{
	//Instantiation of Book class to add book items to the menu catalog-TODO

	//Variables
	int index = 0;
	char customerChoice;

	//Print
	cout << "****************************************************************************\n"
		"Greetings!!! Welcome to the HG Bookstore!!!\n"
		"****************************************************************************\n";

	//While Loop
	while (index == 0)
	{
		//Print options
		cout << "----------------------------------------------------------------\n"
			"How can we help you today?(Press Option a, b, c, d):\n"
			"a. Add book to shopping cart\n"
			"b. Remove book from shopping cart\n"
			"c. Checkout\n"
			"d. Exit\n"
			"----------------------------------------------------------------" << endl;

		//Read User & Store
		cin >> customerChoice;

		//Switch Case
		switch (customerChoice)
		{
		case ('a'):
		case ('A'):
			//Print
			cout << "***********BOOK CATALOG MENU***********\n"
				"Press any of the numbers to add book to checkout cart:\n"
				"----------------------------------------------------------------" << endl;

			//Print newline
			cout << endl;

			//Print
			cout << "1. Book 1\n"
				"2. Book 2\n"
				"3. Book 3\n"
				"4. Book 4\n"
				"5. Book 5\n"
				"6. Book 6\n"
				"7. Book 7\n"
				"8. Book 8\n"
				"9. Book 9\n"
				"10. Book 10" << endl;

			//Add Book Name & its price Function-TODO

			break;//End of switch case
		case ('b'):
		case ('B'):

			//Remove Book & its price Function-TODO

			break;//End of switch case
		case ('c'):
		case ('C'):

			//Checkout to confirm items bought and price total-TODO

			break;//End of switch case
		case ('d'):
		case ('D'):
			index++;//End switch case
			break;
		}
	}

	//Print
	cout << "Thank you for shopping with us, we hope to see you soon!!!" << endl;

	//Pause
	system("pause");

	return 0;
}