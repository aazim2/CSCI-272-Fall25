//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person{
//    public:
//	string name{ "John Doe"};
//	int age {30};
//    char gender {'M'};
//	
//    public:
//    void introduce(){
//     	cout << "I'm "<< name<< " Age: "<< age;
//     	if (gender== 'M'){
//     		cout << "I Identify asa a male "<< endl;
//     		
//		}  else if (gender=='F'){
//		 	    cout <<"I identify as Female "<<endl;
//		 	
//		}  else{
//		    	cout <<"Gender not specified. ";
//		}
//	};	
//
//};



#include <iostream>
#include <string>
//#include <cctype>
using namespace std;

class Person{
private:
	string name;
	int age;
	char gender;
public:
	void setName(string n){
		name=n;
	
	}
	void setAge(int a){
		age=a;
	}
	void setGender(char g){
		gender=toupper(g);
	}
	void introduce(){
		cout <<"I'm "<<name<<endl<<"Age: "<<age<<endl;
		if (gender=='M'){
			cout<<"I identify as male "<<endl;
		}else if (gender=='F'){
			cout<<"I identify as Female "<<endl;
			
		}else{
			cout <<"Gender not specified. "<<endl;
		}
	}
};