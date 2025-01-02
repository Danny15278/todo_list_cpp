
#include <iostream>
#include <string>
#include <list>

class toDoItem {
private:
    int id;
    std::string description;
    bool completed;

public:
    toDoItem() : id(0), description(""), completed(false) {}
    ~toDoItem() = default;
};


int main()
{
    std::list<toDoItem> toDoItems;
    toDoItems.clear();

    while (1)
    {
        system("cls");
        std::cout << "To-Do List Maker" << "\n" << "\n";

    }
}

