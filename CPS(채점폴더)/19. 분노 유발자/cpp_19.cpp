#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N, * height, i, max = 0, count = 0;

	cin >> N;
	height = new int[N];

	for (i = 0; i < N; i++) {
		cin >> height[i];
	}

	reverse(height, height + N);

	max = height[0];

	for (i = 1; i < N; i++) {
		if (height[i] > max) {
			max = height[i];
			count++;
		}
	}

	cout << count << endl;

	delete[] height;

	return 0;
}
