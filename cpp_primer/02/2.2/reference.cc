#include<iostream>
int main(){
	int ival = 1024;
	// 定义一个引用
	int &refval = ival;
	// 获取引用绑定的对象的值	
	std::cout << refval << std::endl;
	// 对引用赋值，就是对起绑定的对象赋值
	refval = 2048;
	std::cout << refval << std::endl;
	// 引用可以用来初始化别的变量
	int val2 = refval;
	std::cout << val2 << std::endl;
	// 引用可以初始化别的引用
	int & refval2 = refval;
	std::cout << refval2 << std::endl;
	
	// 未初始化
	int & uninitialized;
	// 类型不匹配
	double & error_type_refval = refval;
	// 不能引用非常量字面值
	int & lteral_ref = 0;
	return 0;
}

