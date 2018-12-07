#include<iostream>
#include<string>
int x;
void func();
int main(){
	std::cout << x << std::endl;

	int a;
	std::cout << a << std::endl;

	func();
	
	std::string str;
	std::cout << str << std::endl;
	return 0;
}

void func(){
	int b;
	std::cout << b << std::endl;
}
