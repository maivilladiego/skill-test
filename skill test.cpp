#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	double rate;
cout << " Payrate for an hour " << "		";
cin >> rate;
cout << "		" << " payrate     " << rate  << endl;

	int hours;
cout << " hours worked per day " << "		";
cin >> hours;
cout << "		" << " hours worked per week     " << hours * 7  << endl;
	
	double beforeincome;
cout << " a. income before summer job " << "			";
cout << "			" << " income before summer job: " << rate * hours << endl;
	
	double after;
cout << " a.1 income after summer job " << "			";
cout << "			" << " income after summer job: " << beforeincome + (15.50 * hours) << endl;

	int money;
cout << "b. money you spend clothes" << "			";
cout << "		" << " money on clothes: " << after * 0.10 << endl;

	int money2;
cout << "c. money you spend in supplies" << "			";
cout << "		" << " money on supplies: " << after * 0.01 << endl;

	int bond;
cout << "d bonds " << "			";
cout << "		" << " bonds: " << bond + (0.50 * after) << endl;



	_getch();


return 0;
}