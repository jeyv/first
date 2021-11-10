#include <iostream>

using namespace std;

int counter=0;

namespace two {
	int counter=2;
}

int main() {
	cout << two::counter << endl;
}
