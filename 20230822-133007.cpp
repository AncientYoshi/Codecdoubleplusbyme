#include<iostream>
using namespace std;
#include <conio.h>

enum itsaword { No, Yes };

int main()
{
    itsaword isword = No;
    char ch = 'a';
    int wordcount = 0;
    
    cout << "Enter a phrase:\n";
    do {
    	ch = getche();
    	if(ch==' ' || ch=='\r')
    		{
        	if( isword == Yes )
        		{
            	wordcount++;
            	isword = No;
            	}
        	}
    	else
        	if( isword == No )
        		isword = Yes;
        
    	} while( ch != '\r');
    cout << "\n---Word Count is " << wordcount  << "---\n";
    return 0;
}