# include <iostream>
#include <string>
using namespace std;
class ali {
	public:
	string name;
	string roll_no;
	int marks;
	char grade;
	
	ali(string roll_no,int marks ,char grade,string name){
		roll_no=roll_no;
	this->	name=name;
	this->	marks=marks;
	this->	grade=grade;
	
	}
	void in(){
		cout<<"Enter your roll no"<<endl;
		cin>>roll_no;
	}
	void out(){
		cout<<"your marks are="<<marks<<endl;
		cout<<"your grade is="<<grade<<endl;
		cout<<"your name is="<<name<<endl;
		
	}
	
	
};
int main(){
	ali a1();
	a1.in();
	
    a1.out();
    return 0;
}
