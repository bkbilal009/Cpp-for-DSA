#include<iostream>
using namespace std;

int main(){
// If statement 

    int budget;
    cout << "Enter your budget : " ; 
    cin >> budget;

    if (budget > 200000){
        cout<< "You can buy scorpio.. "<< endl;
    }
    else{
        cout << "You can't vote " << endl;
    }

    int age = 12;
    
    if (age > 18){
        cout << "you can vote "<< endl;

    }
    else {
        cout << "You can't vote " << endl;
    // }


    // If else statements 

    int marks = 53;

    if (marks > 90){
        cout << "Grade A";
    }
    else if(marks > 80){
        cout << "Grade B";
    }
    else if(marks > 70){
        cout << "Grade C";
    }
    else if( marks > 60){
        cout << "Grade D";
    }
    else{
        cout << "You failed";
    }


    // Nested if 

    int height ;
    cout << "Enter your height in feet : " ;
    cin >> height;

    int weight ; 
    cout << "Enter your weight : ";
    cin >> weight;

    if (height > 70){
        if (weight > 70){
            cout << "You got a good BMI "<<endl;

        }
        else{
            cout << "Bhi tuj se nai ho payega " << endl;
        }

    }
    else {
        cout << "Complain dila dun ? " << endl;
        }



    return 0;
}
