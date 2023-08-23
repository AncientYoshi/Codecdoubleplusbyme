#include<iostream>
using namespace std;

class Distance
	{
    private:
    	int feet;
        float inches;
        
    public:
    	Distance() : feet(0) ,  inches (0.0)
        	{	}
        Distance(int ft,float in) : feet(ft),inches(in)
        	{	}
        
        void get_Distance()
        	{
            cout << "\nEnter Feet: " ; cin >> feet;
            cout << "\nEnter inches: "; cin >> inches;
            }
            
        void show_Distance ()   
        	{ cout << feet << "\'-" << inches << "\"";}
    };

int main()
{
	Distance d1(1,6.25);
    Distance d2(d1);
    Distance d3 = d1;
    
    cout << "\nd1=", d1.show_Distance();
    cout << "\nd2=", d2.show_Distance();
    cout << "\nd3=", d3.show_Distance();
    cout << endl;
    return 0;
}