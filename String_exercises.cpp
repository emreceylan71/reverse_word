
#include <iostream>
using namespace std;

int main()
{
	string letter1, letter2;
	cout << "Give us a letter " << endl;
	cin >> letter1;

	for (int i =letter1.length() ; i >=0 ; i--) {

		cout << letter1[i];

	}
}
