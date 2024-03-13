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
        int low = 0;
        int high = a.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (a[mid] < a[a.size() / 2])
                low = mid + 1;
            else
                high = mid;
        }
        cout << a[low]; // Output median for odd number of elements
    } else {
        // Median for even number of elements
        int medianIndex1 = n / 2 - 1;
        int medianIndex2 = n / 2;
        cout << (a[medianIndex1] + a[medianIndex2]) / 2.0;
    }

    return 0;
}
