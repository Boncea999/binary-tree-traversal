#include <stdio.h>
#include <stdlib.h>

// Definirea structurii nodului
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Funcție pentru crearea unui nou nod
Node* newNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Funcție pentru a insera un nod în arborele binar ordonat
Node* insert(Node* root, int data) {
    if (root == NULL) {
        return newNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}
// Pre-ordine: Rădăcină, Stâng, Drept
void preOrder(Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}
// In-ordine: Stâng, Rădăcină, Drept
void inOrder(Node* root) {
    if (root == NULL) return;
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}
// Post-ordine: Stâng, Drept, Rădăcină
void postOrder(Node* root) {
    if (root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}
void levelOrder(struct Node* root) {
    if (root == NULL) {
        return;
    }
    struct Node* queue[100];   // Coada pentru Level-order
    int front = 0, rear = 0;
    
    queue[rear++] = root; // Adaugă rădăcina în coadă

    while (front < rear) {
        struct Node* node = queue[front++];  // Extrage nodul din coadă
        printf("%d ", node->value);

        if (node->left != NULL) {
            queue[rear++] = node->left; // Adaugă copilul stâng în coadă
        }
        if (node->right != NULL) {
            queue[rear++] = node->right; // Adaugă copilul drept în coadă
        }
    }
}