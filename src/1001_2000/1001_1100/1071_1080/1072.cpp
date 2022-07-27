#include <ios>
#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

auto solve() {

    auto n = 0;

    cin >> n;

    for (auto i = 1; i <= n; ++i) {
        cout << static_cast<long long>(i) * i * (i * i - 1) / 2 - (i - 1) * (i - 2) * 4 << '\n';
    }

}

int main() {

    cin.tie(nullptr);

    ios_base::sync_with_stdio(false);

    solve();

    return 0;

}
