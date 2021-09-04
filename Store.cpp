#include "Store.h"
void Store::init(){
	memset(a,0,sizeof(a));
}
int Store::insert(int x){
	a[x]++;
}
void Store::printhelp(){
	cout<<"各类单词数目:"<<endl;
	for(int i=1;i<=50;i++){
		if(a[i]==0)continue;
		cout<<"第"<<i<<"类单词数目:"<<a[i]<<endl;
		 
	}
}
