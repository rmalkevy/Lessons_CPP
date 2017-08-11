//
// Created by Roman Malkevych on 8/9/17.
//

#include "BinarySearchTree.h"

int main()
{
	auto tree = new BST;

	tree->Insert(56);
	tree->Insert(1);
	tree->Insert(6);

	tree->Insert(556);
	tree->Insert(99);
	tree->Insert(90);
	tree->Insert(6);
	tree->Insert(5);
	tree->Insert(34);

	tree->Print();

	Node *node = tree->Search(1);

	tree->Print(node);
	return 0;
}