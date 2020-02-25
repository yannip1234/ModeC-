#include "mode.h"
#include <iostream>
using namespace std;
//IMPLEMENT YOUR FUNCTION HERE

void findModes(int input[], int size, int& frequency, int result[], int & result_count){
	
	int count[10] = {0};
	
	for(int i = 0; i < size; i++){
		switch(input[i]){
			case 0:
				count[0]++;
				break;
			case 1:
				count[1]++;
				break;
			case 2:
				count[2]++;
				break;
			case 3:
				count[3]++;
				break;
			case 4:
				count[4]++;
				break;
			case 5:
				count[5]++;
				break;
			case 6:
				count[6]++;
				break;
			case 7:
				count[7]++;
				break;
			case 8:
				count[8]++;
				break;
			case 9:
				count[9]++;
				break;
			}
		}
	int freq = 0;

		
	for(int i = 0; i < 10; i++){
//		cout << count[i] << endl;
		if(count[i] >= freq){
			freq = count[i];
		}
	}
	
//	cout << "Counter: " << counter << endl;
//	cout << freq << endl;
	frequency = freq;
	
//	cout << counter << endl;
	int indexCount = 0;
	
	for(int i = 0; i <10; i++){
		if(count[i] == freq){
			result[indexCount] = i;
			indexCount++;
		}
	}
	result_count = indexCount;
}
