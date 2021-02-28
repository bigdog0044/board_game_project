#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// functions that are used throughout the program
int unit1();
int hangman_calculation(int num_wrong_questions);
string ending_message(int num_wrong_questions);



int main(){
    int num_wrong_questions = 0;



    // if (gameover == true){
    //     cout << "THE GAME HAS ENDED\n";
    //     ending_message(num_wrong_questions);
    // } else {
        cout << "Welcome, make sure you answer all 10 questions correctly. If you get 4 wrong then the game will end and you will lose.  \n";
        
        //Q1 code
        string Q1userans;
        cout << "Is clock speed measured in Hertz? True Or False (please make sure to capitalise the first letter of your answer) \n";
        cin >> Q1userans;
        if(Q1userans == "True"){
            cout << "correct \n";
        
        } else {
            cout << num_wrong_questions + "\n";
            cout << "Incorrect, the correct answer was True \n";
            if (num_wrong_questions == 4){
                ending_message(num_wrong_questions);
            } else{
                hangman_calculation(num_wrong_questions = num_wrong_questions + 1);
            }
        }
        
        //Q2
        string Q2userans;
        cout << "Which of these statements is true about ROM \n a) ROM can only be written to \n b) ROM can only be read from \n c) ROM does nothing \n (don't include the brackets, only the letter of your choice) \n";
        cin >> Q2userans;
        if(Q2userans == "b"){
            cout << "correct \n";
        
        } else {
            cout << num_wrong_questions + "\n";
            cout << "Incorrect, the correct answer was b \n";
            if (num_wrong_questions == 4){
                 
                 ending_message(num_wrong_questions);
            } else{
                hangman_calculation(num_wrong_questions = num_wrong_questions + 1);
            }
        }
        
        //Q3
        string Q3userans;
        cout << "Which of these statements is true about RAM \n a) RAM can only be written to and is non-volatile \n b) RAM can only be read from and is volatile \n c) RAM is volatile and can be read and written to \n (don't include the brackets, only the letter of your choice) \n";
        cin >> Q3userans;
        if(Q3userans == "c"){
            cout << "correct \n";
        
        } else {
            cout << num_wrong_questions + "\n";
            cout << "Incorrect, the correct answer was c \n";
            if (num_wrong_questions == 4){
                 
                 ending_message(num_wrong_questions);
            } else{
                hangman_calculation(num_wrong_questions = num_wrong_questions + 1);
            }
        }
        
        //Q4
        string Q4userans;
        cout << "Why does Virtual memory slow down CPU performance? \n a) Because virtual memory is far away from RAM and the CPU has to wait for the data to be transferred to RAM \n b) It's close to the CPU and has fast access speed \n c) The CPU has to wait for the data from the hard drive to be written to ROM \n (don't include the brackets, only the letter of your choice) \n";
        cin >> Q4userans;
        if(Q4userans == "a"){
            cout << "correct \n";
        
        } else {
            cout << num_wrong_questions + "\n";
            cout << "Incorrect, the correct answer was a \n";
            hangman_calculation(num_wrong_questions = num_wrong_questions + 1);
            if (num_wrong_questions == 4){
                 
                ending_message(num_wrong_questions);
            } else{

            }
        }
        
        //Q5
        string Q5userans;
        cout << "Are Worms, Trojans and ransomware a form of malware? True or False (please make sure to capitalise the first letter of your answer)\n";
        cin >> Q5userans;
        if(Q5userans == "True"){
            cout << "correct \n";
        
        } else {
            cout << num_wrong_questions + "\n";
            cout << "Incorrect, the correct answer was a \n";
            hangman_calculation(num_wrong_questions = num_wrong_questions + 1);
            if (num_wrong_questions == 4){
                 
                 ending_message(num_wrong_questions);
            }
        }
        
        //Q6
        string Q6userans;
        cout << "Which one of the following is used to blackmail a user into making payment? \n a) Trojan \n b) Spyware \n c) Ransomware \n (don't include the brackets, only the letter of your choice) \n";
        cin >> Q6userans;
        if(Q6userans == "c"){
            cout << "correct \n";
        
        } else {
            cout << "Incorrect, the correct answer was c) \n";
            hangman_calculation(num_wrong_questions = num_wrong_questions + 1);
            if (num_wrong_questions == 4){
                 
                 ending_message(num_wrong_questions);
            }
        }
        
        //Q7
        string Q7userans;
        cout << "What is the 8-bit binary number 10010011 in denary? \n a) 140 \n b) 147 \n c) 149 \n (don't include the brackets, only the letter of your choice)\n";
        cin >> Q7userans;
        if(Q7userans == "b"){
            cout << "correct \n";
        
        } else {
            cout << "Incorrect, the correct answer was b \n";
            hangman_calculation(num_wrong_questions = num_wrong_questions + 1);
            if (num_wrong_questions == 4){
                 
                 ending_message(num_wrong_questions);
            }
        }
        
        //Q8
        string Q8userans;
        cout << "What is 252 in binary? \n a) 11111000 \n b) 11110010 \n c) 01111100 \n (don't include the brackets, only the letter of your choice)\n";
        cin >> Q8userans;
        if(Q8userans == "a"){
            cout << "correct \n";
        
        } else {
            cout << "Incorrect, the correct answer was a \n";
            hangman_calculation(num_wrong_questions = num_wrong_questions + 1);
            if (num_wrong_questions == 4){
                 
                 ending_message(num_wrong_questions);
            }
        }
        
        //Q9
        string Q9userans;
        cout << "Which sorting algorithm is the best to use on a large list of items? \n a) Binary sort \n b) Bubble sort \n c) Merge sort \n (don't include the brackets, only the letter of your choice) \n";
        cin >> Q9userans;
        if(Q9userans == "c"){
            cout << "correct \n";
        
        } else {
            cout << "Incorrect, the correct answer was c \n";
            hangman_calculation(num_wrong_questions = num_wrong_questions + 1);
            if (num_wrong_questions == 4){
                 
                 ending_message(num_wrong_questions);
            }
        }
        
        //Q10
        string Q10userans;
        cout << "What does a parallelogram shape symbol mean in a flowchart? \n a) Process \n b) Stop \n c) Start \n (don't include the brackets, only the letter of your choice) \n";
        cin >> Q10userans;
        if(Q10userans == "c"){
            cout << "correct \n";
        
        } else {
            cout << "Incorrect, the correct answer was c \n";
            hangman_calculation(num_wrong_questions = num_wrong_questions + 1);
            if (num_wrong_questions == 4){
                 
                 ending_message(num_wrong_questions);
            }
        }
        return 0;
    }

