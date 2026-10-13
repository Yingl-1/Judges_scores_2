#include"Person.h"
#include"func.h"
#include<vector>
#include<map>
#include<cstdlib>





int main() {

	//工资
	std::vector<int>many = gset_many();


	//创建员工	
	std::vector<Person>Ps;
	char namechar = 'A';

	for (const auto &many:many)
	{
		Ps.emplace_back(std::string(1,namechar),many);
		namechar++;
	}
	//部门，1=策划，2=美术，3=研发
	std::multimap<int, Person>m_company;

	std::vector<int>v_company = get_company();

	std::vector<int>::iterator pos = v_company.begin();
	std::vector<Person>::iterator ppos = Ps.begin();

	
		for (const auto &person:Ps)
		{
				m_company.insert(std::make_pair(*pos, *ppos));
				pos++;
				ppos++;
		}

	
	//输出
	for (const auto & element:m_company)
	{
		if (element.first==1)
		{
			std::cout << element.second.get_name()<< "属于策划部门，工资是"<<element.second.get_many() << std::endl;
		}
		else if (element.first == 2) {

			std::cout << element.second.get_name() << "属于美术部门，工资是" << element.second.get_many() << std::endl;

		}
		else if (element.first == 3)
		{
			std::cout << element.second.get_name() << "属于研发部门，工资是" << element.second.get_many() << std::endl;
		}

	}





	system("pause");

	return 0;
}