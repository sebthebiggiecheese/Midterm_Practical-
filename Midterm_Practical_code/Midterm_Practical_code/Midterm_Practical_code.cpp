// Midterm_Practical_code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

int ReadAnswer();

int main()
{
	std::cout << "How Old Would You Say You Are?\n";
	std::cout << "A for Child\n" << "B for Youth\n" << "C for Adult\n" << "D for Senior\n" << "0 To Exit This Oasis\n";
	switch (ReadAnswer())
	{
	case 1:
		std::cout << "Ah so a Child\n";
		system("pause");
		break;
	case 2:
		std::cout << "Ah so a Young Adult\n";
		system("pause");
		break;
	case 3:
		std::cout << "Ah so a Adult Close to Elder\n";
		system("pause");
		break;
	case 4:
		std::cout << "Ah so an Elder\n";
		system("pause");
		break;
	case 5:
		break;
	}

}

int ReadAnswer()
{
	
	 char input;
	int num;
	while (true)
	{
		std::cin >> input;
		
		num = input;
		if (num == 65|| num == 97)
		{
			return 1;
		}
	
		if (num == 66|| num == 98)
		{
			return 2;
		}
		
		if (num == 67|| num == 99)
		{
			return 3;
		}
		
		if (num == 68|| num == 100)
		{
			return 4;
		}
		if (num == 48)
		{
			return 5;
		}
		
		std::cout << "Wrong Input, Please enter a correct value. " << std::endl;
	}
	
}