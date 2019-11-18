#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, * vals, aux, i, temp;

	cin >> N;
	vals = new int[N];
	for (i = 0; i < N; i++) {
		cin >> vals[i];
	}

	for (i = 1; i < N; i++) {
		temp = vals[i];
		aux = i - 1;

		while ((aux >= 0) && (vals[aux] > temp)) {
			vals[aux + 1] = vals[aux];
			aux--;
		}
		vals[aux + 1] = temp;
	}

	for (i = 0; i < N; i++) {
		cout << vals[i] << " ";
	}

	delete[] vals;

	return 0;
}