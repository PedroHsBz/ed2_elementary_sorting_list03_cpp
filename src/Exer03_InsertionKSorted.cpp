//
// Questão 3: Ordenação de Vetor Quase-Ordenado (k-Sorted) com Insertion Sort
// Autor: Junio Moreira
// Data: 26/08/2026
//

#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

ll insertion_sort_count_comparisons(vector<int>& arr, int k) {
    ll comp_count = 0;
    int n = static_cast<int>(arr.size());

    for (int i = 1; i < n-1; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            comp_count++;
            j--;
        }

        if (i < n - 1) {
            comp_count++;
        }

        arr[j + 1] = key;
    }

    return comp_count;
}

int main() {
    FAST_IO;

    int n = 0, k = 0;
    cin >> n;
    cin >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll comp_count = insertion_sort_count_comparisons(arr, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";

    }
    cout << "\n" <<  comp_count;

    return 0;
}