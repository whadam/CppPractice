#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, i, temp, * vals, * res, count = 0;

	cin >> N;
	vals = new int[N];
	res = new int[N];
	for (i = 0; i < N; i++) {
		cin >> temp;
		vals[i] = temp;
	}

	for (i = 0; i < N; i++) {
		if (vals[i] < 0) {
			res[count] = vals[i];
			count++;
		}
	}
	for (i = 0; i < N; i++) {
		if (vals[i] > 0) {
			res[count] = vals[i];
			count++;
		}
	}

	for (i = 0; i < N; i++) {
		cout << res[i] << " ";
	}

	delete[] vals, res;

	return 0;
}