#include <iostream>
#include "TextString.h"

TextString m_text;

int main()
{
    int choice;
    std::string word;
    
    std::cout << "Type in a word:" << std::endl;
    std::cin >> word;

    std::cout << "What would you like to do?" << std::endl;
    std::cout << "1: Add text\n";
    std::cout << "2: Remove text\n";
    std::cout << "3: Clear all text\n";
    std::cout << "4: Search for text\n";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        m_text.Insert();
        break;
    case 2:
        m_text.Remove();
        break;
    case 3:
        m_text.Clear();
        break;
    case 4:
        m_text.Search();
        break;
    default:
        std::cout << "Try again";
        break;
    }
    std::cout << word << std::endl;
    system("PAUSE");
}