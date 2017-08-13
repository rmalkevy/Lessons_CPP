//
// Created by Roman Malkevych on 8/9/17.
//

#include "BinarySearchTree.h"

BST::~BST()
{
	DestroyTree();
}

Node *BST::NewNode(int key)
{
	auto node = new Node;
	node->key = key;
	node->nodeLeft = nullptr;
	node->nodeRight = nullptr;
	return node;
}

void BST::InsertNode(Node *node, int key)
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

void BST::Print(Node *node)
{
	if (node != nullptr)
	{
		Print(node->nodeLeft);
		std::cout << node->key << std::endl;
		Print(node->nodeRight);
	}
}

Node* BST::Search(Node *tree, int key)
{
	if (tree == nullptr || tree->key == key)
		return tree;
	if (tree->key < key)
		return Search(tree->nodeRight, key);

	return Search(tree->nodeLeft, key);
}

Node* BST::SearchForDelete(Node *tree, Node **parent, int key)
{
	// TODO You must know about relation with parent and node
	// (parent -> left or right)

	if (tree == nullptr || tree->key == key)
		return tree;
	*parent = tree;
//	std::cout << "checkout parent" << std::endl;
	if (tree->key < key)
		return SearchForDelete(tree->nodeRight, parent, key);

	return SearchForDelete(tree->nodeLeft, parent, key);
}

void BST::Insert(int key)
{
	if (root != nullptr)
		InsertNode(root, key);
	else
		root = NewNode(key);
}

void BST::Print()
{
	Print(root);
}

Node* BST::Search(int key)
{
	return Search(root, key);
}

void BST::DestroyTree()
{
	DestroyTree(root);
}

void BST::DestroyTree(Node *node)
{
	if (node != nullptr)
	{
		DestroyTree(node->nodeLeft);
		DestroyTree(node->nodeRight);
		delete node;
	}
}

Node *minValueNode(Node *node)
{
	Node *current = node;

	while (current->nodeLeft != nullptr)
		current = current->nodeLeft;
	return ( current );
}

Node *BST::deleteNode(Node *root, int key)
{
	if (root == nullptr)
		return ( root );

	if (key < root->key)
		root->nodeLeft = deleteNode(root->nodeLeft, key);
	else if (key > root->key)
		root->nodeRight = deleteNode(root->nodeRight, key);
	else
	{
		if (root->nodeLeft == nullptr)
		{
			Node *temp = root->nodeRight;
			delete root;
			return ( temp );
		}
		if (root->nodeRight == nullptr)
		{
			Node *temp = root->nodeLeft;
			delete root;
			return ( temp );
		}
		// Node with two children
		Node *temp = minValueNode(root);
		root->key = temp->key;

		root->nodeRight = deleteNode(root->nodeRight, temp->key);
	}
	return root;
}

Node *BST::deleteNode(int key)
{
	return deleteNode(root, key);
}
