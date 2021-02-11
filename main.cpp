#include <iostream>
#include <string>
#include <fstream>
#include "Unit1.cpp"
using namespace std;

// functions that are used throughout the program
int unit1();

//unit functions
int randomquestion_unit1(int);
int reading_questions_unit1();

int main(){
    const string options = "Welcome, please choose from the following options to be tested on: \n";
    const string unit_options = "1.  Unit 1, 2. Unit 2, 3. Unit 3, 4. Unit 4 \n";
    string userinput;
    cout << options + "" + unit_options;
    cin >> userinput;
    if (userinput == "1")
    {
        cout << "You have chosen Unit 1. Good luck \n";
        unit1();
    }
    
    // switch (userinput)
    // {
    // case "1":
    //     cout << "You have chosen Unit 1. Good luck \n";
    //     main();
    //     // runs function on Unit1.cpp
    //     break;
    // case "2":
    //     cout << "You have chosen Unit 2. Good luck \n";
    //     // runs function on Unit2.cpp
    //     break;
    // case "3":
    //     cout << "You have chosen Unit 3. Good luck \n";
    //     // runs function on Unit3.cpp
    //     break;
    // case "4":
    //     cout << "You have chosen Unit 4. Good luck \n";
    //     // runs function on Unit4.cpp
    //     break;
    // default:
    //     cout << "ERROR: Please try a number within range of 1-4 \n";
    //     main();
    //     break;
}


// qnum = Question number
// question = question to ask user

int unit1(){
    int qnum;
    int number = (rand() % 10);
    randomquestion_unit1(qnum = number);
    cout << "test";
    return 0;   
}


int randomquestion_unit1(int qnum){
    /* when reading the text file, the letters before the question stand for the following:
    Q - question
    A - Answer
    */
   

   // Reads the question and answer
   string line;
   char letter;
   line = qnum;

   ifstream reader("questions_unit_1.txt");
   reader.eof();
   if(reader.get(letter)){

   }
    getline(reader, line);
    cout << line + "\n";
    string userans;
    cin >> userans;


   return 0;
}
