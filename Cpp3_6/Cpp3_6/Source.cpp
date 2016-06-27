#include <iostream>

class Boss
{
	float salary;
public:
	float managerSalary;
	float workerSalary;

};

class Manager : private Boss
{
	float salary;
public:
	float workerSalary;
};

class Worker : private Manager
{
	float salary;

};