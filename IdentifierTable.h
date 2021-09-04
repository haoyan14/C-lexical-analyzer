#ifndef IDENTIFIERTABLE_H_
#define IDENTIFIERTABLE_H_
#include <string>
#include <map>
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class IdentifierTable {
private:
	map<string,int> m;
	int size;
public:
	IdentifierTable(){size=0;};
	void insert(string s);
	int get(string s);
	int getsize(){return size;
	}
	void printhelp();
};

#endif
