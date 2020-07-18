//
// Created by lijialin990 on 2020/7/17.
//
#include <iostream>
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

int BST::findMin(BST* rootPtr){
    if (rootPtr == nullptr)
        std::cerr << "no data in this root!" << std::endl;
    else
    {
        while (rootPtr->left != nullptr)
            rootPtr = rootPtr -> left;
        return rootPtr->data;
    }
}

int BST::findMax(BST* rootPtr){
    if (rootPtr == nullptr)
        std::cerr << "no data in this root!";
    else
    {
        while (rootPtr->right != nullptr)
            rootPtr = rootPtr->right;
        return rootPtr->data;
    }
}

int BST::maxHeight(int left, int right){
    if (left >= right)
        return left;
    else
        return right;
}

int BST::findHeight(BST* rootPtr){
    if (rootPtr == nullptr)
        return -1;
    else{
        int leftHeight, rightHeight;
        leftHeight = findHeight(rootPtr->left);
        rightHeight = findHeight(rootPtr->right);
        return maxHeight(leftHeight, rightHeight) + 1;
    }
}