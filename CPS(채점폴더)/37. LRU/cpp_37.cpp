#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, S, n, tmp;

    cin >> S >> N;
    vector<int> v(S);
    vector<int>::iterator it;

    for (int i = 0; i < N; i++) {
        cin >> n;
        for (it = v.begin(); it != v.end(); it++) {
            if (*it == n) { // cache hit
                v.erase(it);
                v.insert(v.begin(), n);
                break;
            }
        }
        if (it == v.end()) {    // cache miss
            v.insert(v.begin(), n);
        }
    }

    for (int i = 0; i < S; i++) {
        cout << v[i] << " ";
    }
    return 0;
}