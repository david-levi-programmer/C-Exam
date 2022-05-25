#include <iostream>
#include <algorithm>

std::string text;

void Insert()
{
	std::string more;
	std::cout << "Type in what you want to add.\n";
	std::cout << "It will be inserted into the end of the word:";
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
	std::cout << "Here you go:" << std::endl;
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
		std::cout << "It's done. Bye, then.";
		break;
	case 2:
		std::cout << "Alright then...?" << std::endl;
		break;
	default:
		std::cout << "Invalid option." << std::endl;
		break;
	}
}

void Search()
{
	std::string look;
	std::cout << "Type in what you're looking for:";
	std::cin >> look;
	size_t index = text.find(look);

	if (text.find(look) != std::string::npos)
	{
		std::cout << "It's in position "<< index << std::endl;
	}

	else if (text.find(look) == std::string::npos)
	{
		std::cout << "Couldn't find it, sorry." << std::endl;
	}
}

void Upper()
{
	std::cout << "SURE THING, DUDE\n";
	std::cout << "OK, HOW'S IT LOOK?" << std::endl;
	std::transform(text.begin(), text.end(), text.begin(), toupper);
}

void Lower()
{
	std::cout << "yeah, no problem\n";
	std::cout << "here:" << std::endl;
	std::transform(text.begin(), text.end(), text.begin(), tolower);
}

void Size()
{
	size_t wordCount = text.size();
	std::cout << "Your word is " << wordCount << " letters long." << std::endl;
}

int main()
{
    int choice;
    
    std::cout << "Type in a word. Just one though:" << std::endl;
    std::cin >> text;

    std::cout << "Now, what would you like to do with that word?" << std::endl;
    std::cout << "1: Add text\n";
    std::cout << "2: Remove text\n";
    std::cout << "3: Delete all text\n";
    std::cout << "4: Search for text\n";
	std::cout << "5: MAKE IT ALL CAPS\n";
	std::cout << "6: make it all lowercase\n";
	std::cout << "7: Tell me how long it is\n";
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
	case 5:
		Upper();
		break;
	case 6:
		Lower();
		break;
	case 7:
		Size();
		break;
    default:
		std::cout << "Invalid option." << std::endl;
        break;
    }

    std::cout << text << std::endl;
    system("PAUSE");
}