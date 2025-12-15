#include <iostream>
#include <string>

using namespace std;

int main() {
    string playerName;
    int numCorrect = 0;
    int numIncorrect = 0;
    int totalMarks = 0;
     
     
     
    cout<<"KAnwal Rai {FA22- BSCS-0068} "<<endl ;
    cout << "Welcome to the quiz!\n"<<endl; 
	cout<<"Please enter your name\n: ";
    getline(cin, playerName);

    // Question 1
    cout << "\n1. What is the capital of France?" << endl;
    cout << "A. Paris\nB. Berlin\nC. London\nD. Madrid\n";
    char answer1;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer1;
    if (answer1 == 'A' || answer1 == 'a') {
        numCorrect++;
        totalMarks++;
    } else {
        numIncorrect++;
        totalMarks++;
    }

    // Question 2
    cout << "\n2. Who invented the telephone?" << endl;
    cout << "A. Alexander Graham Bell\nB. Thomas Edison\nC. Benjamin Franklin\nD. Nikola Tesla\n";
    char answer2;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer2;
    if (answer2 == 'A' || answer2 == 'a') {
        numCorrect++;
        totalMarks++;
    } else {
        numIncorrect++;
        totalMarks++;
    }

    // Question 3
    cout << "\n3. What is the highest mountain in the world?" << endl;
    cout << "A. Mount Everest\nB. Mount Kilimanjaro\nC. Mount Fuji\nD. Mount McKinley\n";
    char answer3;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer3;
    if (answer3 == 'A' || answer3 == 'a') {
        numCorrect++;
        totalMarks++;
    } else {
        numIncorrect++;
        totalMarks++;
    }

    // Question 4
    cout << "\n4. Who wrote the play 'Hamlet'?" << endl;
    cout << "A. William Shakespeare\nB. George Bernard Shaw\nC. Oscar Wilde\nD. Samuel Beckett\n";
    char answer4;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer4;
    if (answer4 == 'A' || answer4 == 'a') {
        numCorrect++;
        totalMarks++;
    } else {
        numIncorrect++;
        totalMarks++;
    }

    // Question 5
    cout << "\n5. What is the chemical symbol for gold?" << endl;
    cout << "A. Au\nB. Ag\nC. Cu\nD. Fe\n";
    char answer5;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer5;
    if (answer5 == 'A' || answer5 == 'a') {
        numCorrect++;
        totalMarks++;
    } else {
        numIncorrect++;
        totalMarks++;
    }

    // Question 6
    cout << "\n6. What is the largest planet in our solar system?" << endl;
    cout << "A. Jupiter\nB. Earth\nC. Saturn\nD. Neptune\n";
    char answer6;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer6;
    if (answer6 == 'A' || answer6 == 'a') {
        numCorrect++;
        totalMarks++;
    } else {
        numIncorrect++;
        totalMarks++;
    }

    // Question 7
    cout << "\n7. What is the formula for water?" << endl;
    cout << "A. H2SO4\nB. NaCl\nC. H2O\nD. CO2\n";
    char answer7;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer7;
    if (answer7 == 'C' || answer7 == 'c') {
        numCorrect++;
        totalMarks++;
    } else {
        numIncorrect++;
        totalMarks++;
    }

    // Question 8
    cout << "\n8. Who was the first person to step on the moon?" << endl;
    cout << "A. Neil Armstrong\nB. Buzz Aldrin\nC. Michael Collins\nD. Yuri Gagarin\n";
    char answer8;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer8;
    if (answer8 == 'A' || answer8 == 'a') {
        numCorrect++;
        totalMarks++;
    } else {
        numIncorrect++;
        totalMarks++;
    }

    // Question 9
    cout << "\n9. Which country won the 2018 FIFA World Cup?" << endl;
    cout << "A. France\nB. Germany\nC. Brazil\nD. Argentina\n";
    char answer9;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer9;
    if (answer9 == 'A' || answer9 == 'a') {
        numCorrect++;
        totalMarks++;
    } else {
        numIncorrect++;
        totalMarks++;
    }

    // Question 10
    cout << "\n10. Who painted the 'Mona Lisa'?" << endl;
    cout << "A. Vincent van Gogh\nB. Pablo Picasso\nC. Leonardo da Vinci\nD. Michelangelo\n";
    char answer10;
    cout << "Enter your answer (A/B/C/D): ";
    cin >> answer10;
    if (answer10 == 'C' || answer10 == 'c') {
        numCorrect++;
        totalMarks++;
    } else {
        numIncorrect++;
        totalMarks++;
    }

    // Display results
    cout << "\nResults for " << playerName << ":" << endl;
    cout << "Number of correct answers: " << numCorrect << endl;
    cout << "Number of incorrect answers: " << numIncorrect << endl;
    cout << "Total marks: " << totalMarks-numIncorrect << "/10" << endl;

    return 0;
}

