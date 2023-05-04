#include <stdio.h>
#define size 7

int arr[size];

void init() {
    int i;
    for (i = 0; i < size; i++) {
        arr[i] = -1;
    }
}

void insert() {
    int value;
    printf("Enter Value to insert: ");
    scanf("%d", &value);
    int key = value % size;
    if (arr[key] == -1) {
        arr[key] = value;
        printf("%d inserted at arr[%d]\n", value, key);
    } else {
        printf("Collision: arr[%d] has element already!\n", key);
        printf("Unable to insert %d\n", value);
    }
}

void del() {
    int value;
    printf("Enter Value to delete: ");
    scanf("%d", &value);
    int key = value % size;
    if (key >= 0 && key < size) {
        if (arr[key] == value) {
            arr[key] = -1;
        } else {
            printf("%d not present in the hash table\n", value);
        }
    } else {
        printf("Invalid key %d\n", key);
    }
}

void search() {
    int value;
    printf("Enter Value to search: ");
    scanf("%d", &value);
    int key = value % size;
    if (arr[key] == value) {
        printf("Search Found\n");
    } else {
        printf("Search Not Found\n");
    }
}

void print() {
    int i;
    for (i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int main() {
    init();

    while (1 > 0) {
        int c;
        printf("\nEnter Choice\n1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n\n");
        scanf("%d", &c);
        if (c == 1) {
            insert();
        } else if (c == 2) {
            del();
        } else if (c == 3) {
            search();
        } else if (c == 4) {
            print();
        } else {
            break;
        }
    }

    return 0;
}
