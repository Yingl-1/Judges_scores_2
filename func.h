#pragma once
#include"Person.h"
#include<random>
#include<vector>


std::vector<int> gset_many();
std::vector<int>get_company();

class compare
{
public:
	
	bool operator()(const std::string &str1 , const std::string &str2) {

		return str1 < str2;
	}

};


