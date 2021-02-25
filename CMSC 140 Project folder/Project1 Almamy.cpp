/*
 * Class: CMSC140 CRN
 * Instructor: Sandro Fouche
 * Project<1>
 * Description: (Give a brief description for Project)
 * Due Date:02/24
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Almamy Aguibou Bah


 * Pseudocode or Algorithm for the program:
    (be sure to indent items with control structure)
    (need to match flow chart submitted in documentation)
  1.setup
  2.declare variables
  3." Hello, welcome to Montgomery College! My name is soul. May I have your name?"
  4.Input visitorName
  5." Nice to have you with us today, visitorName"
  6."Let me impress you with a small game"
  7."Give me the age of an important person or a  pet to you"
  8."Please give me only a number:"
  9.Input age
 10."You have entered age"
 11."If this is a person, the age can be expressed as: input age years"
 12." or age*12 months"
 13." or about age*360 days"
 14." or about age*8640 hours"
 15." or about age*518fdf400 minutes"
 16." or about age*31104000 secondes."
 17. declare variables
 18. "If this is for a dog, it is  years old in human age."
 19."If this is for a gold fish, it is  years old in human age."
 20. "Let's play another game, John Smith. Give me a whole number."
 21.Inpout wholeNumber
 22."Very well. Give me another whole number" 
 23.Input wholeNumber1
 24. declare variables
 24."Using the operator '+' in C++, the result of wholeNumber+wholeNumber1 is 9."
 25."Using the operator '/', the result of wholeNumber/wholeNumber1 is 0" 
 26."However the result of 4.0/5.0 is about 0.8"
 27."Thank you for testing my program!!"
 28."Programmer: Tina Lee"
 29."CMSC140 Common Project 1
 30."Due date: 2/10/2019"
*/


#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main() {
    

    string visitorName;
    const string robotName= "Soul", myName= "Almamy Aguibou Bah", dueDate= "02/24/20";
    
    int age;
    const int assignmentNumber = 1;
    
    cout << "Hello, welcome to Montgomery College! My name is " << robotName << ". May I have your name?\n";
    getline (cin, visitorName);
    cout << " Nice to have you with us today! " << visitorName << endl;
   
     
    cout << "Let me impress you with a small game\n";
    
    cout << "Give me the age of an important person or a pet to you\n";
   
    cout << "Please give me only a number: \n";
    cin >> age; "\n\n";
    cout << "You have entered " << age << endl<< endl;
    

    cout << "If this is a person, the age can be expressed as: " << age << " years\n";
   

    cout << "or " << age * 12 << " months\n";
   

    cout << "or about " << age * 360 << " days\n";
    

    cout << "or about " << age * 8640 << " hours\n";
    

    cout << "or about " << age * 518400 << " minutes\n";

    cout << "or about " << age * 31104000 << " secondes\n";

    int dogYear = 7 * age;
    int goldfishYear = 5 * age;


    
       
    cout << "If this is for a dog, it is " << dogYear << " years old in human age.\n";
        cout << "If this is for a gold fish, it is " << goldfishYear << " years old in human age.\n\n";

        int wholeNumber, wholeNumber1;
        

        cout << "Let's play another game, John Smith. Give me a whole number.\n";
        cin >> wholeNumber;'\n';

        cout << "Very well. Give me another whole number\n";
        cin >> wholeNumber1;

        int sumOfwholeNumber = wholeNumber1 + wholeNumber;
        int divisionofWholeNumber = wholeNumber / wholeNumber1;

        cout << "Using the operator '+' in C++, the result of " <<setprecision<<fixed<<wholeNumber<< ' + ' <<setprecision<<fixed <<wholeNumber1 << " is " << sumOfwholeNumber << " ."<< endl <<endl;

        cout << "using the operator '/' in C++, the result of " << wholeNumber << ' / ' << wholeNumber1 << " is " << divisionofWholeNumber << ' .' << endl;
 
        cout << "whole"

        system("pause");

            
       
          





    cout << "Thank you for testing my program!!\n";
    cout << "PROGRAMMER: Almamy Aguibou Bah\n" << "CMSC140 Common Project 1\n";
    cout << "Due Date: 2/24/20";
    return 0;
}