#include <iostream>

using namespace std;
template <typename T>

T maxNum (T a, T b){
	return(a>b)? a:b;
	
}

int main (){
	int intMax = maxNum (5, 10);
	double doubleMax = maxNum (2.5, 11.6);
	

cout << "Integer Max"<< intMax <<endl;
return 0;
}