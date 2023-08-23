#include<iostream>
using namespace std;

class counter
	{
    private:
    	unsigned int count;
    public:
    	counter() : count(0)
        	{ /*empty body*/ }
        void inc_count() 
        	{ count++ ;}
        int get_count()
        	{ return count;}    
        
    };

int main()
{
	counter c,d;
    
    cout << "\nc="<< c.get_count();
    cout << "\nd=" << d.get_count();
    
    c.inc_count();
    d.inc_count();
    d.inc_count();
    
    cout << "\nc=" << c.get_count();
    cout << "\nd=" << d.get_count();
    cout << endl;
    return 0;
}