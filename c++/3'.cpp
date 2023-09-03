#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char ch;
	unsigned long total = 0; //this holds the number
	cout << "\nEnter a number: ";
	while( (ch=getche()) != 'q' )	//quit on Enter
		total = total*10 + ch-'0'; //add digit to total*10
	cout << "\nNumber is: " << total << endl;
	return 0;
}