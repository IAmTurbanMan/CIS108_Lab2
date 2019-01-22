// Exercise 2 : Young book, old book, short book, long book

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// input and assign variables
	cout << "Enter the name of your favorite book: ";
	string book;
	getline(cin, book);

	cout << "Enter the name of the author of that book: ";
	string author;
	getline(cin, author);

	cout << "Enter the year the book was published: ";
	int year;
	cin >> year;

	cout << "Enter the number of pages in the book: ";
	int pages;
	cin >> pages;

	constexpr int current_year = 2019;		// assign current_year as a constant
	int book_age = (current_year - year);   // determine how old the book is

	// logic statements for book age and length

	if (book_age < 10)
	{
		cout << "This book is younger than ten years old.\n";
	}

	else
	{
		cout << "This book is at least ten years old.\n";
	}

	if (pages < 100)
	{
		cout << "This is a short book.";
	}

	else if (pages < 300)
	{
		cout << "This is an average book.";
	}

	else
	{
		cout << "This is a long book.";
	}

	return 0;
}
