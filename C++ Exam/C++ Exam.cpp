#include <iostream>

std::string text;

void Insert()
{
	std::string more;
	std::cout << "Type in what you want to add:";
	std::cin >> more;
	text += more;
}

void Remove()
{
	std::string less;
	std::cout << "Type in what you want to remove:";
	std::cin >> less;
	size_t look = text.find(less);
	text.erase(look);
}

void Clear()
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

void Search()
{
	std::string look;
	std::cout << "Type in what you're looking for:";
	std::cin >> look;
	size_t index = text.find(look);
	std::cout << index << std::endl;
	if (text.find(look) == std::string::npos)
	{
		std::cout << "Couldn't find it";
	}
}


int main()
{
    int choice;
    
    std::cout << "Type in a word:" << std::endl;
    std::cin >> text;

    std::cout << "What would you like to do?" << std::endl;
    std::cout << "1: Add text\n";
    std::cout << "2: Remove text\n";
    std::cout << "3: Clear all text\n";
    std::cout << "4: Search for text\n";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        Insert();
        break;
    case 2:
        Remove();
        break;
    case 3:
        Clear();
        break;
    case 4:
        Search();
        break;
    default:
		std::cout << "Invalid option." << std::endl;
        break;
    }
    std::cout << text << std::endl;
    system("PAUSE");
}
