#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

struct node *create_node(int data) {
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void insert(int data) {
    struct node *new_node = create_node(data);
    if (root == NULL) {
        root = new_node;
        return;
    }

    struct node *current = root;
    while (1) {
        if (data < current->data) {
            if (current->left == NULL) {
                current->left = new_node;
                return;
            } else {
                current = current->left;
            }
        } else {
            if (current->right == NULL) {
                current->right = new_node;
                return;
            } else {
                current = current->right;
            }
        }
    }
}

void search(int data) {
    struct node *current = root;
    while (current != NULL) {
        if (data == current->data) {
            printf("The element is found in the binary search tree.\n");
            return;
        } else if (data < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    printf("The element is not found in the binary search tree.\n");
}

int main() {
    int input;
    printf("Enter an element to insert into the binary search tree: ");
    scanf("%d", &input);
    insert(input);

    printf("Enter an element to search in the binary search tree: ");
    scanf("%d", &input);
    search(input);

    return 0;
}

