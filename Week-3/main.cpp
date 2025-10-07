//#include "Person.h"
//#include <iostream>
//#include<string>
//
//using namespace std;
//
//int main(){
//	Person person1;
//	person1.introduce();
//	return 0;
//}



#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	Person person1;
	string userName;
	int userAge;
	char userGender;
	
	cout<<"Enter name: ";
	getline(cin, userName);
	
	
	cout<<"Enter age: ";
	cin>>userAge;
	
	cout<<"Enter Gender (M/F): ";
	cin>>userGender;
	
	person1.setName(userName);
	person1.setAge(userAge);
	person1.setGender(userGender);
	
	person1.introduce();
	return 0;
}