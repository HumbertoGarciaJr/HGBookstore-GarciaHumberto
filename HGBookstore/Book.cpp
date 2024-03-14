/*
 * Book.cpp
 *
 *  Description: HG's Bookstore Book Body Modification File
 *      Author: Humberto Garcia
 */
 //Implementation File

#include <iostream>
#include <string>
#include "Book.h"//Include header
using namespace std;

//Body/Modify Book class at the scope of Book Constructor 3 argument
Book::Book(string pName, string pIsbn, double pPrice)
{
	name = pName;
	isbn = pIsbn;
	price = pPrice;
}

//Body/Modify Book class at the scope of getName function getter
string Book::getName() const
{
	return name;
}

//Body/Modify Book class at the scope of getIsbn function getter
string Book::getIsbn() const
{
	return isbn;
}

//Body/Modify Book class at the scope of getPrice function getter
double Book::getPrice() const
{
	return price;
}

//Body/Modify Book class at the scope of setPrice function setter
void Book::setPrice(double pPrice)
{
	price = pPrice;
}