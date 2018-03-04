#include "CppProduct.h"
#include <iostream>
using namespace std;

int main() {
    vector<vector<int> > test = {{13, 3}, {10, 6, 7}, {5, 2, 1, 0}};
    mproduct::CppProduct pro(test);
    for (int i = 0; i < 24; ++i) {
        vector<int> prod = pro.product();
        for (int j = 0; j < prod.size(); ++j) {
            cout << prod[j] << " ";
        }
        cout << endl;
    }
    return 0;
}