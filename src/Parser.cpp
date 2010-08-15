
#include "parser.h"

bool isSubstr(std::string *string, std::string *substring) {
	if(!string || !substring)
		return 0;
	else if(substring->size() > string->size())
		return 0;
	if((string->substr(substring->size() - 1)).compare(*substring))
		return 1;
	return 0;
}

unsigned int numDirs(std::string *path) {
	unsigned int ret = 0;
	for(unsigned int i = 1; i < path->length(); i++)
		if(path->at(i) == '/')
			ret++;
	return ret;
}

