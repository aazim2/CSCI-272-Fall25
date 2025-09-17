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



/*Using const string& in the range-based loop taught me how to efficiently 
access elements without expensive string copying operations. 
The project demonstrated practical use of vector operations 
like push_back(), insert(), and erase() for real-world scenarios where data needs frequent updates. 
I also obeserved how the size() method provides immediate information about the current menu offerings, 
making the code both functional and informative for end-users. */