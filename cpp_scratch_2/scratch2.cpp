#include <iostream>
#include <string>

using namespace std;

int main(){

    

    cout << "Hello World"<<endl;

    //practice with booleans

    bool Go = true;
    bool Stop = false;
    string user_selection;

    cout<<"Bool variable Go: "<<Go<<endl;
    cout<<"Bool variable Stop: "<<Stop<<endl;

    cout<<"Enter Go or Stop: ";
    cin >> user_selection;

    cout<<"You entered: "<<user_selection<<endl;

    return 0;
}