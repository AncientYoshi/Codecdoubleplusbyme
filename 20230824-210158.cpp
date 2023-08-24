#include<iostream>
using namespace std;
enum Suit { clubs, diamonds, hearts, spades};
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
	{
    private:
    	int number;
        Suit suit;
        
    public:
    	card () 
        	{	}   
            
        card(int n, Suit s) : number (n), suit(s)
        	{	}
        void display();
        bool isEqual(card);    
    
    };
    
void card::display()
	{
    if(number >= 2 && number <= 10)
    	cout << number << " of ";
    else 
    	switch(number)
        	{
            case jack: cout << "jack of " ; break;
            case queen: cout << "queen of" ; break;
            case king: cout << "king of"; break;
            case ace: cout << "ace of" ; break;
            }  
    switch(suit)
    	{
        case clubs: cout << "clubs" ; break;
        case diamonds: cout << "diamond " ; break;
        case hearts: cout << "heart "; break;
        case spades: cout << "spade " ; break;
        }     
    }
    
bool card::isEqual(card c2)  
	{
    return ( number==c2.number && suit==c2.suit) ?true:false;
    }  


int main()
{
    card temp, chosen, prize;
    int position ;
    
    card card1(7,clubs);
    cout << "\ncard1 is ";
    card1.display();
    
    card card2(jack, hearts);
    cout << "\nCard2 is ";
    card2.display();
    
    card card3(ace, spades);
    cout << "\nCard3 is " ;
    card3.display();
    
    prize = card3;
    cout << "\nswap card1 and card3 " ;
    temp = card3; card3 = card1; card1= temp;
    
    cout << "\nswap card2 and card3 " ;
    temp = card3; card3 = card2; card2= temp;
    
    cout << "\nswap card1 and card2 " ;
    temp = card2; card2 = card1; card1= temp;
    
    cout << "\nNow, where 1,2,3 is the" ;
    prize.display();
    cout<< "?";
    
    cin >> position;
    
    switch(position)
    	{
        case 1:chosen = card1; break;
        case 2:chosen = card2; break;
        case 3:chosen = card3; break;        
        }
    if (chosen.isEqual(prize)) 
    	cout << "Nice...U win!" ;
    else
    	cout << "sorry sir,u lose" ;  
    cout << "U chose the "  ;
    chosen.display();
    cout  << endl;    
    return 0;
}