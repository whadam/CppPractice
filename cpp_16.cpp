#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string str1, str2;
	int arr1[52] = { 0, }, arr2[52] = { 0, }, i;
	bool isAnagram = true;

	cin >> str1 >> str2;

	for (i = 0; i < str1.length(); i++) {
		if (str1.at(i) < 91) {			//대문자
			arr1[str1.at(i) - 65]++;
		}
		else if (96 < str1.at(i)) {	//소문자
			arr1[str1.at(i) - 71]++;
		}
	}
	for (i = 0; i < str2.length(); i++) {
		if (str2.at(i) < 91) {			//대문자
			arr2[str2.at(i) - 65]++;
		}
		else if (96 < str2.at(i)) {	//소문자
			arr2[str2.at(i) - 71]++;
		}
	}

	i = 0;
	while (isAnagram) {
		if (arr1[i] != arr2[i]) {
			isAnagram = false;
			break;
		}
		i++;
		if (i == 52) break;
	}

	if (isAnagram == true) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}
