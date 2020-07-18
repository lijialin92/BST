//
// Created by lijialin990 on 2020/7/17.
//

#ifndef BST_BST_H
#define BST_BST_H


class BST {
public:
    BST* getNewNode(int num);
    BST* insert(BST* rootPtr, int num);
    bool search(BST* rootPtr, int num);
    int findMin(BST* rootPtr);
    int findMax(BST* rootPtr);
    int findHeight(BST* rootPtr);
    int maxHeight(int left, int right);
private:
    int data;
    BST* left = nullptr;
    BST* right = nullptr;
};


#endif //BST_BST_H
