#include <iostream>
#include <string>

int main()
{
	std::string stroka;
	std::getline(std::cin, stroka);
	std::string glas = ("aeiou");

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