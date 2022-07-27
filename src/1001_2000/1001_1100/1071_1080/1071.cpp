#include <algorithm>
#include <ios>
#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;
using std::max;

auto solve() {

    auto x = 0;
    auto y = 0;

    cin >> y >> x;

    const auto side = max(x, y);
    auto number = static_cast<long long>(side - 1) * (side - 1);

    if (x == side) {
        if (side % 2 == 0) {
            number += y;
        } else {
            number += side * 2 - y;
        }
    } else {
        if (side % 2 == 0) {
            number += side * 2 - x;
        } else {
            number += x;
        }
    }

    cout << number << '\n';

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
