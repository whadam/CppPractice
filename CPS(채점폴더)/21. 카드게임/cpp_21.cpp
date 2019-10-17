#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int* A, * B, a = 0, b = 0, i;
	char* win;
	bool check = true;

	A = new int[10];
	B = new int[10];
	win = new char[10];

	for (i = 0; i < 10; i++) {
		cin >> A[i];
	}
	for (i = 0; i < 10; i++) {
		cin >> B[i];
	}

	for (i = 0; i < 10; i++) {
		if (A[i] > B[i]) {
			win[i] = 'A';
			a += 3;
		}
		else if (A[i] < B[i]) {
			win[i] = 'B';
			b += 3;
		}
		else {
			a++;
			b++;
			win[i] = 'D';
		}
	}

	cout << a << " " << b << endl;

	if (a > b) cout << 'A';
	else if (a < b) cout << 'B';
	else {
		reverse(win, win + 10);
		i = 0;
		while (i != 10) {
			if (win[i] != 'D') {
				cout << win[i] << endl;
				check = false;
				break;
			}
			i++;
		}
	}
	if (check) cout << 'D';
	
	delete[] A, B, win;

	return 0;
}