/*
 * Book.h
 *
 *  Description: HG's Bookstore Books Header File
 *      Author: Humberto Garcia
 */
 //Specification File

#include <string>
#ifndef BOOK_H//Include Guard
#define BOOK_H//Include Guard
using namespace std;//Need for string attribute to work

//Book Class
class Book
{
private:
	//Attributes
	string name, isbn;
	double price;

public:
	//Constructor no argument default
	Book()
	{
		name = "None";
		isbn = "None";
		price = 0.0;
	}

	//Constructor 3 argument
	Book(string pName, string pIsbn, double pPrice);

	//Getter
	string getName() const;

	//Getter
	string getIsbn() const;

	//Getter
	double getPrice() const;

	//Setter
	void setPrice(double pPrice);
};

#endif //BOOK_H//End Guard