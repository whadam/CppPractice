#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, K, sum = 0, i, * day, max;

	cin >> N >> K;
	day = new int[N];

	for (i = 0; i < N; i++) {
		cin >> day[i];
	}

	for (i = 0; i < K; i++) {
		sum += day[i];
	}
	max = sum;

	for (i = K; i < N; i++) {
		sum -= day[i - K];
		sum += day[i];

		if (max < sum) max = sum;
	}

	cout << max;
	
	delete[] day;
	
	return 0;
}