#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main ()
{
    // The do loop is good for repeating menu to use it is like //
    /* it is like this
    do
    {
    cout <<"  " << endl;
    }
    while(condition)*/

    int choice; //The choice in the menu that the user will take
    int celsius; // To hold the temperature in celsius that the user will enter
    string country; // To hold the name of the country that the user will enter
    double kilometer; // To hold the distance in meter that the user will enter
    double weight;// To hold the weight in kilogram that the user will enter;
   

    int fahrenheit; // To hold the conversion from celsius to fahrenheit

    cout << " Enter a country name: ";
    getline(cin, country);

    // This is the Menu//

    do
    {
        
        cout << "\n\n";

        cout << " Convert Toolkit" << endl;
        cout << " -----------------" << endl;
        cout << " 1. Temperature Converter" << endl;
        cout << " 2. Distance Converter" << endl;
        cout << " 3. Weight Converter" << endl;
        cout << " 4. Quit" << endl << endl;

        cout << " Enter your choice (1-4): ";// The user have to choose want of the menu
        cin >> choice;

        while (choice < 1 && choice>4)
        {
            cout << "You must enter a valid number" << endl;
            cin >> choice;
        }

        if (choice >= 1 && choice <= 4) //This expression is valid when this expression is true
        {
            if (choice == 1) // first choice in the that is related to the temperature
            {
                cout << " Please enter temperature in Celsius (such as 24 ): ";
                cin >> celsius;

                fahrenheit = 32 + (9.0 / 5 * celsius); // formula to convert celsius into fahreint

                cout << " It is " << fahrenheit << " Fahrenheit." << endl;
            }
            if (choice == 2) // second choice in the menu related to distance conversion
            {
                cout << " Please enter Distance in Kilometer (such as 23.5): ";
                cin >> kilometer;


                if (kilometer >= 0)
                    cout << " It is " << setprecision(2) << fixed << kilometer * 0.6 << " miles." << endl;
                else

                {
                    cout << "  !!! Program does not convert negative distance !!!" << endl << endl; // error message when a negative value is entered
                    cout << " Program ended with exist code: 0" << endl;
                }
            }

            if (choice == 3) // third choice in the menu related to weight consersion
            {
                cout << " Please enter Weight in Kilogram (such 68.6): ";
                cin >> weight; //input the value of weight

                if (weight >= 0)
                    cout << " It is " << setprecision(1) << fixed << weight * 2.2 << " pounds." << endl;
                else
                {
                    cout << "  !!! Program does not convert negative distance !!!" << endl << endl;// error message when entered a negative value
                    cout << " Program ended with exist code: 0" << endl;
                }
            }
        }
        
       
    } while (choice != 4);

        cout << "\n\n " << country << " sounds fun!" << endl << endl;

        cout << "\n Thank You for testing my program!!" << endl;
        cout << " PROGRAMMER: Almamy Aguibou Bah" << endl;
        cout << " CMSC140 Common Project 2" << endl;
        cout << " Due Date: 03/09/2020 " << endl << endl;
    
    return 0;
}