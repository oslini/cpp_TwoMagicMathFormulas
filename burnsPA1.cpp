/* Name: Angela Burns
 * Class: CSCI 1410-002
 * Description: programming assignment one computes math formulas
 * Status: successfully compiled on CLion */

#include <iostream> //needed for cin and cout
#include <string> //needed to use string
#include <fstream> // needed to read file
using namespace std; //needed for string and cin and cout\

int main() {

    //variables
    int num, tensNum, onesNum, reverseNum, subtractNum, originalNum;
    ifstream inFile;


    //Welcome menu
    int i=0;
    while (i < 1) {
        cout << "Welcome to the \“magic\” math formulas simulator \n\n"
                "Written by: Angela Burns (S# 104265893) \n\n"
                "Please choose one of the following options: \n"
                "1.\tAlmost Always 99\n"
                "2.\tAlways 3\n"
                "3.\tExit \n"
                "4.\tAlways 3" << endl;
        cin >> num;
        if ((num < 0) || (num > 5)) {
            cout << "Sorry, unfortunately that was not a valid option. Please try again." << endl;
        }
        else{
            i++;}
    }//end of welcome menu

    int s = num;
    switch (s) {
        //If the user chose ONE
        case 1:
            //if digit is less than 10 multiply digit by 10
            if (num < 10) {
                num *= 10;
                cout << "The number was less than 10. The new number is: " << num << endl;
            }

            //identify first digit
            tensNum = num / 10;
            cout << "The first digit is: " << tensNum << endl;

            //identify second digit
            onesNum = num - (tensNum * 10);
            cout << "The second digit is: " << onesNum << endl;

            //reverse the number
            reverseNum = (onesNum * 10) + tensNum;
            cout << "The new revered number is = " << reverseNum << endl;

            //subtracting number
            subtractNum = num - reverseNum;
            cout << "Subtracting the new number from the first = " << subtractNum << endl;

            //if number is negative this will make it positive
            if (subtractNum < 0) {
                subtractNum *= -1;
                cout << "The number was negative. The new positive number is now = " << subtractNum << endl;
            }

            // if number is less than ten this will increase it
            if (subtractNum < 10) {
                subtractNum *= 10;
                cout << "The number was less than 10. The new number is: " << subtractNum << endl;
            }

            //identify first digit
            tensNum = subtractNum / 10;
            cout << "The first digit of the new number is: " << tensNum << endl;

            //identify second digit
            onesNum = subtractNum - (tensNum * 10);
            cout << "The second digit of the new number is: " << onesNum << endl;

            //reverse the number
            reverseNum = (onesNum * 10) + tensNum;
            cout << "Reversed new number is now = " << reverseNum << endl;

            //add the numbers together
            num = subtractNum + reverseNum;
            cout << "Adding the new number to the first reversed number = " << num << endl;

            if (num == 99)//if the answer is correct
            {
                cout << "CONGRATULATIONS, the final answer is: " << num << endl;
            } else //if the answer is wrong
                cout << "ERROR. There was a miscalculation, your final answer is not 99. It is: " << num << endl;
            break;

            //if the user chose option TWO
        case 2:{
            //ask user for a number
            cout << "Enter a number please: " << endl;
            cin >> num;
            originalNum = num;

            //multiply number by 2
            num *= 2;
            cout << "Doubling your number = " << num << endl;

            //add 9
            num += 9;
            cout << "Adding 9 = " << num << endl;

            //subtract 3
            num -= 3;
            cout << "Subtracting 3 = " << num << endl;

            //divide by 2
            num /= 2;
            cout << "Dividing by 2 = " << num << endl;

            //subtract original number
            num -= originalNum;
            cout << "Subtracting the original number = " << num << endl;

            if (num == 3)//if the answer is correct
            {
                cout << "CONGRATULATIONS, the final answer is: " << num << endl;
            } else //if the answer is wrong
                cout << "ERROR. There was a miscalculation, your final answer is not 3. It is: " << num << endl;
            break;
         }

         case 3:
             cout << "EXITing the program now \n"
                     "Goodbye." << endl;
            break;

        case 4:
            //reading the file
            inFile.open("numFile.txt");

            //checks if the file was opened
            if (!inFile) {
                cerr << "Unable to open file numFile.txt";
                exit(1);   // call system to stop
            }

            //retrieve number form file
            while (!inFile.eof()){
                inFile >> num;
                cout << "The original number is: " << num << endl;
            }

            //multiply number by 2
            originalNum = num;
            num *= 2;
            cout << "Doubling the number = " << num << endl;

            //add 9
            num += 9;
            cout << "Addding 9 = " << num << endl;

            //subtract 3
            num -= 3;
            cout << "Subtracting 3 = " << num << endl;

            //divide by 2
            num /= 2;
            cout << "Dividing by 2 = " << num << endl;

            //subtract original number
            num -= originalNum;
            cout << "Subtracting the original number = " << num << endl;

            if (num == 3)//if the answer is correct
            {
                cout << "CONGRATULATIONS, the final answer is: " << num << endl;
            } else //if the answer is wrong
                cout << "ERROR. There was a miscalculation, your final answer is not 3. It is: " << num << endl;

            break;

    }
    return 0;
}
