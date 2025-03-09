#include <iostream>
#include <string>

void Task_2a()
{
	std::string stroka;
	std::getline(std::cin, stroka);
	std::string glas = ("aeiouAEIOU");

	int count = 0;


	for (int i = 0; i < stroka.length(); i++)
	{
		if (glas.find(stroka[i]) != std::string::npos)
		{
			count += 1;
		}
	}

	std::cout << count;
}

int main()
{
	Task_2a();
}
