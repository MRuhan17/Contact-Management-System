#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100

typedef struct {
    char name[50];
    char phone[15];
} Contact;

Contact contacts[MAX_CONTACTS];
int contactCount = 0;

void addContact() {
    if (contactCount < MAX_CONTACTS) {
        printf("Enter name: ");
        scanf("%s", contacts[contactCount].name);
        printf("Enter phone: ");
        scanf("%s", contacts[contactCount].phone);
        contactCount++;
        printf("Contact added.\n");
    } else {
        printf("Contact list is full.\n");
    }
}

void viewContacts() {
    printf("\nContacts:\n");
    for (int i = 0; i < contactCount; i++) {
        printf("%d. %s - %s\n", i + 1, contacts[i].name, contacts[i].phone);
    }
}

int main() {
    int choice;
    do {
        printf("\n1. Add Contact\n2. View Contacts\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addContact(); break;
            case 2: viewContacts(); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);
    return 0;
}
