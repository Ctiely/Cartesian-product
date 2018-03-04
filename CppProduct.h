//
// Created by Clytie on 2018/3/2.
//

#ifndef PRODUCT_CPPPRODUCT_H
#define PRODUCT_CPPPRODUCT_H

#include <vector>
#include <map>
#include <string>

using namespace std;

namespace mproduct {
    class CppProduct {
    public:
        CppProduct() {}
        CppProduct(vector<vector<int> > params, int state = 0)
                : params(params), state(state) {}
        ~CppProduct() {}


        vector<vector<int> > params;
        int state, l;
        vector<vector<int> > result;

        vector<int> product();
        void productVec();


    private:
        vector<int> product(const vector<vector<int> > & params);
    };
}



#endif //PRODUCT_CPPPRODUCT_H
