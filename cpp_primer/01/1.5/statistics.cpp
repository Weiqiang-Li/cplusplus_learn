#include<iostream>
#include"Sales_item.h"
// 输入一组销售记录
// 销售记录都是聚合的
int main(){
	Sales_item total;
	if (std::cin >> total){
		Sales_item trans;
		while(std::cin >> trans){
			if (total.isbn() == trans.isbn()){
				total += trans;
			}else{
				// 处理到不同isbn号的图书
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl; //打印最后一条
	}else{
		std::cerr << "No data" << std::endl;
		return -1;
	}
	return 0;
}
