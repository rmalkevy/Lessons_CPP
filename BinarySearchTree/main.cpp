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
	tree->Insert(89);
	tree->Insert(6);
	tree->Insert(5);
	tree->Insert(34);
	tree->Insert(45);
	tree->Insert(2);
	tree->Insert(67);
	tree->Insert(455);

	tree->Print();

	Node *delete556 = tree->deleteNode(556);
	tree->Print(delete556);
	Node *delete67 = tree->deleteNode(67);

	tree->Print(delete67);
//	Node *node = tree->Search(1);
//
//	tree->Print(node);
	return 0;
}