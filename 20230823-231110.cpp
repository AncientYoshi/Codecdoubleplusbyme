#include<iostream>
using namespace std;

class Distance
	{
    private:
    	int feet;
        float inches;
    public:
        Distance() : feet(0), inches(0.0)
        	{	}
            
        Distance(int ft,float in) : feet(ft), inches(in) 
        	{	}
            
        void getdistance()
        	{
            cout << "\nEnter Feet: "; cin >> feet;
            cout << "\nEnter Inches: "; cin >> inches;
            }    
        void showdistance() 
        	{
            cout << feet << "\'-" << inches << "\"-";
            }
        void add_Distance (Distance,Distance)  ;  
    };    
    
void Distance :: add_Distance(Distance d2, Distance d3)    

	{
    inches = d2.inches + d3.inches;
    feet = 0;
    if(inches >= 12.0)
    	{
        inches -= 12.0;
        feet++;
        }
    feet += d2.feet + d3.feet;    
    }

int main()
{
    Distance d,dd;
    Distance d2(11,6.25);
    
    d.getdistance();
    dd.add_Distance(d,d2);
    
    cout << "\nd1=" ; d.showdistance();
    cout << "\nd2=" ; d2.showdistance();
    cout << "\nd3=" ; dd.showdistance();
    cout << endl;
    return 0;
}