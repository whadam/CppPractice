#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int N, i, j, * score, * rank;

	cin >> N;
	score = new int[N+1];
	rank = new int[N + 1];

	for (i = 1; i <= N; i++) {
		cin >> score[i];
		rank[i] = 1;
	}
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if (score[i] > score[j]) rank[j]++;
		}
	}
	for (i = 1; i <= N; i++) {
		cout << rank[i] << " ";
	}

	delete[] score, rank;
	
	return 0;
}