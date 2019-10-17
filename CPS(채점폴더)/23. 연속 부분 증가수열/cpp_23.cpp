#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, * num, i, max = 0, length = 1;

	cin >> N;
	num = new int[N];

	for (i = 0; i < N; i++) {
		cin >> num[i];
	}
	
	for (i = 1; i < N; i++) {
		if (num[i] >= num[i-1]) {
			length++;
		}
		else {
			if (max < length) max = length;
			length = 1;
		}
	}

	cout << max;
	
	delete[] num;
	
	return 0;
}