#include<iostream>
using namespace std;

class smallobj
	{
    private:
    	int somedata;
    public:
    	void setdata(int d)
        	{ somedata = d; }   
        void showdata()
        	{ cout << "Data is " << somedata << endl; }     
    };

int main()
{
    smallobj t1, t2;
    
    t1.setdata(177) ;
    t2.setdata(234) ;
    
    t1.showdata();
    t2.showdata();
    return 0;
}