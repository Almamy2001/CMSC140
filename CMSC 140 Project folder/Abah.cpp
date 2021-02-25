/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project<number>
 * Description: (Give a brief description for Project)
 * Due Date:
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Almamy Aguibou Bah


 * Pseudocode or Algorithm for the program:
    (be sure to indent items with control structure)
    (need to match flow chart submitted in documentation)
  1.setup 
  2.functions prototypes
  3.int main
  4.functions definition
  

*/


#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;
ofstream employeeAbsences;

//employeeAbsences.open("employeeAbsences.txt");

// To ask the number of employees in the company
int NumOfEmployees(); 

// To return the total number of absences
int TotDaysAbsent(int numOfEmployees);


// To calculate the average number of absences
double AverageAbsent(int numOfEmployees, int totDaysAbsent);



int main() {
    
    int numOfEmployees; //To hold the number of employee that the company have 
    int totDaysAbsent; // To hold the total number of absences that happens in the company
    double averageAbsent; // To hold the average of absence in the company
    string userName; // For the user to enter his or her name
      //Putting information into the file employeeAbsences
    employeeAbsences.open("employeeAbsences.txt");


    cout << "Calculate the average number of days a company's employees are absent." << endl;

    //To use the number that the function NumOfEmployees will return
    numOfEmployees = NumOfEmployees();

    //Calling the function TotDaysAbsent and using the value that it returns
    totDaysAbsent = TotDaysAbsent(numOfEmployees);

    //Calling the function AverageAbsent and using the value that it returns
     averageAbsent = AverageAbsent(numOfEmployees, totDaysAbsent);

    cout << "Programmer: insert your name here"<<endl;
    getline(cin, userName);

    //To verify that the file has been opened successfully
    if (employeeAbsences.fail())
    {
        cerr << "Opening error" << endl;
        exit(5);
    }

   // Putting information into the file employeeAbsences
    employeeAbsences << "The " << numOfEmployees << " employees were absent a total of " << totDaysAbsent << " days." << endl;
    employeeAbsences << "The average number of days absent is " << setprecision(1)<<fixed<<averageAbsent << " days." << endl << endl;
    employeeAbsences << "Programmer:  "<<userName;

	return 0;
}

int NumOfEmployees() {
    int numberOfWorkers;

    cout << "How many people are working in the company: ";
    cin >> numberOfWorkers;
    cin.ignore();

    //Input validation
    while (numberOfWorkers<1)
    {
        cout << "The number of employees has to be superior or equal to 1" << endl;
        cout << "Please re-enter the number of employees in the company:";
        cin >> numberOfWorkers;
        cin.ignore();
    }

    return numberOfWorkers;
}


int TotDaysAbsent(int numOfEmployees)
{
    static int totDissedDay = 0; //To hold the total of absences
    int daysAbsent; //To hold the number of day that the employee has been absent
    int employeeID; // To hold the ID of the employeer

    //Putting information into the global file
    employeeAbsences << "EMPLOYEE ABSENCE REPORT" << endl;
    employeeAbsences << "employee id    days absent" << endl;

    //For the program to ask the same question depending on how much employees the company have
    for (int i = 0; i < numOfEmployees; i++)
    {
        cout << "Please enter an emplyee ID: ";
        cin >> employeeID;
        cin.ignore();

        // employeeAbsences<<employeeID<< 

        cout << "Please enter the number of days this employee was absent: ";
        cin >> daysAbsent;
        cin.ignore();

        //Input validation
        while (daysAbsent < 0) {
            cout << "The number of days must not be negative." << endl;
            cout << "Please re-enter the number of days absent: ";
            cin >> daysAbsent;
            cin.ignore();
        }
        

        employeeAbsences << setw(8) << employeeID << setw(12) << daysAbsent << endl;

        totDissedDay += daysAbsent;
    }
    return totDissedDay;
}


double AverageAbsent(int numOfEmployees, int totDaysAbsent)
{
    cout << setprecision(1) << fixed << showpoint << endl;
    double average = (totDaysAbsent) / (numOfEmployees*1.0);

    return average;
}