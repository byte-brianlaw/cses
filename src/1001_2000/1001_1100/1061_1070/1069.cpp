#include <algorithm>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::ios_base;
using std::max;
using std::string;

auto solve() {

    auto sequence = string();

    cin >> sequence;

    auto current = 0;
    auto longest = 0;
    auto previous = '\0';

    for (auto x : sequence) {
        if (x != previous) {
            current = 0;
            previous = x;
        }
        longest = max(++current, longest);
    }

    cout << longest << '\n';

}

int main() {

    cin.tie(nullptr);

    ios_base::sync_with_stdio(false);

    solve();

    return 0;

}
