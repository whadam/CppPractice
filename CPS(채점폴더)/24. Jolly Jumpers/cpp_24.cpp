#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, pre, now, i, sub;

	cin >> N;
	vector<int> check(N);

	cin >> pre;
	for (i = 1; i < N; i++) {
		cin >> now;
		sub = abs(now - pre);
		if (sub > 0 && sub < N && check[sub] == 0) check[sub] = 1;
		else {
			cout << "NO";
			return 0;
		}
		pre = now;
	}
	cout << "YES";
	
	return 0;
}