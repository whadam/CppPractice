#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, i, j, min;

	cin >> N;
	vector<int> val(N);

	for (i = 0; i < N; i++) {
		cin >> val[i];
	}

	for (i = 0; i < val.size(); i++) {
		min = i;
		for (j = i + 1; j < val.size(); j++) {
			if (val[j] < val[min]) min = j;
		}
		j = val[i];
		val[i] = val[min];
		val[min] = j;
	}

	for (i = 0; i < N; i++) {
		cout << val[i] << " ";
	}

	return 0;
}