//First Homework answer
#include <iostream>
using namespace std;

int main() {
	//initalize needed variables
	int fname; //first name
	int lname; //last name
	int byear; //birth year
	int fheight; //foot for height
	int iheight; //inch for height
	int age; //age in years
	double cmheight; //height in cm
	double avg_growth; //average growth

					   //ask for information

	cout << "Enter first name: ";
	cin >> fname;

	cout << "Enter last name: ";
	cin >> lname;

	cout << "Enter birth year: ";
	cin >> byear;

	cout << "Enter your height foot: ";
	cin >> fheight;

	cout << "Enter height in feet only: ";
	cin >> iheight;

	cmheight = (fheight * 12 + iheight) *  2.54;

}