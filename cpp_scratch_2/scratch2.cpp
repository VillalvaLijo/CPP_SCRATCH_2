#include <iostream>
#include <string>

using namespace std;

int main(){

    

    cout << "Hello World"<<endl;

    //practice with booleans

    bool Go = true;
    bool Stop = false;
    string user_selection;

    // cout<<"Bool variable Go: "<<Go<<endl;
    // cout<<"Bool variable Stop: "<<Stop<<endl;

    // cout<<"Enter Go or Stop: ";
    // cin >> user_selection;

    // cout<<"You entered: "<<user_selection<<endl;

    //create an equivalence test for the string entered

    // if (user_selection == "Go"){
    //     cout<<"Let's Go"<<endl;
    // }
    // else if (user_selection == "Stop"){
    //     cout <<"You Entered Stop"<<endl;
    // }
    // else{
    //     cout<<"I don't understand your entry"<<endl;
    // }

    //cout<< "Let's play with Const"<<endl;

    //const int Ten = 10;
    //cin >> int user_int; this dosen't work.
    //cout <<"The int Ten is: "<<Ten<<endl;
    // cout<<"Let's look at the result of Ten+=10:"<<endl;
    // Ten += 10;
    // cout<<"Ten after manipulation: "<< Ten<<endl;

    //doing Ten+= 10; errors out the program.
    
    const int Lbs_per_stn = 14;
    int lbs;
    cout << "Enter your weight in pounds: ";
    cin >> lbs;

    int stone = lbs / Lbs_per_stn; //whole stone...CPP rounds
    int pounds = lbs % Lbs_per_stn; // remander in pounds
    cout << lbs << "pounds are " << stone << "stone, "<<pounds<<" pound(s).\n";


    return 0;
}