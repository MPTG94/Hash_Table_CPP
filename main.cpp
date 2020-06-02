//
// Created by Mor on 02/06/2020.
//

#include "HashTable.h"

int main() {
    HashTable<int> hash = HashTable<int>();
//    for (int i = 0; i < 100; ++i) {
//        int bla = rand() % 10000;
//        int* temp = new int(bla);
//        if (hash.Insert(bla, temp) == FAILURE) {
//            delete temp;
//        }
//    }

    for (int i = 0; i < 1000; ++i) {
        int* temp = new int(i);
        if (hash.Insert(i, temp) == FAILURE) {
            delete temp;
        }
    }

    for (int i = 0; i < 1000; i+=2) {
        hash.Remove(i);
    }

    for (int i = 0; i < 1000; i+=3) {
        hash.Remove(i);
    }

    hash.PrintTable();


    return 0;
}