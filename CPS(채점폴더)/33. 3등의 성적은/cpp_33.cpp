#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, rank = 1, i;

	cin >> N;
	vector<int> score(N);

	for (i = 0; i < N; i++) {
		cin >> score[i];
	}

	sort(score.begin(), score.end(), greater<int>());
	
	for (i = 1; i < N; i++) {
		if (score[i - 1] != score[i]) {
			rank++;
			if (rank == 3) break;
		}
	}

	cout << score[i];

	return 0;
}