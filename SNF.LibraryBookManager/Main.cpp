// Assignment 3: Library Book Manager
// Sam Fox

#include <iostream>
#include <conio.h>

using namespace std;

struct Book
{
	string title;
	string author;
	int yearPublished;
	int numPages;
};

struct NewBook
{
	string newTitle;
	string newAuthor;
	int newYearPublished;
	int newNumPages;
};


int main()
{
	const int NUM_BOOKS = 4;
	Book books[NUM_BOOKS] = {
		{ "The Summer of Beer and Whiskey", "Edward Achorn", 2023, 318 },
		{ "The 1969 Cubs", "Kerry Wood", 2018, 248 },
		{ "Moneyball", "Michael Lewis", 2002, 500 },
		{ "Banana Ball", "Jesse Cole & Don Yaeger", 2024, 150 }
	};

	const int NUM_NEWBOOKS = 4;
	NewBook newBooks[NUM_NEWBOOKS];

	for (int i = 0; i < NUM_BOOKS; i++)
	{
		cout << (i + 1) << ". " << books[i].title << "\n" << "Author: " << books[i].author << "\n" << "Year Published: " << books[i].yearPublished << "\n" << "Number of Pages: " << books[i].numPages << "\n\n";
	}

	cout << "Enter the ID of the book you would like to update (1-4): ";
	int input = 0;
	cin >> input;
	if (input < 1 || input > 4)
	{
		cout << "This book is not in the library.\n";
	}
	else {

		cout << input << ". " << books[input - 1].title << "\n";
		cout << "Enter the Author (" << books[input - 1].author << "): ";
		cin >> newBooks[input - 1].newAuthor;
		cout << "Enter the Year Published (" << books[input - 1].yearPublished << "): ";
		cin >> newBooks[input - 1].newYearPublished;
		cout << "\nEnter the Number of Pages (" << books[input - 1].numPages << "): ";
		cin >> newBooks[input - 1].newNumPages;

		cout << "\nSave these changes? (Y/N): ";
		char yayNay;
		cin >> yayNay;
		if (yayNay == 'y' || yayNay == 'Y')
		{
			books[input - 1].author = newBooks[input - 1].newAuthor;
			books[input - 1].yearPublished = newBooks[input - 1].newYearPublished;
			books[input - 1].numPages = newBooks[input - 1].newNumPages;

			cout << input << ". " << books[input - 1].title << "\n" << "Author: " << books[input - 1].author << "\n" << "Year Published: " << books[input - 1].yearPublished << "\n" << "Number of Pages: " << books[input - 1].numPages << "\n";
		}

	}
	

	


	(void)_getch();
	return 0;
}