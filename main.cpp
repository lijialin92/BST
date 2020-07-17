#include <iostream>
#include "BST.h"

int main() {
    BST* root = nullptr;
    root = root->insert(root, 15);
    root->insert(root, 10);
    root->insert(root, 20);
    root->insert(root, 25);
    std::cout << root->search(root, 15);
    return 0;
}
