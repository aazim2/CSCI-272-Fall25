#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	vector<string>Menu = {"Cheese Burger", "Chicken Burger"};
	
	Menu.push_back("Sandwich");
	Menu.push_back("Bagels");
	Menu.push_back("Muffins");
	Menu.push_back("Croissants");
	Menu.push_back("Iced Tea");
	
	Menu.insert (Menu.begin() +1, "Cookies");
	Menu.erase(Menu.begin()+3);
	
	cout << "Cafeteria Menu for Today: " << endl;
    for (const string& Food : Menu) {     //const string&: To avoid unnecessary string copying
    cout <<  Food <<endl;
    }
    
    cout << "Total Items: "<< Menu.size()<<endl;  //Number of Items
    return 0;
}



/*created a dynamic cafeteria menu system using a vector to efficiently manage items.
practiced key operations like adding items with push_back(), 
inserting at specific positions, and removing items with erase(). 
Using a range-based loop with const string& ensured efficient iteration without copying strings. 
This exercise strengthened my understanding of vector manipulation and real-world application in managing dynamic data */