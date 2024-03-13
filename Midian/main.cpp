#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (n % 2 != 0) {
        // Median for odd number of elements
        int medianIndex = n / 2;
        cout << a[medianIndex];
    } else {
        // Median for even number of elements
        int medianIndex1 = n / 2 - 1;
        int medianIndex2 = n / 2;
        cout << (a[medianIndex1] + a[medianIndex2]) / 2.0; // Average of middle two elements
    }

    return 0;
}
