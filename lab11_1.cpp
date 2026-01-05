
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;



int main() {

    cout << "Press Enter 3 times to reveal your future."<<endl;

    for (int i = 0 ; i< 3 ; i++) {
        cin.get();
    }
    
    srand(time(0));
    
    string grade[] = { "A" , "B+" , "B" ,"C+" , "C" , "D+" , "D" , "F" , "W"};
    
    int random = rand() % 9;
    
     cout << "You will get " <<grade[random] <<" in this 261102." << endl;




}
