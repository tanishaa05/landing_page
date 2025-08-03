#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 5

int hashTable[TABLE_SIZE];
int hashFunction(int key) {
    return key % TABLE_SIZE;
}
void insert(int key) {
    int index = hashFunction(key);
    
    while (hashTable[index] != 0) {
        index = (index + 1) % TABLE_SIZE;
    }
    hashTable[index] = key;
    printf("Inserted %d at index %d\n", key, index);
}
int search(int key) {
    int index = hashFunction(key);
    
    while (hashTable[index] != 0) {
        if (hashTable[index] == key) {
            return index; 
        }
        index = (index + 1) % TABLE_SIZE;
    }
    return -1;
}
void deleteKey(int key) {
    int index = search(key);
    
    if (index == -1) {
        printf("%d not found in the hash table.\n", key);
    } else {
        hashTable[index] = 0;
        printf("Deleted %d from index %d\n", key, index);
    }
}
void displayHashTable() {
    printf("Hash Table:\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] == 0)
            printf("[%d]: EMPTY\n", i);
        else
            printf("[%d]: %d\n", i, hashTable[i]);
    }
}

int main() {
    int choice, key;
    
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = 0;
    }
    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: {
                printf("Enter a value to insert: ");
                scanf("%d", &key);
                insert(key);
                break;
            }
                
            case 2: {
                printf("Enter a value to search: ");
                scanf("%d", &key);
                int index = search(key);
                if (index != -1) {
                    printf("%d found at index %d\n", key, index);
                } else {
                    printf("%d not found in the hash table\n", key);
                }
                break;
            }
                
            case 3: {
                printf("Enter a value to delete: ");
                scanf("%d", &key);
                deleteKey(key); 
                break;
            }
                
            case 4:
                displayHashTable();
                break;
                
            case 5:
                exit(0);
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
