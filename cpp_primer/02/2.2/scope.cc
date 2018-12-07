#include<iostream>
int reused = 42;
int main(){
	std::cout << reused << std::endl;
	int reused = 0;
	std::cout << reused << std::endl;
	std::cout << ::reused << std::endl;
	return 0;
}
