#include<iostream>

using namespace std;

int main() {

	char grade;
	cout << " Enter your grade ";

	cin >> grade;

	switch (grade) {

	case 'A':
	case 'a':
		cout << "You need 90 above." << endl;
		break;

	case 'B':
	case 'b':
		cout << " You need 80 above." << endl;
		break;

	case 'c':
	case 'C':
		cout << " You need 70 above." << endl;
		break;

	case 'f':
	case 'F':

			{

				char confirm;
				cout << " Are you sure (Y/N)" << endl;
				cin >> confirm;

				if (confirm == 'y' || confirm == 'Y')
					cout << "I guess you dont want to study. " << endl;
				else if (confirm == 'n' || confirm == 'N')
					cout << " Good study hard. " << endl;
				break;

			}

	default :
		cout << "Invalid";
	}
	
}
