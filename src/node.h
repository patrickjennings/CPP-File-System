#ifndef _Node_
#define _Node_

#include <comparable.h>
#include <string>
#include <linkedlist.h>

class Node : public Comparable {
	public:
		Node();
		Node(std::string *l, void *d);
		~Node();
		void setData(void *d);
		void *getData();
		void setLabel(std::string *l);
		std::string *getLabel();
		int compare(Comparable *item);
		void addChild(Node *child);
		Node *getChild(unsigned int);
		Node *removeChild(unsigned int);
		int childrenSize();
	private:
		std::string *label;
		void *data;
		LinkedList *children;
};

#endif

