//
// Questão 4: Ordenação Paridade-Bifásica com Bubble Sort
// Autor: Junio Moreira
// Data: 26/08/2026
//
// Critério de ordenação:
// 1. Todos os pares antes de todos os ímpares
// 2. Pares em ordem crescente entre si
// 3. Ímpares em ordem decrescente entre si
//

#include <iostream>
#include <vector>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL);

void bubble_sort_parity(vector<int>& arr) {
    int n = static_cast<int>(arr.size());

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            bool should_swap = false;

            int curr = arr[j];
            int next = arr[j + 1];
            int curr_parity = curr % 2;
            int next_parity = next % 2;

            if (curr_parity == 1 && next_parity == 0) {
                should_swap = true;
            }
            else if (curr_parity == 0 && next_parity == 0) {
                if (curr > next) {
                    should_swap = true;
                }
            }
            else if (curr_parity == 1 && next_parity == 1) {
                if (curr < next) {
                    should_swap = true;
                }
            }

            if (should_swap) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    FAST_IO;

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort_parity(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << " ";
    }
    cout << "\n";

    return 0;
}