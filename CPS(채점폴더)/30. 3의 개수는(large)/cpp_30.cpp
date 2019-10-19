#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, left = 1, right, k = 1, cur, result = 0;
	
	cin >> N;

	while (left != 0) {
		left = N / (k*10);
		right = N % k;
		cur = (N / k) % 10;
		if (cur > 3) {
			result += (left + 1) * k;
		}
		else if (cur == 3) {
			result += (left * k) + (right + 1);
		}
		else {
			result += left*k;
		}
		k *= 10;
	}

	cout << result;

	return 0;
}