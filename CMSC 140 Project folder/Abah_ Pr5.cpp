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
  2. defining Global constant
  3. Function prototypes
  4.int main()
  5. Function fillArray
  6. Function showArray
  7. Function checkRange
  8. Function checkUnique
  9. Function sumRowArray
  10.Funcion  checkRowSum
  11.Function checkColSum
  12.Function checkDiagSum
  13.Function isMagicSquare

*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Global constants 
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
int sumRowArray(int arrayRow1[], int size);

int main()
{
    // Defining a Lo Shu Magic Square using 3 parallel

    //arrays corresponding to each row of the grid *
    int magicArrayRow1[COLS];
    int magicArrayRow2[COLS];
    int magicArrayRow3[COLS];
    bool magicSquare;//To verify that all the condition are respected
    string playAgain;//To hold the reponse of the user

    do
    {
        //inputing information in the array
        fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

        //Outputing the information entered in the array
        showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

        magicSquare = isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

        if (magicSquare)
        {
            cout << "This is a Lo Shu magic square.";
        }
        else
            cout << "This is not a Lo Shu magic square";

        //Prompt to ask the user if he wants to play again
        cout << "\n\n\nDo you want to try again?";
        cin >> playAgain;

    } while (playAgain == "y" || playAgain == "Y");

    cout << "\nName: Almamy Aguibou Bah" << endl;
    cout << "Project #: 5" << endl;
    cout << "Due Date: 05/10/2020" << endl;

    return 0;
}

//To allow the user to enter the number in the different array
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    int index;

    //Filling the first array
    for (index = 0; index < size; index++)
    {
        cout << "Enter the number for row " << 0 << " and column " << index << " :";
        cin >> arrayRow1[index];
    }

    //Filling the second array
    for (index = 0; index < size; index++)
    {
        cout << "Enter the number for row " << 1 << " and column " << index << " :";
        cin >> arrayRow2[index];
    }

    //Filling the third array
    for (index = 0; index < size; index++)
    {
        cout << "Enter the number for row " << 2 << " and column " << index << " :";
        cin >> arrayRow3[index];
    }

}

//To output the number that the user have enter in the arrays
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
    int index;

    //Outputing the first array 
    for (index = 0; index < size; index++)
    {
        cout << arrayrow1[index] << " ";
    }
    cout << endl;

    // Outputing the second array
    for (index = 0; index < size; index++)
    {
        cout << arrayrow2[index] << " ";

    }
    cout << endl;

    //Outputting the last array
    for (index = 0; index < size; index++)
    {
        cout << arrayrow3[index] << " ";
    }

}





//To check if the different number are in the allowed range
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max)
{
    bool inRange1 = true; //To verify if the value is in the range
    int index;
    for (index = 0; index < size; index++)
    {
        if (arrayRow1[index]<min || arrayRow1[index]>max)
            inRange1 = false;
    }

    for (index = 0; index < size; index++)
    {
        if (arrayRow2[index]<min || arrayRow2[index]>max)
            inRange1 = false;
    }

    for (index = 0; index < size; index++)
    {
        if (arrayRow3[index]<min || arrayRow3[index]>max)
            inRange1 = false;
    }
    cout << endl;

    return inRange1;
}

//To check if all the different number in the array are unique
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    bool unique1 = true;
    int count = 0;
  
  //Verify that the number are unique in the differents colums
    for (int index = 0; index < size; index++)
    {
        if (arrayRow1[index] == arrayRow2[index] || arrayRow1[index] == arrayRow3[index]) {
            unique1 = false;
        }
    }
       
   //Verify that the number are unique in the same row     
            if (arrayRow1[0] == arrayRow1[1] || arrayRow1[0] == arrayRow1[2] || arrayRow1[1] == arrayRow1[2])
            {
              unique1 = false;
            }

            if (arrayRow2[0] == arrayRow2[1] || arrayRow2[0] == arrayRow2[2] || arrayRow2[1] == arrayRow2[2])
            {
                unique1 = false;
            }

            if (arrayRow3[0] == arrayRow3[1] || arrayRow3[0] == arrayRow3[2] || arrayRow3[1] == arrayRow3[2])
            {
                unique1 = false;
            }


        //Verify that the number are unique at the diagnals
            if (arrayRow1[0] == arrayRow2[1] || arrayRow1[0] == arrayRow3[2] || arrayRow2[1] == arrayRow3[2])
            {
                unique1 = false;
            }

            if (arrayRow1[2] == arrayRow2[1] || arrayRow1[2] == arrayRow3[0] || arrayRow2[1] == arrayRow3[2])
            {
                unique1 = false;
            }
            return unique1;
}

//To find the sum of the row of each array
int sumRowArray(int arrays[], int size)
{
    int sumRow = 0;//To hold the sum of the value in the row of an array


    for (int index = 0; index < size; index++)
    {
        sumRow += arrays[index];
    }

    return sumRow;

}

//To check if the sum of the row of the differents arrays are equal 
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
    bool sum = true;

    int rowSum1 = sumRowArray(arrayrow1, size);
    int rowSum2 = sumRowArray(arrayrow2, size);
    int rowSum3 = sumRowArray(arrayrow3, size);

    if (rowSum1 != rowSum2)
    {
        sum = false;
    }

    if (rowSum1 != rowSum3)
    {
        sum = false;
    }

    if (rowSum2 != rowSum3)
    {
        sum = false;
    }

    return sum;

}

//To check if the sum of the differents column are equal    
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
    bool colSum = true;
    //Sum of the first column
    int sumCol1 = arrayrow1[0] + arrayrow2[0] + arrayrow3[0];

    //Sum of the second column
    int sumCol2 = arrayrow1[1] + arrayrow2[1] + arrayrow3[1];

    //Sum of the third column
    int sumCol3 = arrayrow1[2] + arrayrow2[2] + arrayrow3[2];

    if (sumCol1 != sumCol2)
    {
        colSum = false;
    }

    if (sumCol1 != sumCol3)
    {
        colSum = false;
    }

    if (sumCol3 != sumCol2)
    {
        colSum = false;
    }
    return colSum;
}

// To check if the differents diagonals are equal
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
{
    bool diagSumEqual = true;

    //Sum of the 1st diagonal
    int diagSum1 = arrayrow1[0] + arrayrow2[1] + arrayrow3[2];

    //Sum of the 2nd diagonal
    int diagSum2 = arrayrow1[0] + arrayrow2[1] + arrayrow3[2];

    if (diagSum1 != diagSum2)
    {
        diagSumEqual = false;
    }

    return diagSumEqual;
}

//To see if all the requirements are met
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size)
{
    bool magicSquare = true;

    bool inRange;//To hold the result of the function checkRange

    //Defining the variable inRange
    inRange = checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX);

    if (!inRange) {
        magicSquare = false;
    }

//    Declaring and Defining the variable unique
    bool unique; //To verify that a number has not been repeated in the differents arrays
 unique = checkUnique(arrayRow1, arrayRow2, arrayRow3, size);

    if(!unique)
    {
    magicSquare=false;
    }

    //To see if the rows are equal
    bool rowSum = checkRowSum(arrayRow1, arrayRow2, arrayRow3, size);

    if (!rowSum)
    {
        magicSquare = false;
    }

    //To see if the colums are equals
    bool colSum = checkColSum(arrayRow1, arrayRow2, arrayRow3, size);

    if (!colSum)
    {
        magicSquare = false;
    }

    // To see if the diagonals are equals
    bool diagSum = checkColSum(arrayRow1, arrayRow2, arrayRow3, size);

    if (!diagSum)
    {
        magicSquare = false;
    }
    return magicSquare;
}


