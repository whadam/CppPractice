#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, i, j, * rank, * ability, count = 0;

	cin >> N;
	rank = new int[N];
	ability = new int[N];

	for (i = 0; i < N; i++) {
		cin >> ability[i];
		rank[i] = 1;
	}

	for (i = 1; i < N; i++) {
		for (j = i - 1; j >= 0; j--) {
			if (ability[i] <= ability[j]) rank[i]++;
		}
	}

	for (i = 0; i < N; i++) {
		cout << rank[i] << " ";
	}
	
	delete[] rank, ability;

	return 0;
}