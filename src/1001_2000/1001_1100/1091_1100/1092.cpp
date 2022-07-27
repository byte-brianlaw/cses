#include <ios>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

auto solve() {

    auto n = 0;

    cin >> n;

    auto set_1 = vector<int>();
    auto set_2 = vector<int>();

    if (n % 4 == 0) {
        for (auto i = 1; i <= n; ++i) {
            if (i <= n / 4 || i > n * 3 / 4) {
                set_1.push_back(i);
            } else {
                set_2.push_back(i);
            }
        }
    } else if (n % 4 == 3) {
        for (auto i = 1; i <= n; ++i) {
            if (i <= (n + 1) / 4 || i > (n + 1) * 3 / 4 || i == (n + 1) / 2) {
                set_1.push_back(i);
            } else {
                set_2.push_back(i);
            }
        }
    } else {
        cout << "NO";
    }

    if (set_1.size() != 0u) {
        cout << "YES" << '\n' << set_1.size() << '\n';
        for (auto i = 0; i < static_cast<int>(set_1.size()); ++i) {
            cout << set_1[i];
            if (i != static_cast<int>(set_1.size()) - 1) {
                cout << ' ';
            }
        }
        cout << '\n' << set_2.size() << '\n';
        for (auto i = 0; i < static_cast<int>(set_2.size()); ++i) {
            cout << set_2[i];
            if (i != static_cast<int>(set_2.size()) - 1) {
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
