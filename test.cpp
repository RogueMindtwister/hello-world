#include <iostream>
using namespace std;

void displayText(){
    cout << "Displaying text..." << endl;
    cout << "This text is amazing. <3" << endl;
}

int main(){
    cout << "Hello World!" << endl;
    for (int i = 0; i < 100; i++){
        cout << "Value of i: " << i << endl;
    }
       
    displayText();
    
    cout << "Press ENTER to continue...";
    cin.get();
    return 0;
}
