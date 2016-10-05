//
// Created by ice on 9/28/16.
//

#include<iostream>
#include "zcore/zcore.h"
#include "zimgproc/zimgproc.h"

using namespace std;
using namespace z;

int main(int argc, char * argv[])
{
    Matrix8u test(8, 16, 1);
    test = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 , 15,
            1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 , 15, 0,
            2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 , 15, 0, 1,
            3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 , 15, 0, 1, 2,
            4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 , 15, 0, 1, 2, 3,
            5, 6, 7, 8, 9, 10, 11, 12, 13, 14 , 15, 0, 1, 2, 3, 4,
            6, 7, 8, 9, 10, 11, 12, 13, 14 , 15, 0, 1, 2, 3, 4, 5,
            7, 8, 9, 10, 11, 12, 13, 14 , 15, 0, 1, 2, 3, 4, 5, 6};

    cout << test<<endl;

    bitRevRows(test);
    cout << test;
}