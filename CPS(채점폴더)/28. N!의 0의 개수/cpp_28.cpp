#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, i, j, temp, count2 = 0, count5 = 0;

	cin >> N;

	for (i = 2; i <= N; i++) {
		temp = i;
		j = 2;
		while (true) {
			if (temp % j == 0) {
				if (j == 2) {
					count2++;
				}
				else if (j == 5) {
					count5++;
				}
				temp /= j;
			}
			else {
				j++;
			}
			if (temp == 1) break;
		}
	}

	if (count2 < count5) {
		cout << count2;
	}
	else {
		cout << count5;
	}

	return 0;
}