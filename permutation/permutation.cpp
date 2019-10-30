#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> res;
vector<int> permutation;
static const int n = 3;
bool chosen[n+1];

void search() {
    if (permutation.size() == n) {
        res.push_back(permutation);
    } else {
        for (int i=1; i<=n; i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}
int main() {
    search();
    for (vector<int> tmp:res) {
        for (int val:tmp)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}