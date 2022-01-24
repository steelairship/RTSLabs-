#include "functions.h"

using namespace std;
int main(){	
	list<int> l;
	int cv = 0;
	int input = 0;
	cout << "choose function" << endl << "1. aboveBelow" << endl << "2. stringRotation" << endl;
	cin >> input;
	if(input == 1){
		cout << "Enter comparison value: ";
		cin >> cv;
		cout << endl;
		cout << "Enter list of integers: ";
		while((cin >> input) && input != -1){
			l.push_back(input);
		}
		unordered_map<string, int> m(aboveBelow(l, cv));
		printAboveBelow(m);
	}
	if(input == 2){
		string s = " ";
		int n = 0;
		cout << "Enter string: ";
		cin >> s;
		cout << "Enter rotation amount: ";
		cin >> input;
		string result = stringRotation(s, input);
		cout << "Rotated string: " << result << endl;
	}	
	return 0;
}
