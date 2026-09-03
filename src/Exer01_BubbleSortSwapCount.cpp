//
// Created by Junio Moreira on 2026-08-26.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);
class solve {
    public:
    bool is_sorted(const vector<int>& arr) {
        ll swap_count = 0;
        int n = static_cast<int>(arr.size());

        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    swap_count++;
                }
            }
        }
        return true;
    }
};
// TODO: Implement Bubble Sort in ascending order and return the total number of swaps performed
ll bubble_sort_swap_count(vector<int>& arr) {
    ll swap_count = 0;
    int n = static_cast<int>(arr.size());

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swap_count++;
            }
        }
    }
    return swap_count;
}

int main() {
    FAST_IO;
    ll n; cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll c = bubble_sort_swap_count(arr);

    for (ll i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n" << c;

    return 0;
}