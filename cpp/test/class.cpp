#include<iostream>

using namespace std;

class test{
	private:
		int data;
		test* next;
	public:
		test(int _tmp){
			data = _tmp;
			next = NULL;
		};
		~test(){
			printf("%d\n", data);
			if(next!=NULL){
				delete next;
			}
			
			
		};
		int push(int _tmp){
			if(next!=NULL){
				next->push(_tmp);
			}else{
				next = new test(_tmp);
			}
		};
		int show(){
			printf("%d\n", data);
			
			if(next!=NULL){
				next->show();
			}
		}
		
};

int main(){
	test*start = new test(500);
	start->push(12);
	start->push(1090);
	start->push(99);
	start->show();
	
	delete start;
}

