#include "node.h"

Node::Node() {
	children = new LinkedList();
	label = 0;
	data = 0;
}

Node::Node(std::string *l, void *d) {
	children = new LinkedList();
	label = l;
	data = d;
}

Node::~Node() {
	delete children;
}

void Node::setData(void *d) {
	data = d;
}

void *Node::getData() {
	return data;
}

void Node::setLabel(std::string *l) {
	label = l;
}

std::string *Node::getLabel() {
	return label;
}

int Node::compare(Comparable *item) {
	if(label)
		return label->compare(*(((Node *)item)->getLabel()));
	return -1;
}

void Node::addChild(Node *child) {
	children->enqueue(child);
}

Node *Node::getChild(unsigned int index) {
	return (Node *)children->get(index);
}

Node *Node::removeChild(unsigned int index) {
	return (Node *)children->remove(index);
}

int Node::childrenSize() {
	return children->getSize();
}
