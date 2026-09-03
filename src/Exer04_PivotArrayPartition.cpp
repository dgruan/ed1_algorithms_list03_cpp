#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, pivot;

    cin >> n >> pivot;

    vector<int> nums(n);
    vector<int> resposta;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] < pivot) {
            resposta.push_back(nums[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] == pivot) {
            resposta.push_back(nums[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] > pivot) {
            resposta.push_back(nums[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << resposta[i] << " ";
    }

    return 0;
}
