#include<iostream>
int main(){
	int sum = 0,value;
	// 检测流的状态：
	// 输入文件结束符 ctrl+d
	// 输入无效数据
	while (std::cin >> value){
		sum += value;
	}
	std::cout << "sum is :" << sum << std::endl;
	return 0;
}
