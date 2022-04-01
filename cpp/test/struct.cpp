#include<iostream>
#include<string>

using namespace std;

struct test{
	string name;
	int age;
	
	void setName(string _name);
	void setAge(int _age);
	void printName();
	void printAge();
	
};

int main(){
	test*tes = new test;
	
	tes->setName("hi");
	tes->setAge(50);
	
	tes->printName();
	tes->printAge();
	return 0;
}

void test::setName(string _name){
	this->name = _name;
}

void test::printAge(){
	cout<<age<<endl;
}

void test::setAge(int _age){
	age = _age;
}

void test::printName(){
	cout<<name<<endl;
}
