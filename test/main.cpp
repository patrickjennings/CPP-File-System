#include "filesystem.h"
#include <iostream>
#include "node.h"

int main() {
	Filesystem fs;
	std::string etc("/etc");
	std::string portage("/etc/portage");
	std::string vim("/etc/vim");
	Node etcNode(&etc, NULL);
	Node portageNode(&portage, NULL);
	Node vimNode(&vim, NULL);
	fs.addNode(&etcNode);
	fs.addNode(&portageNode);
	fs.addNode(&vimNode);
	fs.printTree();
}

