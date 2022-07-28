#include <ios>
#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

auto solve() {

    auto n = 0;

    cin >> n;

    auto trailing_zeros = 0;

    for (auto factor = 5; factor <= n; factor *= 5) {
        trailing_zeros += n / factor;
    }

    cout << trailing_zeros << '\n';

}

int main() {

    cin.tie(nullptr);

    ios_base::sync_with_stdio(false);

    solve();

    return 0;

}
