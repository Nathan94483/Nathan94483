#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	int a,b;
	int passpin=1234;
	string name;
	
	
	cout<<"Enter your Name"<<endl;
	cin>>name;
	cout<<"Enter password"<<endl;
	cin>>passpin;
	
	if(passpin==1234){
		cout<<"YOU ARE WELCOME:"<<" "<<name<<endl;
	}
	
return 0;
}
