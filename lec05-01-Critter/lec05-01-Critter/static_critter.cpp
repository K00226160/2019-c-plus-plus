//Static Critter
//Demonstrates static member variables and functions


int main()
{
    cout << "The total number of critters is: ";
    cout << Critter::s_Total << "\n\n";
     
    Critter crit1, crit2, crit3, crit4(22), crit5(37) ,crit6(34), crit7(7),crit8(6);
      
    cout << "\nThe total number of critters is: ";
    cout << Critter::GetTotal() << "\n";
    
    return 0;
}
