#include <iostream>

class Man;

class BankAccount
{
public:
	float balance;
};

class Person
{
public:
	BankAccount bankAccount;
};

class Man :private Person
{
public:
	Man()
	{
		bankAccount.balance = 0;
	};
	friend class Women;
	friend void addMoneyToMansCard(float amount, Man &aMan);
};

class Women:private Person
{
public:
	Women &operator=(Man &aMan)
	{
		bankAccount.balance = aMan.bankAccount.balance;
		aMan.bankAccount.balance = 0;
		return *this;
	}
	void wasteMoney()
	{
		bankAccount.balance = 0;
	}
};

void addMoneyToMansCard(float amount, Man &aMan)
{
	aMan.bankAccount.balance += amount;
}

int main()
{
	Man Gosho = Man(); // Gosho e juniour developer
	addMoneyToMansCard(2000, Gosho);

	Women Penka;
	Penka = Gosho;
	Penka.wasteMoney();

	return 0;

}