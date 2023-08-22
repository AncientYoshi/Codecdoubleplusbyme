#include<iostream>
using namespace std;
void repchar(char,int);
int main()
{
    char chin;
    int nin;
    cout << "Enter a character: " << endl;
    cin >> chin;
    cout << "Enter number of times for repeat it: " << endl;
    cin >> nin;
    repchar(chin,nin);
    return 0;
}

void repchar(char ch, int n)
	{
    for(int j=0; j<n; j++)
    	cout << ch;
    cout <<  endl;    
    }