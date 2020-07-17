//
// Created by lijialin990 on 2020/7/17.
//

#include "BST.h"

BST* BST::getNewNode(int num) {
    BST* newNode = new BST();
    newNode->data = num;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

BST* BST::insert(BST* rootPtr, int num){
    if (rootPtr == nullptr){
        BST* root = getNewNode(num);
        return root;
    }
    if (num <= rootPtr->data)
        rootPtr->left = insert(rootPtr->left, num);
    if (num > rootPtr->data)
        rootPtr->right = insert(rootPtr->right, num);
}
bool BST::search(BST* rootPtr, int num){
    if (rootPtr == nullptr)
        return false;
    if (rootPtr->data == num)
        return true;
    if (num <= rootPtr->data)
        return search(rootPtr->left, num);
    if (num > rootPtr->data)
        return search(rootPtr->right, num);
}
