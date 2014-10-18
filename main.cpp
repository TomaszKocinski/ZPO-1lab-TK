#include <iostream>
#include <string>
#include "list.h"
#include "element.h"
#include "zespolone.h"
using namespace std;
int main(void){
	list<zesp>* A=new list<zesp>; 
	char cont;
	zesp temp;
	cin>>cont;
	while(cont!='e'){
		if(cont=='i'){
			cin>>temp;
			A->insert(temp);
			cout<<A;
		}
		if(cont=='r'){
			cin>>temp;
			A->remove(temp);
			cout<<A;
		}
		if(cont=='s'){
		}
		cin>>cont;
	}
	delete A;
	return 0;
}
