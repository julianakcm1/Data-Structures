#include <stdio.h>

int binary_search (int array[], int n, int key) {
    int begin = 0;
    int end = n;
    int middle;

    while (begin <= end) {
        middle = (begin + end) / 2;

        if (array[middle] < key) begin = middle;
        else if (array[middle] > key) end = middle;
        else return middle;
    }
    return -1;
}

int main() {
    int n, key, i;
    scanf ("%d", &n);

    int array[n];

    for (i = 0; i < n; ++i) {
        scanf ("%d", &array[i]);
    }

    scanf ("%d", &key);

    int s = binary_search (array, n, key);

    if (s == -1) printf ("O elemento desejado não pertence ao array.\n");
    else printf ("O elemento desejado encontra-se na posição %d\n", s);

    return 0;
}