int hangman_calculation(int num_wrong_questions){
    ifstream stage1("hangman_stage1.txt");
    ifstream stage2("hangman_stage2.txt");
    ifstream stage3("hangman_stage3.txt");
    ifstream stage4("hangman_stage4.txt");
    
    if(num_wrong_questions == 1){
        string hangman_value_Q1;
        int i;
        
        if(! stage1){
            cout << "Error opening file";
        } else {
            while (getline(stage1, hangman_value_Q1))
            {
                cout << hangman_value_Q1 + "\n";
            }
            
        }
    }
    
    if(num_wrong_questions == 2){
        string hangman_value_Q2;
        int i;
        
        if(! stage2){
            cout << "Error opening file";
        } else {
            while (getline(stage2, hangman_value_Q2))
            {
                cout << hangman_value_Q2 + "\n";
            }
            
        }
    }
    
    if(num_wrong_questions == 3){
        string hangman_value_Q3;
        int i;
        
        if(! stage3){
            cout << "Error opening file";
        } else {
            while (getline(stage3, hangman_value_Q3))
            {
                cout << hangman_value_Q3 + "\n";
            }
            
        }
    }
    
    if(num_wrong_questions == 4){
        string hangman_value_Q4;
        int i;
        
        if(! stage4){
            cout << "Error opening file";
        } else {
            while (getline(stage4, hangman_value_Q4))
            {
                cout << hangman_value_Q4 + "\n";
            }
        }
    }
 
    return 0;
}

string ending_message(int num_wrong_questions){
    cout << "GAME OVER! \n you answered 4 incorrect questions \n";
    hangman_calculation(num_wrong_questions = 4);
    return 0;
}