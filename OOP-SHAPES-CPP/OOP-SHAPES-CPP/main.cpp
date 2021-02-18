//
//  main.cpp
//  OOP-SHAPES-CPP
//
//  Created by Samuel Villalva Lijo on 10/16/20.
//

#include <iostream>
#include "shapes.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    using namespace std;
    
    cout<< "GET LIT"<<endl;
    cout<< "This program views shapes in cartesian cordinates entered by user and then calculates area for 2-d shapes and volume for 3-d shapes"<<endl;
    
    float point_1, point_2;
    cout<<"let's make a line"<<endl;
    cout<<"Enter a float for point 1:";
    cin>>point_1;
    cout<<"You enter: "<<point_1<<" for point_1\n";
    cout<<"Now enter a float for point 2:";
    cin>>point_2;
    cout<<"You entered: "<<point_2<<" for point_2"<<endl;
    
    
    
    return 0;
}
