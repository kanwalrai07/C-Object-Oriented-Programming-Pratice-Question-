#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <stdlib.h>

using namespace std;

//Global Variables
vector<string> bookList;
vector<string> studentList;

//structure
struct Book
{
private:
	string title;
	string author;
	int bookID;
	int quantity;
	float price;

public:
	Book(){}
	Book(string title, string author, int bookID, int quantity, float price)
	{
		this->title = title;
		this->author = author;
		this->bookID = bookID;
		this->quantity = quantity;
		this->price = price;
	}

	string getTitle()
	{
		return title;
	}

	string getAuthor()
	{
		return author;
	}

	int getBookID()
	{
		return bookID;
	}

	int getQuantity()
	{
		return quantity;
	}

	float getPrice()
	{
		return price;
	}

	void setTitle(string title)
	{
		this->title = title;
	}

	void setAuthor(string author)
	{
		this->author = author;
	}

	void setBookID(int bookID)
	{
		this->bookID = bookID;
	}

	void setQuantity(int quantity)
	{
		this->quantity = quantity;
	}

	void setPrice(float price)
	{
		this->price = price;
	}

};

struct Student
{
private:
	string name;
	int studentID;
	string bookIssued;
	time_t issueDate;
	time_t returnDate;

public:
	Student(){}
	Student(string name, int studentID, string bookIssued, time_t issueDate, time_t returnDate)
	{
		this->name = name;
		this->studentID = studentID;
		this->bookIssued = bookIssued;
		this->issueDate = issueDate;
		this->returnDate = returnDate;
	}

	string getName()
	{
		return name;
	}

	int getStudentID()
	{
		return studentID;
	}

	string getBookIssued()
	{
		return bookIssued;
	}

	time_t getIssueDate()
	{
		return issueDate;
	}

	time_t getReturnDate()
	{
		return returnDate;
	}

	void setName(string name)
	{
		this->name = name;
	}

	void setStudentID(int studentID)
	{
		this->studentID = studentID;
	}

	void setBookIssued(string bookIssued)
	{
		this->bookIssued = bookIssued;
	}

	void setIssueDate(time_t issueDate)
	{
		this->issueDate = issueDate;
	}

	void setReturnDate(time_t returnDate)
	{
		this->returnDate = returnDate;
	}
	
};

//Function Declarations
void menu();
void addBook();
void deleteBook();
void searchBook();
void bookListing();
void issueBook();
void returnBook();
void studentListing();
void addStudent();
void deleteStudent();
void searchStudent();

int main()
{
	menu();

	return 0;
}

void menu()
{
	int choice;

	cout << "            University Library Management System" << endl;
	cout << "            ====================================" << endl;
	cout << "            1. Add a Book" << endl;
	cout << "            2. Delete a Book" << endl;
	cout << "            3. Search for a Book" << endl;
	cout << "            4. List all Books" << endl;
	cout << "            5. Issue a Book" << endl;
	cout << "            6. Return a Book" << endl;
	cout << "            7. List all Students" << endl;
	cout << "            8. Add a Student" << endl;
	cout << "            9. Delete a Student" << endl;
	cout << "            10. Search for a Student" << endl;
	cout << "            11. Exit" << endl;
	cout << "            Enter your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		addBook();
		break;
	case 2:
		deleteBook();
		break;
	case 3:
		searchBook();
		break;
	case 4:
		bookListing();
		break;
	case 5:
		issueBook();
		break;
	case 6:
		returnBook();
		break;
	case 7:
		studentListing();
		break;
	case 8:
		addStudent();
		break;
	case 9:
		deleteStudent();
		break;
	case 10:
		searchStudent();
		break;
	case 11:
		cout << "            THANK YOU FOR USING LIBRARY MANAGEMENT SYSTEM";
		exit(0);
		break;
	default:
		cout << "            Invalid Choice!" << endl;
		break;
	}
	menu();
	system ("PAUSE");
	system ("CLS");
	
}

void addBook()
{
	string title;
	string author;
	int bookID;
	int quantity;
	float price;

	cout << "            Enter Book Title: ";
	cin >> title;

	cout << "            Enter Book Author: ";
	cin >> author;

	cout << "            Enter Book ID: ";
	cin >> bookID;

	cout << "            Enter Quantity: ";
	cin >> quantity;

	cout << "            Enter Price: ";
	cin >> price;

	Book book(title, author, bookID, quantity, price);
	bookList.push_back(book.getTitle());
	cout << "            Book added successfully!" << endl;
	system ("PAUSE");
	system ("CLS");
}

