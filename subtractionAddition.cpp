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
	cin >> letter;
	
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

void addition()
{
	double rep, num;
	double counter = 0;
	double total = 0;
	cout << "Please enter how many numbers you would like to add together:" << endl;
	cin >> rep; // number of number to be added

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


void subtraction()
{
	double rep, num;
	double counter = 0;
	double total = 0;
	cout << "Please enter how many numbers you would like to subtract:" << endl;
	cin >> rep; // number of numbers to be subtracted

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
