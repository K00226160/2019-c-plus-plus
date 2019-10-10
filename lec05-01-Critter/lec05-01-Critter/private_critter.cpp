//Private Critter
//Demonstrates setting member access levels

#include <iostream>

using namespace std;

class Critter
{
public:            // begin public section
    Critter(int hunger = 0, int happiness = 0);
    int GetHunger() const; 
	int GetHappiness() const;
    void SetHunger(int hunger);
	void SetHappiness(int happiness);
    
private:           // begin private section
    int m_Hunger;
	int m_Happiness;
};

Critter::Critter(int hunger, int happiness): 
    m_Hunger(hunger),
	m_Happiness(happiness)
{	
    cout << "A new critter has been born!" << endl;
}

int Critter::GetHunger() const
{
    return m_Hunger;
}

int Critter::GetHappiness() const
{
	return m_Happiness;
}

void Critter::SetHunger(int hunger)
{
    if (hunger < 0)
	{
        cout << "You can't set a critter's hunger to a negative number.\n\n";
	}
    else
	{
        m_Hunger = hunger;
	}
}

void Critter::SetHappiness(int happiness)
{
	if (happiness < 0)
	{
		cout << "You can't set a critter's happiness to a negative number.\n\n";
	}
	else
	{
		m_Happiness = happiness;
	}
}
int main()
{
    Critter crit(5,20);  
    //cout << crit.m_Hunger; -- illegal, m_Hunger is private!
    cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";
	cout << "Calling GetHappiness(): " << crit.GetHappiness() << "\n\n";
   
    cout << "Calling SetHunger() with -1.\n";
    crit.SetHunger(-1);
	cout << "Calling SetHappiness() with -1.\n";
	crit.SetHappiness(-1);
    
    cout << "Calling SetHunger() with 9.\n";    
    crit.SetHunger(9);
    cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";

	cout << "Calling SetHappiness() with 33.\n";
	crit.SetHappiness(33);
	cout << "Calling GetHunger(): " << crit.GetHappiness() << "\n\n";
    
    return 0;
}