void deleteBook()
{
	string title;
	cout << "            Enter Book Title: ";
	cin >> title;

	vector<string>::iterator it;
	it = find(bookList.begin(), bookList.end(), title);
	if (it != bookList.end())
	{
		bookList.erase(it);
		cout << "            Book deleted successfully!" << endl;
	}
	else
	{
		cout << "            Book not found!" << endl;
	}
	system ("PAUSE");
	system ("CLS");
}

void searchBook()
{
	string title;
	cout << "            Enter Book Title: ";
	cin >> title;

	vector<string>::iterator it;
	it = find(bookList.begin(), bookList.end(), title);
	if (it != bookList.end())
	{
		cout << "            Book found!" << endl;
	}
	else
	{
		cout << "            Book not found!" << endl;
	}
	system ("PAUSE");
	system ("CLS");
}

void bookListing()
{
	if (bookList.size() > 0)
	{
		cout << "            Book List:" << endl;
		for (int i = 0; i < bookList.size(); i++)
			cout <<"            "<<bookList[i] << endl;
	}
	else
	{
		cout << "            No books found!" << endl;
	}
	system ("PAUSE");
	system ("CLS");

}

void issueBook()
{
	string title;
	int studentID;
	time_t issueDate;

	cout << "            Enter Book Title: ";
	cin >> title;

	vector<string>::iterator it;
	it = find(bookList.begin(), bookList.end(), title);
	if (it != bookList.end())
	{
		cout << "            Book found!" << endl;
		cout << "            Enter Student ID: ";
		cin >> studentID;

		time(&issueDate);
		Student student("", studentID, title, issueDate, 0);
		studentList.push_back(student.getName());
		cout << "            Book issued successfully!" << endl;
	}
	else
	{
		cout << "            Book not found!" << endl;
	}
	system ("PAUSE");
	system ("CLS");
}

void returnBook()
{
	string title;
	int studentID;
	time_t returnDate;

	cout << "            Enter Book Title: ";
	cin >> title;

	vector<string>::iterator it;
	it = find(bookList.begin(), bookList.end(), title);
	if (it != bookList.end())
	{
		cout << "            Book found!" << endl;
		cout << "            Enter Student ID: ";
		cin >> studentID;

		time(&returnDate);
		Student student("", studentID, title, 0, returnDate);
		studentList.push_back(student.getName());
		cout << "            Book returned successfully!" << endl;
	}
	else
	{
		cout << "            Book not found!" << endl;
	}
	system ("PAUSE");
	system ("CLS");
}

void studentListing()
{
	if (studentList.size() > 0)
	{
		cout << "            Student List:" << endl;
		for (int i = 0; i < studentList.size(); i++)
			cout <<"            "<<studentList[i] << endl;
	}
	else
	{
		cout << "            No students found!" << endl;
	}
	system ("PAUSE");
	system ("CLS");
}

void addStudent()
{
	string name;
	int studentID;

	cout << "            Enter Student Name: ";
	cin >> name;

	cout << "            Enter Student ID: ";
	cin >> studentID;

	Student student(name, studentID, "", 0, 0);
	studentList.push_back(student.getName());
	cout << "            Student added successfully!" << endl;
	system ("PAUSE");
	system ("CLS");
}

void deleteStudent()
{
	string name;
	cout << "            Enter Student Name: ";
	cin >> name;

	vector<string>::iterator it;
	it = find(studentList.begin(), studentList.end(), name);
	if (it != studentList.end())
	{
		studentList.erase(it);
		cout << "            Student deleted successfully!" << endl;
	}
	else
	{
		cout << "            Student not found!" << endl;
	
	}
	system ("PAUSE");
	system ("CLS");
}

void searchStudent()
{
	string name;
	cout << "            Enter Student Name: ";
	cin >> name;

	vector<string>::iterator it;
	it = find(studentList.begin(), studentList.end(), name);
	if (it != studentList.end())
	{
		cout << "            Student found!" << endl;
	}
	else
	{
		cout << "            Student not found!" << endl;
	}
	system ("PAUSE");
	system ("CLS");
}
