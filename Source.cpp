#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<string> Names;
	int Number;
	string Name;
	cin >> Number;
	for (int i = 0; i < Number; i++) {
		cin >> Name;
		
			Names.push_back(Name);
		
	}
	cout << endl;
	vector<string>::iterator it = Names.begin();
	for (it; it != Names.end(); it++) {
		cout << " | " << *it << " | ";
	}

	return 0;
}