# include<iostream>
using namespace std;

int main(){
    // for 
    for (int count = 1; count <= 10; count = count + 1){
        cout << "Muhammad Bilal" << endl;
    }

    // counting from 1 to 5

    for (int i = 1; i <= 5; i ++ ){
        cout << i << endl ;
    }

    // counting from 51 to 69

    for (int count = 51; count <= 69; count ++){
        cout << count << endl;
    }

    for (int count = 51; count < 70; count ++){
        cout << count << endl;
    }


    for (int i = 1; i <=10; i ++){
        // cout << i << endl;

        if (i == 5){
            break;
        }
        cout << i << endl;
    }


    for (int i = 1 ; i <= 6; i = i+1){
        // cout << i << " "; 
        if (i == 2){
            continue;
        }
        cout << i << " ";
    }

    // ++++++++++++++++++++++++++++++++++++++++++++ While loop +++++++++++++++++++++++++++++++++++++++++++++++


    for (int i = 1; i <= 6; i ++){

        cout << i << " ";
    }


    int a = 1 ; 

    while (a <= 5){
        cout << a << " ";
        a = a + 1;
    }



    return 0;
}
