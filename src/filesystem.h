#ifndef _FILESYSTEM_
#define _FILESYSTEM_

#include <node.h>
#include <string>
#include <parser.h>
#include <iostream>

class Filesystem {
	public:
		Filesystem();
		~Filesystem();
		int addNode(Node *node);
		void printTree();
		void printTree(Node *root);
		Node *find(std::string *path);
		Node *remove(std::string *path);
		Node *getRoot();
	private:
		Node *root;
};

#endif

