//
// Created by Roman Malkevych on 8/9/17.
//

#include "BinarySearchTree.h"

BST *BST::NewNode(int key)
{
	auto node = new BST(key);
	node->nodeLeft = nullptr;
	node->nodeRight = nullptr;
	return node;
}

void BST::InsertNode(BST *node, int key)
{
	if (node->key > key)
	{
		if (node->nodeLeft == nullptr)
			node->nodeLeft = NewNode(key);
		else
			InsertNode(node->nodeLeft, key);
	}
	else if (node->key < key)
	{
		if (node->nodeRight == nullptr)
			node->nodeRight = NewNode(key);
		else
			InsertNode(node->nodeRight, key);
	}
}

void BST::Print(BST *node)
{
	if (node != nullptr)
	{
		Print(node->nodeLeft);
		std::cout << node->key << std::endl;
		Print(node->nodeRight);
	}
}

BST* BST::Search(BST *tree, int key)
{
	if (tree == nullptr || tree->key == key)
		return tree;
	if (tree->key < key)
		return Search(tree->nodeRight, key);
	return Search(tree->nodeLeft, key);
}