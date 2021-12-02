#include <iostream>

using namespace std;

int counter=0;

namespace two {
	int counter=2;
}
//this is a change that was changed and such
int main() {
	cout << two::counter << endl;
	cout << "It is nice to edit in Windows using VI" << endl;
	cout <<  "This is Kevin	!" << endl;
}
