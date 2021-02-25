
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
  2.declare variables
  3.cout << "\t\t" << "  BlueMont Hotel" << endl;
  4. cout << "Enter the location of this hotel chain: "
  5. getline(cin, location_hotel);
  6. cout << "Enter total number of floors of the hotel:";
  7.cin >> numOfFloors;
  8.cin.ignore();
  9.while (numOfFloors < 1 || numOfFloors > 5)
 10. for (int i = 1; i <= numOfFloors; i++) 
 11.{
 12. while (numOfRooms < 1 || numOfRooms>30) 
 13. {
 14.   while (rooms_occupied<0 ||rooms_occupied > numOfRooms)
 15.    {
 16.       while (numOfRooms < 1 || numOfRooms>30) 
 17.        {
 18.           while (rooms_occupied<0 ||rooms_occupied > numOfRooms)
 19             {
 20.              while (numOfRooms < 1 || numOfRooms>30) 
 21.}
 22.cout <<"What the homework ask"<< endl;
 23. if(
 24. if(if (total_occupancy_rate < 60)
 25.     cout << "Need to improve Hotel occupancy rate!!" << endl << endl;
 26. cout << "Thank you for testing my program!!" << endl;
    cout << "PROGRAMMER: ALMAMY AGUIBOU BAH" << endl;
    cout << "CMSC 140 Common Project 3" << endl;
    cout << "Due Date: 04/08" << endl;
*/

#include <iostream>
#include <string>
#include <fstream>
#include<iomanip>

using namespace std;
int main() {

    const int SINGLE_ROOM = 60; //To hold the price of a single room
    const int DOUBLE_ROOM = 75;// To hold the price of a double room
    const int  KING_ROOM = 100;// To hold the price of a King room
    const int SUITE_ROOM = 150;// To hold the price of a Suite
    const int MAX_NUM_FLOORES = 5; // To hold the maximum number of floors a hotel can have
    const int MAX_NUM_ROOMS = 30; // To hold the maximum number of rooms each floor can have

    int hotel_income=0; // To hold the income of the hotel
    int floor_income=0;// to know how much each floor make as income;

    int total_of_rooms=0; // total of room that hotel has

    int rooms_occupied; // total of rooms occupied on each floor
    int total_rooms_occupied=0; // total of rooms occupied in all the floor of hotel
    int total_rooms_unoccupied; //total of rooms unoccupied in that hotel
    double total_occupancy_rate; //How to make it in percentage??

    int singleRoom;// To hold the number of single rooms occupied in each floor
    int doubleRoom; // To hold the number of double rooms occupied on each floor
    int kingRoom; //To hold the number of king rooms occupied on each floor
    int suite; // To hold the number of suite occupied on each floor
    int mostOccupied = -1;
    int occupied = 0;
    int leastOccupied = 40;

   /* const int MAX_NUM_OF_FLOORS = 5;// To hold the maximum amount of floors that a hotel can have
    const int MIN_NUM_OF_FLOORS = 1;*/
    int numOfFloors, numOfRooms; // to hold the number of floors and the number of room on each floor

    string location_hotel; //To hold the city in which the hotel is located



    cout << "=============================================================" << endl;
    cout << "\t\t" << "    BlueMont Hotel" << endl;
    cout << "=============================================================" << endl;

    cout << "Enter the location of this hotel chain: ";
    getline(cin, location_hotel);
    cout << "Enter total number of floors of the hotel:";
    cin >> numOfFloors;
    cin.ignore();


    


    while (numOfFloors < 1 || numOfFloors > 5)// Input validation for the use to put a value between 1 and 5
    {
        cout << "number of floors should be between 1 and 5 !! please try again." << endl << endl;

        cout << "Enter total number of floors of the hotel:";
        cin >> numOfFloors;
        cin.ignore();
    }


    // this loop is to ask the user to put in the number of rooms for each floor of the hotel//
    for (int i = 1; i <= numOfFloors; i++)
    {
        cout << "\nEnter total number of rooms in the " << i << "th Floor:";
        cin >> numOfRooms;//
        cin.ignore();

        
       
       

        // This is an input validation to force the user to enter a value that is in the range(1-10)
        while (numOfRooms < 1 || numOfRooms>30) 
        {
            cout << "number of rooms should be between 1 and 30 !! please try again. "<<endl;
            cout << "\nEnter total number of rooms in the " << i << "th Floor:";
            cin >> numOfRooms;//
            cin.ignore();       
        }

        //asking the user to enter how many rooms of each types is occupied for each floor

        cout << "How many SINGLE rooms are occupied in the " << i << "th floor:";
        cin >> singleRoom;

        cout << "How many DOUBLE rooms are occupied in the " << i << "th floor:";
        cin >> doubleRoom;

        cout << "How many KING rooms are occupied in the " << i << "th floor:";
        cin >> kingRoom;

        cout << "How many SUITE are occupied in the " << i << "th floor:";
        cin >> suite;
        
        


        //To add the total of occupied room
        rooms_occupied= singleRoom + doubleRoom + kingRoom + suite;

      

        // Making sure that the total number of the type of rooms that the user has entered
        //is not superior to the number of rooms that is on that floor
        while (rooms_occupied<0 ||rooms_occupied > numOfRooms)
        {
            cout << "Total number of occupied rooms exceeds the total number of rooms on this floor or is inferior to 0";
            cout<<" . Please try again." << endl;
            cout << "\nEnter total number of rooms in the " << i << "th Floor:";
            cin >> numOfRooms;//


           

            // This is an input validation to force the user to enter a value that is in the range(1 - 30)
            while (numOfRooms < 1 || numOfRooms>30) 
            {
                cout << "number of rooms should be between 1 and 30 !! please try again. " << endl;
                cout << "\nEnter total number of rooms in the " << i << "th Floor:";
                cin >> numOfRooms; //
            
                
            }
           
           

            cout << "How many SINGLE rooms are occupied in the " << i << "th floor:";
            cin >> singleRoom;

            cout << "How many DOUBLE rooms are occupied in the " << i << "th floor:";
            cin >> doubleRoom;

            cout << "How many KING rooms are occupied in the " << i << "th floor:";
            cin >> kingRoom;

            cout << "How many SUITE are occupied in the " << i << "th floor:";
            cin >> suite;

          

            rooms_occupied = singleRoom + doubleRoom + kingRoom + suite;
            

       
        }

        if (leastOccupied > numOfRooms)
        {
            leastOccupied = numOfRooms;
            occupied = i;
        }

      
        //Formula to find the income of each floor.
        floor_income = ((60 * singleRoom) + (75 * doubleRoom) + (100 * kingRoom) + (150 * suite));

        cout << "The income of the " << i << "th floor is:$" << floor_income << endl;


        total_of_rooms += numOfRooms;

        total_rooms_occupied += rooms_occupied;
      
        total_rooms_unoccupied = total_of_rooms -total_rooms_occupied;

        //Formula to find the total income of the hotel wich is to add the income of each floor
        hotel_income += floor_income;

        total_occupancy_rate = (static_cast<double>(total_rooms_occupied) / total_of_rooms) * 100; //Formula to find the occupancy rate
       
    }
   


    cout << "============================================================================================================== " << endl;
    cout << "\t\t" << "              BlueMont Hotel located at " << location_hotel << endl;
    cout << "==============================================================================================================" << endl;
    cout << "\t\t" << "  Today's Room Rates (Us$/night)"<<endl;
    cout << "\t\t" << "Single Room" << "\t\t" << "Double Room" << "\t\t" << "King Room" << "\t\t" << "Suite Room" << endl;
    cout << "\t\t" << setw(11) << "60" << "\t\t" << setw(11) << "75" << "\t\t" << setw(9) << "100" << "\t\t" << setw(10) << "150" << endl;
    cout << "==============================================================================================================" << endl;


    // Outputing information on the hotel//
    cout << setw(31) << "Hotel Income : "  <<setw(11)<<"$"<<hotel_income << endl;
    cout << setw(30) << "Total # of Rooms :" << setw(15)<<total_of_rooms<< endl;
    cout << setw(30) << "Total # of Occupied Rooms :"<<setw(15)<<total_rooms_occupied << endl;
    cout << setw(30) << " Total # of Unoccupied Rooms :"<<setw(15)<<total_rooms_unoccupied << endl;
    cout << setw(30) << " Occupancy Rate :"<<setw(15)<<setprecision(2)<<fixed<<total_occupancy_rate <<"%"<< endl<< endl;


    
        cout << occupied<<"th floor with " << leastOccupied << " rooms has the least # of rooms" << endl;

    if (total_occupancy_rate < 60)
        cout << "Need to improve Hotel occupancy rate!!" << endl << endl;
    

    

    cout << "Thank you for testing my program!!" << endl;
    cout << "PROGRAMMER: ALMAMY AGUIBOU BAH" << endl;
    cout << "CMSC 140 Common Project 3" << endl;
    cout << "Due Date: 04/08" << endl;

    system("pause");

    return 0;
}