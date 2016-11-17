# include <iostream>
# include <cmath>
# include <cstdlib>

using namespace std;

int main()
{
	int number, add;

	cout << "This program will perform an addition or subtraction operation" << endl
	     << "Please enter the number 1 for addition, or 2 for subtraction:" << endl;
	cin >> number;

	if (number == 1)
	{
		int num1 , num2;
		cout << "Please enter two numbers to be added together:" << endl;
		cin >> num1;
		cin >> num2;

		add = num1 + num2;

		cout << num1 << " plus " << num2 << " equals " << add << "." << endl;
	}
	else
	{   int num3 , num4 , sub;
	    cout << "Please enter two numbers to be subtracted:" << endl;
	    cin >> num3;
	    cin >> num4;

	    sub = num3 - num4;

	    cout << num3 << " minus " << num4 << " equals " << sub << "." << endl;
     }

   system("pause");
   return 0;
}
