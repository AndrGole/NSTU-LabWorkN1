#include <iostream>
#include <string>

bool palindrome(std::string text){
	bool res = true;

	for (int i = 0; i < text.size() / 2; i++) {
		if (text[i] != text[text.size() - i - 1]) {
			res = false;
			break;
		}
	}

	return res;
}

int main()
{
	std::string text;
	std::getline(std::cin, text);

	std::cout << "This string is " << (palindrome(text) ? "" : "not ") << "a palindrome." << std::endl;
}
