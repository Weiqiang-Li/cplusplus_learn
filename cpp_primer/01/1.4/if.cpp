#include<iostream>
/*
 * 对输入的连续的数字进行统计
 */ 
int main(){
	int currVal = 0,val = 0;
	// 读取第一个数
	if (std::cin >> currVal){
		int cnt = 1;
		while(std::cin >> val){
			if (val == currVal){
				++ cnt;
			}
			else{
				// 数字不同
				std::cout << currVal << " ocours "<< cnt << " times."<<std::endl;
				// 更新新的currVal，同时更新计数值。
				currVal = val;
				cnt = 1;
			}
		}
		// 最后这个数字是由于输入了文件结束符或者无效输入导致的退出
		// 需要单独输出
		std::cout << currVal << " ocours "<< cnt << " times."<<std::endl;
	}
	return 0;
}

