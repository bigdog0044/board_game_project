#include <iostream>
#include <string>
#include <fstream>
#include "Unit1.cpp"
using namespace std;

// functions that are used throughout the program
int unit1();

//unit functions
int questions_unit1(int);
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
}


// qnum = Question number
// question = question to ask user

// int unit1(){
//     int qnum;
//     int number = (rand() % 10);
//     randomquestion_unit1(qnum = number);
//     cout << "test";
//     return 0;   
// }


int questions_unit1(int qnum){
    /* when reading the text file, the letters before the question stand for the following:
    Q - question
    A - Answer
    */
   

   // Reads the question and answer
   for (int i = 0; i < 10; i++){
       //Q1
       string Q1ans;
       cout << "What does the ALU stand for?";
       cin >> Q1ans;
       if(Q1ans != "Athimritic Logic Unit" or "athimritic logic unit"){
           cout << "Incorrect, the correct answer was Athimritic Logic Unit";
       }

       //Q2
       string Q2ans;
       cout << "What does the CPU stand for?";
       cin >> Q1ans;
       if(Q1ans != "Athimritic Logic Unit" or "athimritic logic unit"){
           cout << "Incorrect, the correct answer was Athimritic Logic Unit";
       }
   }


   return 0;
}
