#include <iostream>
#include <vector>

using namespace std;

vector<int> subset;
vector<vector<int>> res;
int n = 0;

void search(int k) {
    cout << "search " << k << endl;
    if (k == n+1) {
        cout << "make" << endl;
        res.push_back(subset);
        return;
    } else {
        cout << "push " << k << endl;
        subset.push_back(k);
        search(k+1);
        cout << "pop " << subset.back() << endl;
        subset.pop_back();
        search(k+1);
    }
}

int main() {
    n = 3;
    search(1);
    for (vector<int> tmp:res) {
        for (int val:tmp)
            cout << val << ", ";
        cout << endl;
    } 
    cout << endl;
    return 0;
}