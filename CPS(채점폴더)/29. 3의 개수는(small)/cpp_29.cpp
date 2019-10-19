#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, i, j, count = 0;
	string str;

	cin >> N;

	for (i = 1; i <= N; i++) {
		str = to_string(i);
		for (j = 0; j < str.length(); j++) {
			if (str.at(j) == '3') count++;
		}
	}

	cout << count;

	return 0;
}