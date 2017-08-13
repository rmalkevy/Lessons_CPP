//
// Created by Roman Malkevych on 8/9/17.
//

#ifndef LESSONS_BINARYSEARCHTREE_H
#define LESSONS_BINARYSEARCHTREE_H

#include <iostream>

struct Node
{
	int key;
	Node *nodeLeft;
	Node *nodeRight;
};

class BST
{
public:
	BST() : key(0){};
	~BST();

	void    Insert(int key);
	void    Print();
	void    Print(Node *node);
	Node    *Search(int key);
	Node    *deleteNode(int key);
	void    DestroyTree();

private:
	Node    *NewNode(int key);
	void    InsertNode(Node *node, int key);
	Node    *Search(Node *tree, int key);
	Node    *deleteNode(Node *root, int key);
	Node    *SearchForDelete(Node *tree, Node **parent, int key);
	void    DestroyTree(Node *node);

	int     key;
	Node    *root = nullptr;
};
#endif //LESSONS_BINARYSEARCHTREE_H
