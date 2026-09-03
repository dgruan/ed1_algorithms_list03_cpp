#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    vector<int> resposta;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int i = 0;
    int j = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            resposta.push_back(a[i]);
            i++;
        } else {
            resposta.push_back(b[j]);
            j++;
        }
    }

    while (i < n) {
        resposta.push_back(a[i]);
        i++;
    }

    while (j < m) {
        resposta.push_back(b[j]);
        j++;
    }

    for (int i = 0; i < n + m; i++) {
        cout << resposta[i] << " ";
    }

    return 0;
}
