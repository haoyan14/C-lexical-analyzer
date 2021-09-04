#ifndef CONSTTABLE_H
#define CONSTTABLE_H
#include <string>
#include <map>
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class ConstTable {
private:
	map<string,int> m;
	int size;
public:
	ConstTable(){size=0;};
	void insert(string s);
	int get(string s);
	int getsize(){return size;
	}
	void printhelp();
};

#endif
