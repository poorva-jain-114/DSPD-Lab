#include <stdio.h>

int main() {
    int hash[7], i, key, index, n;

    for(i = 0; i < 7; i++)
        hash[i] = -1;

    printf("Enter number of keys: ");
    scanf("%d", &n);

    while(n--) {
        printf("Enter key: ");
        scanf("%d", &key);

        index = key % 7;

        while(hash[index] != -1)
            index = (index + 1) % 7;

        // Insert key
        hash[index] = key;
    }

    printf("\nFinal Hash Table:\n");
    for(i = 0; i < 7; i++)
        printf("Index %d -> %d\n", i, hash[i]);
}
