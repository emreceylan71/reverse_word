
#include <iostream>
using namespace std;

int main()
{
	string word1;
	cout << "Give us a word " << endl;
	cin >> word1;

	for (int i =word1.length() ; i >=0 ; i--) {

		cout << word1[i];

	}
}
