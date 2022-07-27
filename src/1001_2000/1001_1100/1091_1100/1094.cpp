#include <ios>
#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

auto solve() {

    auto n = 0;
    auto previous = 0;

    cin >> n >> previous;

    auto moves = 0ll;

    for (auto i = 0; i < n - 1; ++i) {
        auto number = 0;
        cin >> number;
        if (number < previous) {
            moves += previous - number;
        } else {
            previous = number;
        }
    }

    cout << moves << '\n';

}

int main() {

    cin.tie(nullptr);

    ios_base::sync_with_stdio(false);

    solve();

    return 0;

}
