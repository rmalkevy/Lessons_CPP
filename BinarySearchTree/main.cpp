//
// Created by Roman Malkevych on 8/9/17.
//

#include "BinarySearchTree.h"

int main()
{
	auto *tree = new BST(89);

	tree->InsertNode(tree, 56);
	tree->InsertNode(tree, 1);
	tree->InsertNode(tree, 6);

	tree->InsertNode(tree, 556);
	tree->InsertNode(tree, 99);
	tree->InsertNode(tree, 90);
	tree->InsertNode(tree, 6);
	tree->InsertNode(tree, 5);
	tree->InsertNode(tree, 34);

//	tree->Print(tree);

	auto node = tree->Search(tree, 556);

	node->Print(node);
	return 0;
}