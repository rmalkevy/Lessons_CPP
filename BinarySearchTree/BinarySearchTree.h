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

	BST     *newNode(int key);
	void    insertNode(BST *node, int key);
	void    print(BST *node);

	BST &operator = (const BST &node);
};
#endif //LESSONS_BINARYSEARCHTREE_H
