#include <stdio.h>
using namespace std;
struct Node {
    int data;
    Node *left, *right;
    Node (int dat) {
        data = dat;
        left = NULL;
        right = NULL;
    }
};

void inOrderTraverse (Node *root) {
    if (root != NULL) {
        inOrderTraverse(root->left);
        printf("%d ", root->data);
        inOrderTraverse(root->right);
    }
}

Node* minValueNode (Node* node) {
    Node* current = node;
    while (current->left != NULL) {
        current = current->left;
    }
    return current;
}

Node* deleteNode (Node* root, int dat) {
    if (root == NULL) {
        return root;
    }
    if (dat < root->data) {
        root->left = deleteNode(root->left, dat);
    }
    else if (dat > root->data) {
        root->right = deleteNode(root->right, dat);
    }
    else
    {
        if (root->left == NULL) {
            root =  root->right;
            return root;
        }
        else if (root->right == NULL) {
            root =  root->left;
            return root;
        }
        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        deleteNode(root->right, temp->data);
    }
    return root;
}

Node* insert (Node* root, int dat) {
    if (root == NULL) {
        return new Node(dat);
    }
    else if (dat < root->data) {
        root->left = insert(root->left, dat);
    }
    else {
        root->right = insert(root->right, dat);
    }
   /// return root;
}

int main() {
    Node* root = NULL;
    root = insert(root, 10);
    insert(root,9);
    insert(root,3);
    insert(root,91);
    insert(root,1);
    insert(root,5);
    insert(root,200);
    insert(root,2);
    inOrderTraverse(root);
    deleteNode(root, 9);
    inOrderTraverse(root);
    deleteNode(root, 2);
    inOrderTraverse(root);
    return 0;
}
