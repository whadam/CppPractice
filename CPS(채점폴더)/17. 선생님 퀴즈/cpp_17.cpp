#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N, *student, *result, i, sum = 0;

	cin >> N;

	student = new int[N];
	result = new int[N];

	for (i = 0; i < N; i++) {
		cin >> student[i] >> result[i];
	}

	for (i = 0; i < N; i++) {
		for (int j = 1; j <= student[i]; j++) {
			sum += j;
		}

		if (result[i] == sum) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

		sum = 0;
	}

	delete[] student, result;

	return 0;
}
