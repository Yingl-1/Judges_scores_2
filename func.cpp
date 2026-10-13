#include "func.h"
//工资
std::vector<int> gset_many() {

	std::random_device rd;

	std::mt19937 gen(rd());

	std::uniform_int_distribution<int> dist(3000, 10000);//现代随机数写法

	std::vector<int>set_many_vector;

	for (size_t i = 0; i < 10; i++)
	{
		int num = 0;
		num = dist(gen);

		set_many_vector.push_back(num);
	}

	return set_many_vector;

}
//部门
std::vector<int>get_company() {

	std::vector<int>com;

	std::random_device rd;

	std::mt19937 gen(rd());

	std::uniform_int_distribution<int>dist(1,3);

	for (size_t i = 0; i < 10; i++)
	{
		int num = dist(gen);
		com.push_back(num);
	}
	
	return com;

}
