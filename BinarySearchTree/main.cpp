//
// Created by Roman Malkevych on 8/9/17.
//

#include "BinarySearchTree.h"

int main()
{
	auto tree = new BST(89);

	tree->insertNode(tree, 56);
	tree->insertNode(tree, 1);
	tree->insertNode(tree, 6);
	tree->insertNode(tree, 556);
	tree->insertNode(tree, 6);
	tree->insertNode(tree, 5);
	tree->insertNode(tree, 99);
	tree->insertNode(tree, 90);
	tree->insertNode(tree, 34);

	tree->print(tree);

	return 0;
}