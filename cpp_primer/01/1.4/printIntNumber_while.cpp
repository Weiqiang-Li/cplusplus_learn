#include<iostream>
int main(){
	int start,end;
	std::cout << "Enter start and end of number:" << std::endl;
	std::cin >> start >> end;
	while ( start <= end){
		std::cout << start << " ";
		++start;
	}
	std::cout << std::endl;
	return 0;
}

