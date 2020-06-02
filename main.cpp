//
// Created by Mor on 02/06/2020.
//

#include "HashTable.h"

int main() {
//    HashTable<int> hash = HashTable<int>();
//    for (int i = 0; i < 1000; ++i) {
//        int bla = rand() % 10000;
//        hash.Insert(bla, new int(bla));
//    }

    List<int> mList = List<int>();
//    mList.Insert(5, new int(5));
//    mList.Insert(6, new int(6));
    for (int i = 0; i < 20000; ++i) {
        int bla = rand() % 10000;
        int* temp = new int(bla);
        mList.Insert(bla, temp);
    }

    return 0;
}