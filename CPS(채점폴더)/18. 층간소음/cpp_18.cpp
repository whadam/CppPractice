#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N, M, * value, i, count = 0, temp = 0;

	cin >> N >> M;

	value = new int[N];

	for (i = 0; i < N; i++) {
		cin >> value[i];
	}

	for (i = 0; i < N; i++) {
		if (value[i] > M) {
			count++;
			if (temp < count) temp = count;
		}
		else {
			count = 0;
		}
	}

	if (temp == 0) {
		cout << -1;
	}
	else {
		cout << temp;
	}
	
	delete[] value;

	return 0;
}
