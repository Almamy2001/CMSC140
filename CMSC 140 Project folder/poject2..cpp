#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int choice; //The choice in the menu that the user will take
    int celsius; // To hold the temperature in celsius that the user will enter
    string country; // To hold the name of the country that the user will enter
    double kilometer; // To hold the distance in meter that the user will enter
    double weight;// To hold the weight in kilogram that the user will enter;

    int fahrenheit; // To hold the conversion from celsius to fahrenheit
    cout << " Enter a country name: ";
    getline(cin, country);
    cout << "\n\n";
   
    cout << " Convert Toolkit" << endl;
    cout << " -----------------" << endl;
    cout << " 1. Temperature Converter" << endl;
    cout << " 2. Distance Converter" << endl;
    cout << " 3. Weight Converter" << endl;
    cout << " 4. Quit" << endl << endl;

    cout << " Enter your choice (1-4): ";// The user have to choose want of the menu
    cin >> choice;

    switch (choice)
    {
    case 1: cout << " Please enter temperature in Celsius (such as 24 ): ";
        cin >> celsius;

        fahrenheit = 32 + (9.0 / 5 * celsius); // formula to convert celsius into fahreint

        cout << " It is " << fahrenheit << " Fahrenheit." << endl;
        break;

    case 2:  cout << " Please enter Distance in Kilometer (such as 23.5): ";
        cin >> kilometer;


        if (kilometer >= 0)
            cout << " It is " << setprecision(2) << fixed << kilometer * 0.6 << " miles." << endl;
        else
            cout << "  !!! Program does not convert negative distance !!!" << endl << endl; // error message when a negative value is entered
        break;

    case 3:  cout << " Please enter Weight in Kilogram (such 68.6): ";
        cin >> weight;

        if (weight >= 0)
            cout << " It is " << setprecision(1) << fixed << weight * 2.2 << " pounds." << endl;
        else
            cout << "  !!! Program does not convert negative distance !!!" << endl << endl;// error message when entered a negative value
        break;

    case 4:char confirmation;// To confirm the choice of the user about quitting




        cout << " Are you sure you want to quit?" << endl;

        cout << "                  Y/N                " << endl;

        cin >> confirmation;

        if (confirmation == 'y' || confirmation == 'Y')
            cout << " Good Bye" << endl;

        else //issue with this else statement

        {
            cout << " Make another choice" << endl;
            cout << " Convert Toolkit" << endl;
            cout << " -----------------" << endl;
            cout << " 1. Temperature Converter" << endl;
            cout << " 2. Distance Converter" << endl;
            cout << " 3. Weight Converter" << endl;
            cout << " 4. Quit" << endl << endl;
        }

        break;

    default:  cout << " You have entered the wrong number. "
        << " You must restart the program again and choose the rigth number." << endl;

    }

    cout << "\n\n " << country << " sounds fun!" << endl << endl;

    cout << "\n Thank You for testing my program!!" << endl;
    cout << " PROGRAMMER: Almamy Aguibou Bah" << endl;
    cout << " CMSC140 Common Project 2" << endl;
    cout << " Due Date: 03/09/2020 " << endl << endl;

	return 0;
}
