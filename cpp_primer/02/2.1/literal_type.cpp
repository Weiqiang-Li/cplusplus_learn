#include<iostream>
#include<typeinfo>
int main(){
	//默认字面值类型
	// 整数
	std::cout << 20 <<" : "<< typeid(20).name() << std::endl;
	std::cout << 020 << " : " << typeid(020).name() << std::endl;
	std::cout << 07777777777777777777 << " : " << typeid(020).name() << std::endl;
	std::cout << 0x20 << " : " << typeid(0x20).name() << std::endl;
	// 浮点数 	
	std::cout << 3.14 << " : " << typeid(3.14).name() << std::endl; 
	// 字符
	std::cout << 'a' << " : " << typeid('a').name() << std::endl;
	// 字符串
	std::cout << "string" << " : " << typeid("string").name() << std::endl;
	std::cout << "1234"
		     "4567"<< std::endl;
	// 布尔型
	std::cout << true << " : " << typeid(true).name() << std::endl;
	// 指针类型
	std::cout << "nullptr" << " : " << typeid(nullptr).name() << std::endl;

	//指定类型
	// 整数
	std::cout << 20U <<" : "<< typeid(20U).name() << std::endl;
	std::cout << 20L <<" : "<< typeid(20L).name() << std::endl;
	std::cout << 20UL <<" : "<< typeid(20UL).name() << std::endl;
	std::cout << 20LL <<" : "<< typeid(20LL).name() << std::endl;
	std::cout << 20ULL <<" : "<< typeid(20ULL).name() << std::endl;
	// 浮点数 	
	std::cout << 3.14F << " : " << typeid(3.14F).name() << std::endl; 
	std::cout << 3.14L << " : " << typeid(3.14L).name() << std::endl; 
	// 字符
        std::cout << u'a' << " : " << typeid(u'a').name() << std::endl;
	std::cout << U'a' << " : " << typeid(U'a').name() << std::endl;
	std::cout << L'a' << " : " << typeid(L'a').name() << std::endl;
	// 字符串
        std::cout << u"string" << " : " << typeid(u"string").name() << std::endl;	
        std::cout << U"string" << " : " << typeid(U"string").name() << std::endl;	
        std::cout << L"string" << " : " << typeid(L"string").name() << std::endl;
        std::cout << u8"string" << " : " << typeid(u8"string").name() << std::endl;

	return 0;
}
