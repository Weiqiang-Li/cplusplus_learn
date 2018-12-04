#include <iostream>
int main(){
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */";  
	// std::cout << /* "*/" */; // 原始写法
	std::cout << /* "*/" /* "/*" */;
	return 0;
}
