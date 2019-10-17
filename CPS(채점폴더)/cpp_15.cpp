#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N, count = 1;
	bool isPrime;

	cin >> N;

	for (int i = 3; i <= N; i+=2) {
		isPrime = true;
		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			count++;
		}
	}

	cout << count;

	return 0;
}
