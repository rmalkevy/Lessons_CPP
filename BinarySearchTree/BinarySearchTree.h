//
// Created by Roman Malkevych on 8/9/17.
//

#ifndef LESSONS_BINARYSEARCHTREE_H
#define LESSONS_BINARYSEARCHTREE_H

#include <iostream>

struct node
{
	int key;
	node *nodeLeft;
	node *nodeRight;
};

class BST
{
public:
	BST() : key(0){};
	~BST();

	void    Insert(int key);
	void    Print();
	BST     *Search(int key);
	void    DestroyTree();

	BST &operator = (BST *node);
private:
	BST     *NewNode(int key);
	void    InsertNode(BST *node, int key);
	void    Print(BST *node);
	BST     *Search(BST *tree, int key);
	void    DestroyTree(BST *node);

	int key;
	BST *nodeLeft = nullptr;
	BST *nodeRight = nullptr;
	BST *root = nullptr;
};
#endif //LESSONS_BINARYSEARCHTREE_H
