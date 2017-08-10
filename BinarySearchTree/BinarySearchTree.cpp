//
// Created by Roman Malkevych on 8/9/17.
//

#include "BinarySearchTree.h"

BST *BST::newNode(int key)
{
	auto node = new BST(key);
	node->nodeLeft = nullptr;
	node->nodeRight = nullptr;
	return node;
}

void BST::insertNode(BST *node, int key)
{
	if (node->key > key)
	{
		if (node->nodeLeft == nullptr)
			node->nodeLeft = newNode(key);
		else
			insertNode(node->nodeLeft, key);
	}
	else if (node->key < key)
	{
		if (node->nodeRight == nullptr)
			node->nodeRight = newNode(key);
		else
			insertNode(node->nodeRight, key);
	}
}

void BST::print(BST *node)
{
	if (node != nullptr)
	{
		node->print(node->nodeLeft);
		std::cout << node->key << std::endl;
		node->print(node->nodeRight);
	}
}

BST &BST::operator = (const BST &node)
{
	*this = node;
	return *this;
}