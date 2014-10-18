#include "zespolone.h"
#include <iostream>
using namespace std;
bool zesp::operator==(const zesp &arg){
	if(arg.rz==rz && arg.uro==uro) return true;
	return false;
}
bool zesp::operator!=(const zesp &arg){
	if(arg.rz==rz && arg.uro==uro) return false;
	return true;
}
void zesp::operator=(const zesp &arg){
	rz=arg.rz;
	uro=arg.uro;
}
ostream& operator<<(ostream& out,zesp& arg){
	return out<<arg.rz<<'+'<<arg.uro<<"i";
}
istream& operator>>(istream& in,zesp& arg){
	return in>>arg.rz>>arg.uro;
}
