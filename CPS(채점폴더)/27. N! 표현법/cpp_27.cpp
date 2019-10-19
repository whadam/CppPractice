#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, i, j, temp;

	cin >> N;
	vector<int> val(N+1);

	for (i = 2; i <= N; i++) {
		temp = i;
		j = 2;
		while (true) {
			if (temp % j == 0) {
				val[j]++;
				temp /= j;
			}
			else {
				j++;
			}
			if (temp == 1) break;
		}
	}

	printf_s("%d! = ", N);
	for (i = 2; i <= N; i++) {
		if (val[i] != 0) {
			cout << val[i] << " ";
		}
	}

	return 0;
}