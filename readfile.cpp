#include "readfile.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
//IMPLEMENT YOUR FUNCTION HERE
void readFiletoArray(string filename, int* data){
	string number;
	ifstream file;

	file.open(filename);

	if(file.is_open()){
		int l = 0;
		while(getline(file, number)){
			data[l] = stoi(number);
			l++;
		}
		file.close();
	} else {
		cout << "Can't open file." << endl;
	} 

}

