#include "TextString.h"
#include <iostream>

void TextString::Insert()
{
	std::string more;
	std::cout << "Type in what you want to add:";
	std::cin >> more;
	text += more;
}

void TextString::Remove()
{
	std::string less;
	std::cout << "Type in what you want to remove:";
	std::cin >> less;
	size_t look = text.find(less);
	text.erase(look);
}

void TextString::Clear()
{
	int choice;
	std::cout << "Are you sure?\n";
	std::cout << "1: Yes\n";
	std::cout << "2: No\n";
	std::cin >> choice;
	switch (choice)
	{
	case 1:
		text.erase();
		std::cout << "It's done.";
		break;
	case 2:
		break;
	default:
		break;
	}
}

void TextString::Search()
{
	std::string look;
	std::cout << "Type in what you're looking for:";
	std::cin >> look;
	size_t index = text.find(look);
	if (text.find(look) == std::string::npos)
	{
		std::cout << "Couldn't find it";
	}
}