#include<iostream>
#include<string>
#include<map>
using namespace std;
class KeywordsTable{
	private:
		string words[30]={"int","bool","double","float","short","long","char","for","if","else","while","break","swtich","void"
		,"return","include","continue","do","struct","put"};
		map<string,int> m;
	public:
		KeywordsTable(){
			init();
		} 
		void init();
		int get(string str);
		
};
