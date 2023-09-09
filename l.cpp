#include<iostream>
using namespace std;

void print(int start[], int limit)
{
    for(int i = 0; i < limit; i++)
    {
        cout << start[i] << " " ;
    }
    cout << endl;
}

int main(){
    int limit;
    cout << "How many Number wany To add In Array : " << endl;
    cin >> limit;
    int start[limit];

    cout << "Enter " << limit<< " Number for Array" << endl;

    for(int i=0; i<limit; i++)
    {
        cin >> start[i];    

    }
    print(start, limit);

    return 0;

}