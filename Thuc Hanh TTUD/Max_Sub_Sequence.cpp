#include <iostream>
#include <vector>
#include <algorithm> // For max

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Implementing Kadane's algorithm
    int max_current = a[0];
    int max_global = a[0];

    for (int i = 1; i < n; ++i) {
        max_current = max(a[i], max_current + a[i]);
        if (max_current > max_global) {
            max_global = max_current;
        }
    }

    cout << max_global << endl;

    return 0;
}
