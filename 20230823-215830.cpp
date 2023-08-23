#include<iostream>
using namespace std;

class Distance
	{
    private:
    	int feet;
        float inches;
    public:
    	void setdistance(int ft,float in )
        	{feet = ft; inches = in; }
            
        void getdistance()  
        	{
            cout << "\nEnter feet " ; cin >> feet;
            cout << "\nEnter inches "; cin >> inches;
            }  
            
        void showdistance()
        	{
            {cout<< feet << "\'-" << inches << "\"";}
            }    
    
    };

int main()
{
    Distance d,dd;
    
    d.setdistance(11,6.6);
    dd.getdistance();
    
    cout << "\nDistance1 "; d.showdistance();
    cout << "\nDistance2 ", dd.showdistance();
    cout << endl;
    return 0;
}