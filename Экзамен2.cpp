#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	string m_name;
	int m_age;

public:
	Human(string name, int age)
		: m_name(name), m_age(age)
	{
	}

	string getName() { return m_name; }
	int getAge() { return m_age; }
};

class Employee
{
private:
	string m_employer;
	double m_wage;

public:
	Employee(string employer, double wage)
		: m_employer(employer), m_wage(wage)
	{
	}

	string getEmployer() { return m_employer; }
	double getWage() { return m_wage; }
};

// Класс Teacher наследует свойства классов Human и Employee
class Teacher : public Human, public Employee
{
private:
	int m_teachesGrade;

public:
	Teacher(string name, int age, string employer, double wage, int teachesGrade)
		: Human(name, age), Employee(employer, wage), m_teachesGrade(teachesGrade)
	{
	}
};