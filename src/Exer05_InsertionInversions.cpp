//
// Created by Junio Moreira on 2026-08-26.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

// TODO: Count total inversions (shifts) using Insertion Sort simulation
ll count_inversions_insertion_sort(vector<int>& arr) {
    ll shift_count = 0, n = static_cast<int>(arr.size());
    for (ll i = 1; i < n; i++) {
        int key = arr[i];
        ll j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            shift_count++;
            j--;
        }
        arr[j + 1] = key;
    }
    return shift_count;
}

int main() {
    FAST_IO;

    // TODO: Read N and array, count inversions via Insertion Sort,

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // and print the total number of inversions
    cout << count_inversions_insertion_sort(arr) << endl;
    return 0;
}