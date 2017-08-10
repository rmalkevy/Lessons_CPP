//
// Created by Roman Malkevych on 8/9/17.
//

#ifndef LESSONS_BINARYSEARCHTREE_H
#define LESSONS_BINARYSEARCHTREE_H

#include <iostream>

class BST
{
public:
	explicit BST(int keyNode) : key(keyNode){};
	~BST() = default;

	int key;
	BST *nodeLeft = nullptr;
	BST *nodeRight = nullptr;

	BST     *NewNode(int key);
	void    InsertNode(BST *node, int key);
	void    Print(BST *node);
	BST     *Search(BST *tree, int key);
};
#endif //LESSONS_BINARYSEARCHTREE_H
