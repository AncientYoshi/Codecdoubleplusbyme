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
        Distance add_distance(Distance);    
    };
    
Distance Distance :: add_distance(Distance d2)
	{
    Distance temp;
    temp.inches = inches + d2.inches;
    if(temp.inches >= 12.0)
    	{
        temp.inches -= 12.0;
        temp.feet=1;
        }
    temp.feet = feet + d2.feet;
    return temp;    
    }
    
    

int main()
{
	Distance di1,di3;
    Distance di2(11,5.25);
    
    di1.get_Distance();
    di3 = di1.add_distance(di2);
    
    
    cout << "\nd1=", di1.show_Distance();
    cout << "\nd2=", di2.show_Distance();
    cout << "\nd3=", di3.show_Distance();
    cout << endl;
    return 0;
}