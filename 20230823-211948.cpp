#include<iostream>
using namespace std;

class par
	{
    private:
    	int modelno;
        int partno;
        float cost;
    
    
    public:
    	void setpar(int mn, int pn, float c)
        	{
            modelno = mn;
            partno = pn;
            cost = c;
            }
            
        void showpar()
        	{
            cout << "Model " << modelno;
            cout << ", part " << partno;
            cout << ", costs $" << cost << endl;
            }    
    };        
int main()
{
    par part1;
    
    part1.setpar(555,679,9.9F);
    part1.showpar();
    return 0;
}