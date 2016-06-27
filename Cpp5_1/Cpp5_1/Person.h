#include <iostream>

#ifndef __PERSON_H
#define __PERSON_H
namespace MammalNamespace
{
	namespace variableContainer
	{
		int integerVariable;
		bool boolVariable;
		const char constChar;
	}
	namespace PersonNamespace {


		enum gender_t
		{
			male,
			female,
			shemale,
			undefined
		};

		class Person
		{
			std::string pin;
			int age;
		public:
			Person() {};
			inline Person(std::string newName, gender_t newGender) {
				name = newName;
				gender = newGender;
			}
			std::string name;
			float height;
			gender_t gender;

			void setAge(int newAge);
			void setPin(std::string newPin);
		};
	}
}

#endif