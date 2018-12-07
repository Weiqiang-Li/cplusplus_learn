#include<iostream>
// 也是可以的，但是不推荐
int _xyz = 0;
int _;
double Double = 3.14;
int main(){
	// 下列变量均未初始化
	// 正确
	int a;
	int a_;
	int a_123;

	// 不推荐
	//int 123;
	int _A =87;
	int __a123 =88 ;
	int a__ = 89;

	// 不正确
	int 123a = 90;

	std::cout << _xyz << std::endl;
	std::cout << _A << std::endl;
	std::cout << __a123 << std::endl;
	std::cout << 123a << std::endl;
	return 0;
}
	
