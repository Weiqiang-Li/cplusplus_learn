#include<iostream>
int main(){
	int start,end;
	std::cout << "Enter two number:" << std::endl;
	std::cin >> start >> end;
	if ( start > end ){
		int tmp;
		tmp = start;
		start = end;
		end = tmp;
	}
	for ( ; start <= end; ++start){
		std::cout << start << " ";
	}
	std::cout<< std::endl;
	return 0;
}
