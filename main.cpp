#include <iostream>

using namespace std;

int counter=0;

namespace two {
	int counter=2;
}

//kody is really cool and so is git

int main() {
	cout << two::counter << endl;
	cout << "It is nice to edit in Windows using VI" << endl;
	cout <<  "This is Thomas Kahng!" << endl;
}
