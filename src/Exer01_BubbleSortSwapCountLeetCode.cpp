//
// Created by Junio Moreira on 2026-08-26.
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

class Solve {
    public:

    bool is_sorted(const vector<int>& arr) {
        ll swap_count = 0;
        int n = static_cast<int>(arr.size());

        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swap_count++;
                }
            }
        }
        return true;
    }
};

int main() {
    FAST_IO;
    Solve solve;
    ll n; cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll c = solve.is_sorted(arr);

    for (ll i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n" << c;

    return 0;
}