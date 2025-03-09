#include <iostream>
#include <string>

int main()
{
	std::string text;
	std::getline(std::cin, text);

	bool res = true;

	for (int i = 0; i < text.size() / 2; i++) {
		if (text[i] != text[text.size() - i - 1]) {
			res = false;
			break;
		}
	}
	std::cout << "This string is " << (res ? "" : "not ") << "a palindrome.";
}