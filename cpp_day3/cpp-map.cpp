#include<map>
#include<iostream>
using namespace std;

int main(){
	map< string, int> data;
	data["a"] = 10;
	data["b"] = 20;

	for(const auto&[key,value]:data){

	cout << key << ":" << value << endl;
	}
	data["b"] = 30;
	for(const auto&[key,value]:data){

	cout << key << ":" << value << endl;
	
	}


}
