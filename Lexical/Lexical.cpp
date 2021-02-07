
#include <fstream>
#include <string>
#include <iostream>
#include "Text.h"
using namespace std;

int main() {
	//set counter
	int counter = 1;
	//text token to read each token
	Text token;

	ifstream progFile;
	progFile.open("progsampdat.txt");
	//file path
	if (progFile.is_open()) {

		while (!progFile.eof()) {

			progFile >> token;

			if (progFile.eof()) break;
			//counter to count each toekn
			cout << counter << ": [" << token << "]" << endl;

			counter += 1;

		}
		progFile.close();

	}
	else {
		cout << "Error: Couldn't read 'progsamp dat.txt'" << endl;

	}
}