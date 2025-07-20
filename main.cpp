// ------------- FILE HEADER -------------
// Author: Yusong Jin
// Assignment: 4
// Date: July 15
// Description: Phrases and subphrases
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter: 4
// Participation: 100%
// Challenge: 100%
// Labs: 100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: yes
// B. OUTPUT [yes/no]: yes
// C. CALCULATIONS [yes/no]: no calculations needed
// D. LOGIC and ALGORITHMS [yes/no]: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: yes
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <string>
using namespace std;

int main() {
// Print welcome message
   cout << "Welcome to the Phrases and Subphrases program!" << endl << endl;

// Read prase 1
   cout << "Enter Phrase 1: ";
   string phrase1;
   getline(cin, phrase1);
   cout << "You entered: " << phrase1 << endl;

// Read phrase 2
   cout << "Enter Phrase 2: ";
   string phrase2;
   getline(cin, phrase2);
   cout << "You entered: " << phrase2 << endl << endl;

// Check if phrase1 is found in phrase2
   size_t found1 = phrase2.find(phrase1);
   if (found1 != string::npos) {
       cout << phrase1 << " is found in " << phrase2 << endl;
       cout << phrase2.substr(found1) << endl << endl;
   }
  
// Check if phrase2 is found in phrase1
   size_t found2 = phrase1.find(phrase2);
   if (found2 != string::npos) {
       cout << phrase2 << " is found in " << phrase1 << endl;
       cout << phrase1.substr(found2) << endl << endl;
   }

// Check if both phrases match exactly
   if (phrase1 == phrase2) {
       cout << "Both phrases match" << endl << endl;
   }

// If no matches found
   if (found1 == string::npos && found2 == string::npos && phrase1 != phrase2) {
       cout << "No match" << endl << endl;
   }

// Print thank you message
   cout << "Thank you for using my program!" << endl;

   return 0;
}




// ------------- DESIGN -------------
/* 
Program Name: Phrases and subphrases

Program Description: Phrase Matcher

Design:
A. INPUT
Define the input variables including name data type. 
string phrase1;
string phrase2;

B. OUTPUT
Define the output variables including data types. 
string match_result;
string substring; 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
There are no calculations needed.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 

BEGIN
PRINT "Welcome to the Phrases and Subphrases program!"

PRINT "Enter Phrase 1: "
READ phrase1 FROM USER INPUT
PRINT "You entered: " + phrase1

PRINT "Enter Phrase 2: "
READ phrase2 FROM USER INPUT
PRINT "You entered: " + phrase2

SET found1 = FIND phrase1 IN phrase2
IF found1 IS NOT string::npos THEN
PRINT phrase1 + " is found in " + phrase2
PRINT SUBSTRING OF phrase2 STARTING AT found1
END IF

SET found2 = FIND phrase2 IN phrase1
IF found2 IS NOT string::npos THEN
PRINT phrase2 + " is found in " + phrase1
PRINT SUBSTRING OF phrase1 STARTING AT found2
END IF

IF phrase1 EQUALS phrase2 THEN
PRINT "Both phrases match"
END IF

IF found1 IS string::npos AND found2 IS string::npos AND phrase1 != phrase2 THEN
PRINT "No match"
END IF

PRINT "Thank you for using my program!"
END

SAMPLE RUNS
Copy from assignment document.
Welcome to the Phrases and Subphrases program!

Enter Phrase 1: truck
You entered: truck
Enter Phrase 2: firetruck is here
You entered: firetruck is here

truck is found in firetruck is here
truck is here

Thank you for using my program!


Welcome to the Phrases and Subphrases program!

Enter Phrase 1: the green grass grows
You entered: the green grass grows
Enter Phrase 2: green grass
You entered: green grass

green grass is found in the green grass grows
green grass grows

Thank you for using my program!


Welcome to the Phrases and Subphrases program!

Enter Phrase 1: He was between a rock and a hard place
You entered: He was between a rock and a hard place
Enter Phrase 2: rock
You entered: rock

rock is found in He was between a rock and a hard place
rock and a hard place

Thank you for using my program!

*/