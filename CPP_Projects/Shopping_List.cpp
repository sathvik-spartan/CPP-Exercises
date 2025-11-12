// Shopping List by using a vector

#include<iostream>
#include<vector>
#include<string>

int main(){
    std::vector<std::string> shoppingList;
    std::string item;

    std::cout << "Enter items for your shopping list (type done to exit): " << std::endl;
    getline(std::cin, item);

    while(item != "done"){
        shoppingList.push_back(item);

        std::cout << "Enter another item or type done to quit: " << std::endl;
        getline(std::cin, item);
    }

    std::cout << "\nYour shopping list: " << std::endl;
    for(std::string listItem : shoppingList){
        std::cout << "- " << listItem << std::endl;
    }
    
    return 0;
}
