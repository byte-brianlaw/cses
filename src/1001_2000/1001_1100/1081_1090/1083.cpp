#include <ios>
#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

auto solve() {

    auto n = 0;

    cin >> n;

    auto missing_number = static_cast<long long>(n) * (n + 1) / 2;

    for (auto i = 0; i < n - 1; ++i) {
        auto number = 0;
        cin >> number;
        missing_number -= number;
    }

    cout << missing_number << '\n';

}

int main() {

    cin.tie(nullptr);

    ios_base::sync_with_stdio(false);

    solve();

    return 0;

}
