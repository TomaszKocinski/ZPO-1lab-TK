#ifndef list_h
#define list_h
#include "element.h"
#include <iostream>
using namespace std;
template<typename T>
class list{
public:
	element<T>* head;
	list(){
		head=NULL;
	}
	~list(){
		delete head;
	}
	void insert(T arg){
		element<T> * newone=new element<T>;
		element<T> * current=head;
		newone->space=arg;
		bool check=false;
		if(head==NULL){
			head=newone;
		}
		else{
			if(newone->space==current->space){
				delete newone;
				check=true;
			}
			while(current->next!=NULL){
				if(check==false && newone->space==current->space) {
					delete newone;
					check=true;
				}
				current=current->next;
			}
			if(check==false) current->next=newone;
		}
	}
	void remove(T arg){
		element<T> * current=head;
		if(current!=NULL && arg==current->space){
			head=head->next;
			current->next=NULL;
			delete current;
		}
		else if(current!=NULL){
			while(current->next!=NULL && arg!=current->next->space){
				current=current->next;
			}

			if(current->next!=NULL && arg==current->next->space && current->next!=NULL){
				element<T> * todele=current->next;
				current->next=current->next->next;
				todele->next=NULL;
				delete todele;
			}
			else if(current->next!=NULL && arg==current->next->space && current->next==NULL){
				element<T> * todele=current->next;
				current->next=NULL;
				todele->next=NULL;
				delete todele;
			}
		}
	}
	void show(){
		element<T> *current=head;
		while(current!=NULL){
			cout<<current->space<<' ';
			current=current->next;
		}
		cout<<'\n';
	}
};
template<typename T>
ostream&operator<<(ostream & out,list<T>* arg){
	element<T>* current=arg->head; 
		while(current!=NULL){
			out<<current->space<<' ';
			current=current->next;
		}
		out<<'\n';
		return out;
}
#endif
