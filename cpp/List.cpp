#include<iostream>
#include<string>

using namespace std;

template <typename T>
class Node{
	private:
		T data;
		Node<T>*next;
	public:
		Node(T _data){
			next = NULL;
			data = _data;
		}
		
		~Node(){
			if(next!=NULL){
				delete next;
			}
		}
		
		T getData(){
			return data;
		}
		
		Node*getNext(){
			return next;
		}
		
		void setNext(Node*_next){
			next = _next;
		}
		
		void setData(T _data){
			data = _data;
		}
};

template <typename T>
class List{
	private:
		int size;
		Node<T>*head;
	public:
		List(){
			size = 0;
			head = NULL;
		}
		
		~List(){
			delete head;
		}
		
		void add(T _tmp, int idx){
			if(size<=idx){
				printf("error\n");
				return;
			}
			
			if(idx==0){
				if(head == NULL){
					head = new Node<T>(_tmp);
				}else{
					Node<T>*newHead = new Node<T>(_tmp);
					newHead->setNext(head);
					head = newHead;
				}
			}else{
				Node<T>*tmp = head;
				
				for(int i=0; i<idx; i++){
					tmp = tmp->getNext();
				}
				
				Node<T>*tmpp = new Node<T>(_tmp);
				tmpp->setNext(tmp->getNext());
				tmp->setNext(tmpp);
			}
			
			size++;
			
			return;
		}
		
		void remove(int idx){
			if(size==0){
				printf("don't!\n'");
				return;
			}
			
			if(idx==0){
				Node<T>*tmp = head->getNext();
				head->setNext(NULL);
				delete head;
				head = tmp;
				size--;
				return;
			}
			
			if(size<=idx){
				printf("don't!\n'");
				return;
			}
			
			Node<T>*tmp = head;
			for(int i=0; i<idx-1; i++){
				tmp = tmp->getNext();
			}
			
			Node<T>*tmpp = tmp->getNext()->getNext();
			tmp->getNext()->setNext(NULL);
			delete tmp->getNext();
			tmp->setNext(tmpp);
			size--;
			return;
			
		}
		
		void push_back(T _tmp){
			if(head==NULL){
				head = new Node<T>(_tmp);
			}else{
				Node<T>*tmp = head;
				while(1){
					if(tmp->getNext() == NULL){
						Node<T>*tmpp = new Node<T>(_tmp);
						tmp->setNext(tmpp);
						break;
					}
					
					tmp = tmp->getNext();
				}
			}
			
			size++;
		}
		
		void pop_back(){
			if(size==0){
				printf("don't!\n'");
				return;
			}
			
			if(size==1){
				delete head;
				head = NULL;
				size--;
				return;
			}
			
			Node<T>*tmp = head;
			for(int i=0;i<size-1; i++){
				tmp = tmp->getNext();
			}
			
			delete tmp->getNext();
			tmp->setNext(NULL);
			size--;
		}
		
		T at(int idx){
			if(size==0){
				printf("don't!\n'");
				return 0;
			}
			
			if(idx>=size){
				printf("don't!\n'");
				return 0;
			}
			
			Node<T>*tmp = head;
			
			for(int i=0; i<idx; i++){
				tmp = tmp->getNext();
			}
			
			return tmp->getData();
		}
		
		int len(){
			return size;
		}
};

int main(){
	List<string>*start = new List<string>();
	
	start->push_back("sdsd");
	start->push_back("sdsdsd");
	start->add("5555", 0);
	start->add("9999", 1);
	cout<<start->len()<<endl;
	
	
	for(int i=0; i<start->len(); i++){
		cout<<start->at(i)<<endl;
	}
	
	delete start;
	
	return 0;
}
