#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, n;
    cin >> N;
    vector<int> v(N);

    for (int i = 1; i <= N; i++) {
        cin >> n;
        for (int j = 0; j <= n; j++) {
            if (0 < v[j] && v[j] < i) {
                n++;
            }
        }
        v[n] = i;
    }

    for (int i = 0; i < N; i++) {
        cout << v[i] << " ";
    }

    return 0;
}