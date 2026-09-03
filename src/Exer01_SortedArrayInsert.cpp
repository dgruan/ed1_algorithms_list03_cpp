#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;

    cin >> n >> x;

    vector<int> lista(n + 1);

    for (int i = 0; i < n; i++) {
        cin >> lista[i];
    }

    int posicao = n;

    for (int i = 0; i < n; i++) {
        if (x < lista[i]) {
            posicao = i;
            break;
        }
    }

    for (int i = n; i > posicao; i--) {
        lista[i] = lista[i - 1];
    }

    lista[posicao] = x;

    for (int i = 0; i < n + 1; i++) {
        cout << lista[i] << " ";
    }

    return 0;
}
