#include<iostream>
#include"Sales_item.h"
// 使用输入重定向 ./addItems.out < ./data/add_item
int main(){
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
	return 0;
}
