#include <iostream>
#include <vector>

using namespace std;

double getAverage (const vector<int>& studentIDs){
	double sum=0;
	for (int i=0; i<studentIDs.size(); i++ ) {
	    sum += studentIDs[i];
}
	return sum/studentIDs.size();
}

int getHighest (const vector<int>& studentIDs){
	int highest = studentIDs[0];
	for (int id:  studentIDs){
	    highest = max(highest, id); 
}
	return highest;
}

int main(){
	vector<int> studentIDs;
	studentIDs = {127,111,103,204,106,305,102,108,119,123};
	cout<< "Students IDs: "<<endl;
	for (size_t i=0; i<studentIDs.size(); i++){
		cout <<studentIDs[i] <<endl;
	}
	cout<< "Average: "<<getAverage(studentIDs)<<endl<< "Highest: "<<getHighest(studentIDs)<<endl;
	return 0;
}




/*I learned how vectors provide flexible data storage that arrays cannot match, 
especially for dynamic data like student IDs that might change. 
I discovered why proper variable initialization is crucial - 
without initializing highest = studentIDs[0], the function would produce garbage results. 
I also saw how const references in function parameters prevent
unnecessary data copying while maintaining safety. 
The project showed me different ways to iterate through data, 
from traditional indexing to modern range-based loops, 
each with their own advantages for readability and performance.*/