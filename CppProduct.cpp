//
// Created by Clytie on 2018/3/2.
//

#include "CppProduct.h"
#include <iostream>
using namespace std;

vector<int> mproduct::CppProduct::product(const vector<vector<int> > & params) {
    switch (state) {
        case 0:
            productVec();
            for (l = 0; l < result.size(); ++l) {
                state = 1;
                return result[l];
                case 1: ;
            }
    }
}

void mproduct::CppProduct::productVec() {
    vector<vector<int> >().swap(result); //需要先clear,再resize,clear只会清除元素,并不会使得元素内存变为0,而swap可以清除掉内存
    result.resize(1);
    for (int i = 0; i < params.size(); ++i) {
        vector<vector<int> > TMPresult;
        for (int j = 0; j < result.size(); ++j) {
            for (int k = 0; k < params[i].size(); ++k) {
                vector<int> resultJ = result[j];
                resultJ.push_back(params[i][k]);
                TMPresult.push_back(resultJ);
            }
        }
        result.swap(TMPresult);
    }
}

vector<int> mproduct::CppProduct::product() {
    return product(params);
}

