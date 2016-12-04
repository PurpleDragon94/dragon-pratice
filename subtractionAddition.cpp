/*
program should ask user if they want to add or subtract numbers(letter 'A' for addition, 'S' for subtraction). 
user should then be directed to correct function or be asked to put in a letter
to pick which operation to be performed(look at first if else statement).
user theninputs how many numbers they want to add together, and then puts in the differnt numbers they want to add.
program outputs how many numbers were added together and the total.
*/

# include <iostream>
# include <cmath>

using namespace std;

void addition();
void subtraction();

int main()
{
	char letter;
	
	cout << "This program will perform an addition or subtraction operation" << endl
	     << "Please enter the letter a for addition, or s for subtraction:" << endl;
	cin >> letter; // stores the letter user entered 
	
	// if else to determine which dunction to use, or if the user needs to enter another letter
    if (letter == 'a' || 'A')
       addition();
       
    else if(letter == 's' || 'S')
       subtraction();
       
    else
    {
    	cout << "please enter the letter 'a' or 's': " << endl;
    	cin >> letter;
	}
	
	system("pause");
	return 0;
}

// addition function
void addition()
{
	double rep, num;
	double counter = 0;
	double total = 0;
	cout << "Please enter how many numbers you would like to add together:" << endl;
	cin >> rep; // how many numbers to be added
	
        // should repeat until counter equals rep 
	while (counter < rep)
	{
		cout << "please enter a number:" << endl;
		cin >> num;
		total += num;
		
		counter = counter++;
	}
	cout << "You added " << rep << " numbers together." << endl;
	cout << "The total is " << total << " ." << endl;
}

// subtraction function
void subtraction()
{
	double rep, num;
	double counter = 0;
	double total = 0;
	cout << "Please enter how many numbers you would like to subtract:" << endl;
	cin >> rep; // how many numbers to be subtracted

	// should repeat until counter equals rep
	while (counter < rep)
	{
		cout << "please enter a number:" << endl;
		cin >> num;
		total -= num;
		
		counter = counter++;
	}
	
	cout << "you subtracted " << rep << "numbers." << endl;
	cout << "The total is " << total << " ." << endl;
}
