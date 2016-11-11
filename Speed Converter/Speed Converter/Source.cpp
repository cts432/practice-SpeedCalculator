#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string	distanceUnit,
convertToX = (" "),
convertToY;
double	travelNum, timeUnit, conversionA, conversionB;

void initialize();
void displayResults();

void main()
{
	char restart = ('y');
	do
	{
		initialize();
		displayResults();
		system("PAUSE");
		cout << "Do you want to run the program again?(Y/N)";
		cin >> restart;
	} while (restart == ('y') || restart==('Y'));
}
void initialize()
{
	cout << "\nWhat unit of measurement did you travel in?"
		<< "\nExample: feet, meters, miles:";
	cin >> distanceUnit;
	cout << "How much " << distanceUnit << " did you travel?";
	cin >> travelNum;
	cout << "\nHow long did you travel in minutes?";
	cin >> timeUnit;
	cout << "\nWhat do you want to convert your distance to?"
		<< "\nExample: feet, meters, miles:";
	cin >> convertToX;
	cout << "\nWhat do you want to convert your travel time to?"
		<< "\nExample: seconds, minutes, hours:";
	cin >> convertToY;

	if (distanceUnit == ("feet") && (convertToX == ("meters")))
	{
		if (convertToY == ("hours"))
		{
			conversionA = ((travelNum / 3.28)*(60 / timeUnit));
		}
		else if (convertToY == ("seconds"))
		{
			conversionA = ((travelNum / 3.28) * (timeUnit * 60));
		}
		else if (convertToY == ("minutes"))
		{
			conversionA = (travelNum / 3.28);
		}
	}
	if (distanceUnit == ("feet") && (convertToX == ("miles")))
	{
		if (convertToY == ("hours"))
		{
			conversionA = ((travelNum / 5280)*(60 / timeUnit));
		}
		else if (convertToY == ("seconds"))
		{
			conversionA = ((travelNum / 5280) * (timeUnit * 60));
		}
		else if (convertToY == ("minutes"))
		{
			conversionA = (travelNum / 3.28);
		}
	}
	if (distanceUnit == ("feet") && (convertToX == ("feet")))
	{
		if (convertToY == ("hours"))
		{
			conversionA = (travelNum*(60 / timeUnit));
		}
		else if (convertToY == ("seconds"))
		{
			conversionA = (travelNum * (timeUnit * 60));
		}
		else if (convertToY == ("minutes"))
		{
			conversionA = travelNum;
		}
	}
	///////////////////////////////////////////////////////////////////////////////////
	if (distanceUnit == ("meters") && (convertToX == ("feet")))
	{
		if (convertToY == ("hours"))
		{
			conversionA = ((travelNum * 3.28)*(60 / timeUnit));
		}
		else if (convertToY == ("seconds"))
		{
			conversionA = ((travelNum * 3.28) * (timeUnit * 60));
		}
		else if (convertToY == ("minutes"))
		{
			conversionA = (travelNum * 3.28);
		}
	}
	if (distanceUnit == ("meters") && (convertToX == ("miles")))
	{
		if (convertToY == ("hours"))
		{
			conversionA = ((travelNum / 1609.344)*(60 / timeUnit));
		}
		else if (convertToY == ("seconds"))
		{
			conversionA = ((travelNum / 1609.344) * (timeUnit * 60));
		}
		else if (convertToY == ("minutes"))
		{
			conversionA = (travelNum / 1609.344);
		}
	}
	if (distanceUnit == ("meters") && (convertToX == ("meters")))
	{
		if (convertToY == ("hours"))
		{
			conversionA = (travelNum*(60 / timeUnit));
		}
		else if (convertToY == ("seconds"))
		{
			conversionA = (travelNum * (timeUnit * 60));
		}
		else if (convertToY == ("minutes"))
		{
			conversionA = travelNum;
		}
	}
	/////////////////////////////////////////////////////////////////////////////////////
	if (distanceUnit == ("miles") && (convertToX == ("feet")))
	{
		if (convertToY == ("hours"))
		{
			conversionA = ((travelNum * 5280)*(60 / timeUnit));
		}
		else if (convertToY == ("seconds"))
		{
			conversionA = ((travelNum * 5280) * (timeUnit * 60));
		}
		else if (convertToY == ("minutes"))
		{
			conversionA = (travelNum * 5280);
		}
	}
	if (distanceUnit == ("miles") && (convertToX == ("meters")))
	{
		if (convertToY == ("hours"))
		{
			conversionA = ((travelNum * 1609.344)*(60 / timeUnit));
		}
		else if (convertToY == ("seconds"))
		{
			conversionA = ((travelNum * 1609.344) * (timeUnit * 60));
		}
		else if (convertToY == ("minutes"))
		{
			conversionA = (travelNum * 1609.344);
		}
	}
	if (distanceUnit == ("miles") && (convertToX == ("miles")))
	{
		if (convertToY == ("hours"))
		{
			conversionA = (travelNum*(60 / timeUnit));
		}
		else if (convertToY == ("seconds"))
		{
			conversionA = (travelNum * (timeUnit * 60));
		}
		else if (convertToY == ("minutes"))
		{
			conversionA = travelNum;
		}
	}
}
void displayResults()
{
	if (convertToY == ("seconds"))
	{
		convertToY = ("second");
	}
	if (convertToY == ("hours"))
	{
		convertToY = ("hour");
	}
	if (convertToY == ("minutes"))
	{
		convertToY = ("minute");
	}
	cout << "Your new speed is " << conversionA << " " << convertToX << " per " << convertToY << endl;
}