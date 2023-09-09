//2. Write a C++ program to find the second largest element in an array of integers.
#include<iostream>
using namespace std;
void second_largest(int nums[], int arr_size) 
{ int i, first_element, second_element;
 /* There should be atleast two elements */ 
 if (arr_size < 2)
 {
 cout<< " Invalid Input "; 
 return;
 }
 first_element = second_element = 1; 
 for (i = 0; i < arr_size ; i ++)
 {
 if (nums[i] > first_element)
 {
 second_element = first_element; 
 first_element = nums[i];
 }
 else if (nums[i] > second_element && nums[i] != first_element)
 {
 second_element = nums[i];
 }
 }
 if (second_element == 1)
 {
 cout<< "No second largest element";
 }
 else
 {
 cout<< "\nThe second largest element is: " <<second_element;
 }
}
int main()
{
 int limit;
    cout << "How many Number wany To add In Array : " << endl;
    cin >> limit;
    int start[limit];

    cout << "Enter " << limit<< " Number for Array" << endl;

    for(int i=0; i<limit; i++)
    {
        cin >> start[i];    

    }
 cout << "Original array: "; 
 for (int i=0; i < limit; i++) 
 cout << start[i] <<" "; 
 second_largest(start, limit); 
 return 0;
}