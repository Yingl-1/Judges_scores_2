#include "Person.h"
Person::Person(std::string name,int many) {
	this->name = name;
	this->many = many;
}
Person::~Person() {

}
std::string Person::get_name()const {
	return this->name;
}
int Person::get_many()const {
	return this->many;
}
void Person::set_many(int many) {

	this->many = many;

}