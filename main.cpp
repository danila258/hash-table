#include "HashTable.h"

int main() {
    int a[] = {15, 11, 27, 8, 12};
    int n = sizeof(a) / sizeof(*a);

    HashTable h(7);

    for (int i = 0; i < n; i++) {
        h.insert(a[i]);
    }

    h.remove(12);

    h.showTable();

    return 0;
}
