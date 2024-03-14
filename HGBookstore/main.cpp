/*
 * main.cpp
 *
 *  Description: HG's Bookstore Main Driver File
 *      Author: Humberto Garcia
 */
 //DRIVER FILE

#include <iostream>
#include <string>
#include <vector>
#include "Book.h"//Include header
using namespace std;
//DRIVER FILE

//Function Prototypes
//Reset Grandtotal Function(Method)
void resetGrandtotal(double);

//Global Variable
double grandtotal = 0.00;

//Main Function(Method)
int main()
{
	//Variables
	int index = 0;
	int bookChoice;
	int userCheckout;
	double const bookOne = 10.99, bookTwo = 10.23, bookThree = 4.99, bookFour = 7.79, bookFive = 5.52;
	char customerChoice;
	bool isBuyingBooks = false;//Flag for exit message

	//Instantiation of Book class(Pointer Based) to create books obj collection
	vector<Book*> books;

	//Print
	cout << "****************************************************************************\n"
		"Greetings!!! Welcome to the HG Bookstore!!!\n"
		"****************************************************************************\n"
		"----------------------------------------------------------------\n"
		"\t\t\"How can we help you today?\":\n" << endl;

	//While Loop
	while (index == 0)
	{
		//Print options
		cout << "\t\t***********MAIN MENU***********\n"
			"----------------------------------------------------------------\n"
			"(Press Option a, b, c, d):\n"
			"a. Add book to shopping cart\n"
			"b. Remove all books from shopping cart\n"
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
			cout << "\t\t***********BOOK CATALOG***********\n"
				"\"Press any of number 1-5 to add specific book to checkout cart\":\n"
				"----------------------------------------------------------------" << endl;

			//Print list of available books
			cout << "PRESS (1) to add: \"The Odyssey by Homer\", ISBN: 978-3-16-148410-0, PRICE: $10.99\n"
				"PRESS (2) to add: \"1984 by George Orwell\", ISBN: 363-7-23-453921-6, PRICE: $10.23\n"
				"PRESS (3) to add: \"The Picture of Dorian Gray by Oscar Wilde\", ISBN: 481-4-33-561343-1, PRICE: $4.99\n"
				"PRESS (4) to add: \"Frankenstein by Mary Shelley\", ISBN: 522-2-34-513672-1, PRICE: $7.79\n"
				"PRESS (5) to add: \"Brave New World by Aldous Huxley\", ISBN: 562-7-77-244689-6, PRICE: $5.52\n"
				"----------------------------------------------------------------" << endl;

			//Read User & Store
			cin >> bookChoice;

			//Switch Case
			switch (bookChoice)
			{
			case (1):
				//Call Function(Method) of push_back for books collection
				books.push_back(new Book("The Odyssey by Homer", "978-3-16-148410-0", 10.99));//new books obj 3 argument

				//Store Addition of book one value to pre-existing grandtotal value
				grandtotal += bookOne;
				break;//End of switch case
			case (2):
				//Call Function(Method) of push_back for books collection
				books.push_back(new Book("1984 by George Orwell", "363-7-23-453921-6", 10.23));//new books obj 3 argument

				//Store Addition of book two value to pre-existing grandtotal value
				grandtotal += bookTwo;
				break;//End of switch case
			case (3):
				//Call Function(Method) of push_back for books collection
				books.push_back(new Book("The Picture of Dorian Gray by Oscar Wilde", "481-4-33-561343-1", 4.99));//new books obj 3 argument

				//Store Addition of book three value to pre-existing grandtotal value
				grandtotal += bookThree;
				break;//End of switch case
			case (4):
				//Call Function(Method) of push_back for books collection
				books.push_back(new Book("Frankenstein by Mary Shelley", "522-2-34-513672-1", 7.79));//new books obj 3 argument

				//Store Addition of book four value to pre-existing grantotal value
				grandtotal += bookFour;
				break;//End of switch case
			case (5):
				//Call Function(Method) of push_back for books collection
				books.push_back(new Book("Brave New World by Aldous Huxley", "562-7-77-244689-6", 5.52));//new books obj 3 argument

				//Store Addition of book five value to pre-existing grandtotal value
				grandtotal += bookFive;
				break;//End of switch case
			}

			//Print newline
			cout << endl;

			//Print text confirming added book
			cout << "***********************************************************************\n"
				"\t***********Added Book To Checkout Cart***********\n"
				"***********************************************************************\n"
				"Your Current book list: " << endl;

			//FOR Repetition Loop to iterate my books pointer object vector collection
			for (Book* myBooks : books)
			{
				//Print Call Functions to update on list of books
				cout << "Name: " << myBooks->getName() << ", ISBN: " << myBooks->getIsbn()
					<< ", PRICE $" << myBooks->getPrice() << endl;
			}

			//Print current grandtotal due
			cout << "----------------------------------------------------------------\n"
				"Your Current total price due: $" << grandtotal << "\n"
				"----------------------------------------------------------------" << endl;

			//Print newline
			cout << endl;

			break;//End of switch case
		case ('b'):
		case ('B'):
			//If Statement
			if (books.size() > 0)
			{
				//Call Function clear to take all books off checkout cart
				books.clear();

				//Call Function reset to start grandtotal from 0 again
				resetGrandtotal(grandtotal);

				//Print message to main menu
				cout << "***********************************************************************\n"
					"All books have been removed from checkout cart.  Returning to main menu...\n"
					"***********************************************************************" << endl;
			}
			else
			{
				cout << "***********************************************************************\n"
					"You have no books in your checkout cart.  Returning to main menu...\n"
					"***********************************************************************" << endl;
			}
			break;//End of switch case
		case ('c'):
		case ('C'):
			//If/Else Statement
			if (books.size() > 0)//Book size is greater than 0;
			{
				//Print checkout cart
				cout << "****************************************************************************\n"
					"Your Checkout Cart:\n"
					"----------------------------------------------------------------------------" << endl;

				//For Repetition Loop to iterate my books pointer object vector collection
				for (Book* myBooks : books)
				{
					//Print Call Functions to update on list of books
					cout << "Name: " << myBooks->getName() << ", ISBN: " << myBooks->getIsbn()
						<< ", PRICE $" << myBooks->getPrice() << endl;
				}

				//Print to confirm place order
				cout << "----------------------------------------------------------------------------\n"
					"Grand Total Due: $" << grandtotal << "\n"
					"----------------------------------------------------------------------------\n"
					"Place order:\n"
					"PROCEED?: (Press '1' for yes/Press '0' for no)" << endl;

				//Read User & Store
				cin >> userCheckout;

				//If/Else If/Else Statement
				if (userCheckout == 1)//yes
				{
					//Process Flag change to true because user is buying books
					isBuyingBooks = true;

					//Print receipt
					cout << "****************************************************************************\n"
						"****************************************************************************\n"
						"****************************************************************************\n"
						"\t\t\tYour Order is Complete!!! :" << endl;

					//For Repetition Loop to iterate books bought
					for (Book* myBooks : books)
					{
						//Print Call Functions to update on list of books
						cout << "Name: " << myBooks->getName() << ", ISBN: " << myBooks->getIsbn()
							<< ", PRICE $" << myBooks->getPrice() << endl;
					}

					//Print total payed
					cout << "----------------------------------------------------------------------------\n"
						"Total Payed: $" << grandtotal << "\n"
						"----------------------------------------------------------------------------" << endl;

					cout << "****************************************************************************\n"
						"****************************************************************************\n"
						"****************************************************************************" << endl;

					index++;//Exit Bookstore
				}
				else if (userCheckout == 0)//No
				{
					//Print selected userCheckout choice No
					cout << "****************************************************************************\n"
						"You picked NO, returning to main menu..." << endl;
				}
				else//No option picked
				{
					//Print that you did not pick any option stated
					cout << "****************************************************************************\n"
						"You did not pick any of the options, returning to main menu..." << endl;
				}
			}
			else//No books in cart
			{
				//Print No books in cart
				cout << "****************************************************************************\n"
					"You have no books in your checkout cart.  Returning to main menu..." << endl;
			}
			break;
		case ('d'):
		case ('D'):
			index++;//Exit Bookstore
			break;//End switch case
		}
	}

	//If/Else Statement
	if (isBuyingBooks == false)//User isn't buying books
	{
		//Print sorry letting customer go without purchasing a single item
		cout << "****************************************************************************\n"
			"\t\"We're sorry to see you go like that... \n"
			"   \"We hope you reconsider our store in the future.\"" << endl;
	}
	else if (isBuyingBooks == true)//User is buying books
	{
		//Print thank you for buying any amount of books
		cout << "\t\"Thank you for shopping with us, we hope to see you soon!!!\"\n" << endl;
	}

	//Pause
	system("pause");

	return 0;//End program
}

//Functions
//Reset Grandtotal Function(Method)
void resetGrandtotal(double pGrandtotal)
{
	grandtotal = 0.00;
}