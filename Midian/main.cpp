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
        int low = 0;
        int high = a.size() - 1;
        int median1, median2;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (a[mid] < a.size() / 2)
                low = mid + 1;
            else
                high = mid;
        }
        median1 = a[low];
        low = 0;
        high = a.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (a[mid] < a.size() / 2 + 1)
                low = mid + 1;
            else
                high = mid;
        }
        median2 = a[low];
        cout << (median1 + median2) / 2.0; // Output median for even number of elements
    }

    return 0;
}
