#include<iostream>
int main(){
	int start,end;
	std::cout << "Enter start and end number:";
	std::cin >> start >> end;
	for (; start <= end; ++start){
		std::cout << start << " ";
	}
	std::cout << std::endl;
}
