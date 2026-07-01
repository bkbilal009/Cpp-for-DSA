#include<iostream>
using namespace std;

int main(){

    char grade ;
    cout << "Enter your grade : ";
    cin >> grade;

    if (grade == 'A'){
        cout << "your marks will be in range of 90 to 100 " << endl;
    }
    else if (grade == 'B'){
        cout << "your marks will be in range of 80 to 90 " << endl;
    }
    else if (grade == 'C'){
        cout << "your marks will be in range of 70 to 80 " << endl;
    }
    else if (grade == 'D'){
        cout << "your marks will be in range of 60 to 70 " << endl;
    }
    else {
        cout << "your marks will be in range of 0 to 60 " << endl;
    }
    return 0;
}
