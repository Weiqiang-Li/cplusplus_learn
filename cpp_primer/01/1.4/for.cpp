#include<iostream>
int main(){
	int sum = 0;
	// 循环头中初始化语句只执行一次
	// 先执行循环体，再自行循环头中的表达式
	for (int val = 1; val <= 10; ++val){
		sum += val;
	}
	std::cout << "Sum of 1 to 10 inclusive is :" << sum << std::endl;
	return 0;
}
