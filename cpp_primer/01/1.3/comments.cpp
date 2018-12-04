#include <iostream>

// 单行注释

/*
 * 多行注释
 * 注释内容标记，属于风格，不是强制
 * 不允许嵌套
 */

int main(){
	std::cout << "Enter two number:"<< std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2; //行末尾注释
	std::cout << "The sum of " << v1 << " and "<< v2 << " is " << v1+v2 << std::endl;
	std::cout << "The product of " << v1 << " and "<< v2 << " is " << v1*v2 << std::endl;
	return 0;
}
