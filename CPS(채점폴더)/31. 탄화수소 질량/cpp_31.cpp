#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	string str;
	int g, find;

	cin >> str;
	str = str.substr(1, str.length() - 1);
	find = str.find('H');

	if (str.length() == 1) g = 13;
	else {
		if (find == 0) {
			g = 12 + stoi(str.substr(1, str.length() - 1));
		}
		else if (find == str.length()-1) {
			g = 12 * stoi(str.substr(0, find)) + 1;
		}
		else {
			g = 12 * stoi(str.substr(0, find))
				+ stoi(str.substr(find + 1, str.length() - 1));
		}
	}

	cout << g;

	return 0;
}