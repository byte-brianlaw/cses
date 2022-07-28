#include <ios>
#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

auto solve() {

    auto n = 0;

    cin >> n;

    auto number = 1;

    for (auto i = 0; i < n; ++i) {
        number = number * 2 % 1000000007;
    }

    cout << number << '\n';

}

int main() {

    cin.tie(nullptr);

    ios_base::sync_with_stdio(false);

    solve();

    return 0;

}
