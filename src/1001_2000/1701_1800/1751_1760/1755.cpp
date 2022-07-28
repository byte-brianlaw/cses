#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;
using std::unordered_map;

auto solve() {

    auto original = string();

    cin >> original;

    auto counts = unordered_map<char, int>();

    for (auto x : original) {
        if (counts.find(x) != counts.end()) {
            ++counts[x];
        } else {
            counts[x] = 1;
        }
    }

    auto half = string();
    auto middle = '\0';

    for (const auto& x : counts) {
        if (x.second % 2 == 1) {
            if (middle == '\0') {
                middle = x.first;
            } else {
                cout << "NO SOLUTION" << '\n';
                return;
            }
        }
        half.append(x.second / 2, x.first);
    }

    cout << half;

    if (middle != '\0') {
        cout << middle;
    }

    cout << string(half.rbegin(), half.rend()) << '\n';

}

int main() {

    cin.tie(nullptr);

    ios_base::sync_with_stdio(false);

    solve();

    return 0;

}
