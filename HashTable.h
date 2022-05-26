#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <list>


class HashTable {
public:
    HashTable(int length);

    int hashFunction(int x);
    void insert(int x);
    void remove(int key);
    void showTable();

private:
    std::list<int> *_table;
    int _opacity;
    int _collisions;
};


#endif //HASHTABLE_H
