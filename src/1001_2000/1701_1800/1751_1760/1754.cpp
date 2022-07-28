#include <ios>
#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

auto solve() {

    auto a = 0;
    auto b = 0;

    cin >> a >> b;

    if ((a + b) % 3 == 0 && a * 2 >= b && b * 2 >= a) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    cout << '\n';

}

int main() {

    cin.tie(nullptr);

    ios_base::sync_with_stdio(false);

    auto t = 0;

    cin >> t;

    for (auto i = 1; i <= t; ++i) {
        solve();
    }

    return 0;

}
