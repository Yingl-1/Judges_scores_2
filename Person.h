#pragma once
#include<string>
#include<iostream>


class Person
{
public:
	Person(std::string name, int many=0);
	~Person();
	std::string get_name()const;
	int get_many()const;
	void set_many(int many);

private:
	std::string name;
	int many;

};

