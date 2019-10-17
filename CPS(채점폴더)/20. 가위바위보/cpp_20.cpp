#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N, i, * A, * B;

	cin >> N;
	A = new int[N];
	B = new int[N];

	for (i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (i = 0; i < N; i++) {
		cin >> B[i];
	}

	for (i = 0; i < N; i++) {
		if (A[i] == B[i]) cout << "D" << endl;
		else if (A[i] == 1 && B[i] == 3) cout << "A" << endl;
		else if (A[i] == 2 && B[i] == 1) cout << "A" << endl;
		else if (A[i] == 3 && B[i] == 2) cout << "A" << endl;
		else cout << "B" << endl;
	}
	
	delete[] A, B;

	return 0;
}
