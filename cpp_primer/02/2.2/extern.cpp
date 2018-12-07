#include<iostream>
#include"extern.h"
extern int i;
extern int b ;
//b = 2;
int main(){
	extern int x;	
	//x  = 2;
	//i = 34;
	std::cout << b << std::endl;
	return 0;
}

