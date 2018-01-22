//First Homework answer
#include <iostream>
#include <string>
using namespace std;

int main() {
	//initalize needed variables
	string fname; //first name
	string lname; //last name
	int byear; //birth year
	int fheight; //foot for height
	int iheight; //inch for height
	int age; //age in years
	double cmheight; //height in cm
	double avg_growth; //average growth

	 //ask for information

	//cout << "Enter first name: ";
	cin >> fname; 

	//cout << "Enter last name: ";
	cin >> lname;

	//cout << "Enter birth year: ";
	cin >> byear;

	//cout << "Enter your height foot: ";
	cin >> fheight;

	//cout << "Enter height in feet only: ";
	cin >> iheight;

	cmheight = (fheight * 12 + iheight) *  2.54;

	age = 2018 - byear;
	
	avg_growth = (cmheight - 51) / age;

	cout << age << endl;
	cout << cmheight << endl;
	cout << avg_growth << endl;
	
	cout << "Hello " << fname<< " " << lname<< ". You are " << age << " years old in 2018, and your height is " <<cmheight<< " cm. "
		"That means that you grew an average of " << avg_growth << "cm per year (assuming you were 51 cm at birth).";
	system("pause");
}