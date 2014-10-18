#ifndef zespolone_h
#define zespolone_h
#include <iostream>
using namespace std;
class zesp{
public:
	int rz;
	int uro;
	zesp(){ rz=0; uro=0;}
	zesp(int a, int b){ rz=a;uro=b;}
	bool operator==(const zesp &arg);
	bool operator!=(const zesp &arg);
	void operator=(const zesp &arg);
	friend ostream& operator<<(ostream& out,zesp& arg);
	friend istream& operator>>(istream& out,zesp& arg);
};
#endif
