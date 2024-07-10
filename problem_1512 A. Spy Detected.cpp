#include <iostream>
#include <vector>

using namespace std;

int findUniqueIndex(vector<int>& arr) {
    int n = arr.size();
    if (arr[0] != arr[1] && arr[0] != arr[2]) {
        return 1;  // First element is unique
    }
    if (arr[1] != arr[0] && arr[1] != arr[2]) {
        return 2;  // Second element is unique
    }
    for (int i = 2; i < n; i++) {
        if (arr[i] != arr[0]) {
            return i + 1;  // Found the unique element
        }
    }
    return -1;  // This should never be reached
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << findUniqueIndex(arr) << endl;
    }
    return 0;
}
