#include <iostream>
#include <vector>

using namespace std;

double getAverage (const vector<int>& studentIDs){
	double sum=0;
	for (int i=0; i<studentIDs.size(); i++ ) {
	    sum += studentIDs[i]; // Sum all IDs using indexed loop
}
	return sum/studentIDs.size();  // Return average
}

int getHighest (const vector<int>& studentIDs){
	int highest = studentIDs[0];
	for (int id:  studentIDs){   // Compare all IDs using range-based loop
	    highest = max(highest, id);  // Update highest value
}
	return highest;
}

int main(){
	vector<int> studentIDs;  // Declare vector
	studentIDs = {127,111,103,204,106,305,102,108,119,123};
	cout<< "Students IDs: "<<endl;   // Printing all student IDs
	for (size_t i=0; i<studentIDs.size(); i++){
		cout <<studentIDs[i] <<endl;
	}
	cout<< "Average: "<<getAverage(studentIDs)<<endl<< "Highest: "<<getHighest(studentIDs)<<endl;
	return 0;
}




/*This code efficiently manages student ID data using vectors.
I implemented functions to calculate the average and highest ID, 
practicing key concepts like vector operations, 
function parameters (const vector<int>& for efficiency), 
and different loop structures.The range-based loop in getHighest 
and indexed loop in getAverage demonstrate flexibility in iteration methods.*/