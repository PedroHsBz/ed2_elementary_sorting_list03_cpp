//
// Created by Junio Moreira on 2026-08-26.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

// TODO: Perform exactly k outer iterations of Selection Sort
void selection_sort_k_iterations(vector<int>& arr, int k) {
    // Implementation goes here
    for (int i = 0; i < k; i++) {
        int index = i;
        int n = static_cast<int>(arr.size());
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }

        }
        swap(arr[i], arr[index]);
    }
}

int main() {
    FAST_IO;

    // TODO: Read N, k and array, run selection_sort_k_iterations,
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    selection_sort_k_iterations(arr, k);
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    // and print the first k elements separated by space

    return 0;
}