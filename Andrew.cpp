#include <iostream>
#include <string>
#include <cctype>

bool palindrome(std::string text){
	bool res = true;
	std::string res_string = "";
	for (int i = 0; i < text.size(); i++){
		if(text[i] != ' '){
			res_string = res_string + char(std::tolower(int(text[i])));
		}
	}
	for (int i = 0; i < res_string.size() / 2; i++) {
		if (res_string[i] != res_string[res_string.size() - i - 1]) {
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
