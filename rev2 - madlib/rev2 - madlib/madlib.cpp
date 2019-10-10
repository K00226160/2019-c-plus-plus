// Mad-Lib
// Creates a story based on user input

#include <iostream>
#include <string>

using namespace std;

string askText(string* const prompt);
int askNumber(string prompt);
 
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main()
{
	cout << "Welcome to Mad Lib.\n\n";
	cout << "Answer the following questions to help create a new story.\n";

	string Prompt = "Please enter a name: ";
	string name = askText(&Prompt);

    Prompt = "Please enter a plural noun: ";
    string noun = askText(&Prompt);

	int number = askNumber("Please enter a number: ");
	

    Prompt = "Please enter a body part: ";
    string bodyPart = askText(&Prompt);

	Prompt = "Please enter a verb: " ;
    string verb = askText(&Prompt);



	tellStory(name, noun, number, bodyPart, verb);

	return 0;
}

string askText(string* prompt)
{
	string text;
	cout << *prompt;
	cin >> text;
	return text;
}

int askNumber(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
	cout << "\nHere's your story:\n";
	cout << "The famous explorer ";
	cout << name;
	cout << " had nearly given up a life-long quest to find\n";
	cout << "The Lost City of ";
	cout << noun;
	cout << " when one day, the ";
	cout << noun;
	cout << " found the explorer.\n";
	cout << "Surrounded by ";
	cout << number;
	cout << " " << noun;
	cout << ", a tear came to ";
	cout << name << "'s ";
	cout << bodyPart << ".\n";
	cout << "After all this time, the quest was finally over. ";
	cout << "And then, the ";
	cout << noun << "\n";
	cout << "promptly devoured ";
	cout << name << ". ";
	cout << "The moral of the story? Be careful what you ";
	cout << verb;
	cout << " for.";
}
