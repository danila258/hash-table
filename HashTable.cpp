#include "HashTable.h"

HashTable::HashTable(int length)
{
    this->_opacity = length;
    _table = new std::list<int>[_opacity];
}

int HashTable::hashFunction(int x) {
    return x % _opacity;
}

void HashTable::insert(int key)
{
    int index = hashFunction(key);

    if ( !_table[index].empty() ) {

    }

    _table[index].push_back(key);
}

void HashTable::remove(int key)
{
    int index = hashFunction(key);

    std::list<int> :: iterator i;

    for (i = _table[index].begin(); i != _table[index].end(); i++) {
        if (*i == key){
            break;
        }
    }

    if ( i != _table[index].end() ) {
        _table[index].erase(i);
    }
}

void HashTable::showTable() {
    for (int i = 0; i < _opacity; i++) {
        std::cout << i;

        for (auto item : _table[i]) {
            std::cout << " - " << item;
        }

        std::cout << '\n';
    }
}

