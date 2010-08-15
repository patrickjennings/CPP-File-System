#include "filesystem.h"
#include <iostream>

/*
 * Create an emptry filesystem with a root
 * node.
*/
Filesystem::Filesystem() {
	root = new Node(new std::string("/"), NULL);
}

/*
 * Destroy the filesystem and free the root
 * node.
*/
Filesystem::~Filesystem() {
	std::string *label = root->getLabel();
	delete label;
	delete root;
}

/*
 * Adds a node to the root of the
 * filesystem.
*/
int Filesystem::addNode(Node *node) {
	if(!node || !node->getLabel())		// If the node or the nodes label is NULL, return an error.
		return -1;
	Node *temp = root;			// Obtain a temporary pointer to the root node.
	int dir = 0;				// Starting at "/" (the root dir.).
	int dirs = numDirs(node->getLabel());	// The total number of directories in the new node.

	while(dir < dirs) {			// While we have not reached the parent directory, do the following:
		bool found = false;		// Find each child node cooresponding to the new nodes label.
		for(int i = 0; i < temp->childrenSize() && !found; i++) {
			if(node->getLabel()->compare(*(temp->getChild(i)->getLabel())) == 0)	// If the new nodes label already exists, return an error.
				return -1;
			if(isSubstr(node->getLabel(), temp->getChild(i)->getLabel())) {		// If the child node has been found, make it the root and continue.
				found = true;
				temp = temp->getChild(i);
				dir++;
			}
		}
		if(!found)		// If a child node was not found, return an error.
			return -1;
	}
	temp->addChild(node);		// Add the new node to its parent node.
	return 0;
}

/*
 * Prints the tree starting at the
 * instances root node.
*/
void Filesystem::printTree() {
	printTree(root);
}

/*
 * Print the tree starting at the
 * passed in node r.
*/
void Filesystem::printTree(Node *r) {
	if(!r)
		return;
	std::cout << *(r->getLabel()) << "\n";
	for(int i = 0; i < r->childrenSize(); ++i)
		printTree(r->getChild(i));
}

