#include <iostream>

using namespace std;

int counter=0;

namespace two {
	int counter=2;
}

int main() {
	cout << two::counter << endl;
	cout << "It is nice to edit in Windows using VI" << endl;
	cout <<  "This is Jack!" << endl;
}
