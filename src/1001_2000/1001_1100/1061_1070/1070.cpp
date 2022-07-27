#include <ios>
#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

auto solve() {

    auto n = 0;

    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    } else {
        for (auto i = 2; i <= n; i += 2) {
            cout << i << ' ';
        }
        for (auto i = 1; i <= n; i += 2) {
            cout << i;
            if (i + 2 <= n) {
                cout << ' ';
            }
        }
    }

    cout << '\n';

}

int main() {

    cin.tie(nullptr);

    ios_base::sync_with_stdio(false);

    solve();

    return 0;

}
