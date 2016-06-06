#include <iostream>
using namespace std;
class BankAccount
{
public:
	bool withdraw(float sum);
	void deposit(float sum);

private:
	float currentBalance = 0;
};

bool BankAccount::withdraw(float sum)
{
	if (currentBalance >= sum)
	{
		currentBalance -= sum;
		return true;
	}
	return false;
}

void BankAccount::deposit(float sum)
{
	currentBalance += sum;
}

int main()
{
	BankAccount MyBankAccount;
	MyBankAccount.deposit(10);

	// PayPal requests $7
	float requestedMoney = 7;
	if (MyBankAccount.withdraw(requestedMoney))
	{
		cout << "You have payed " << requestedMoney << " to XinXanChu!\n";
	}
	else
	{
		cout << "Unable to withdraw " << requestedMoney << ". You have not been charged\n";
	}

	system("pause");
	return 0;
}