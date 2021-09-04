#include<iostream>
#include<cstring>
#include<map>
#include<algorithm>
#include<cmath>

using namespace std;
//存储各类单词出现的数目 
class Store{
	private:
		int a[60];
	public:
		Store(){
			init();
		} 
		void init();
		int insert(int x);
		void printhelp();
};
