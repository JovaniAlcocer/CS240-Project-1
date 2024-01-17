#include <iostream>
using namespace std;
#include "stack.h"

int main(){

    int  i;

    char color,candy,candyy,candyyy;
    Stack pezcandy;
    Stack pezcandynoy;

    cout<<"What are the colors of the Pez candy ? ";
    //for loop, to ask the user for 10 inputs/color in captial letters
        for (int i = 0; i < 10; i++) {
        cin >> color; //stores the letter in color
        pezcandy.push(color); //pushes color inside the stack called pezcandy
    }
    
    while(!pezcandy.empty()){ //while pexcandy not empty
        candyy = pezcandy.top(); //let candyy = top of pezcandy
        if (candyy != 'Y'){ //if the top letter is not equal to Y
            pezcandynoy.push(candyy); //we store it in the new stack, which will hold the the colors without the Y
        }
        pezcandy.pop(); //pop, so that we can go to the next value in the stack.
    }
    //Next part will print the pexcandynoy stack.
    cout<<" The remaining candy you have after your brother took his favorite is : ";
    
    while(!pezcandynoy.empty()){
        candyyy = pezcandynoy.top();   //I used a while loop to print the stack with out the Y, since I encountered problems in my end when using the stack.h and stack.cpp files in brightspace.
        cout << " " << candyyy;   // So i printed like this to see if pezcandynoy printed the desired results, which it did!
        pezcandynoy.pop();
    }
 //  pezcandy.display(cout);
//The display function doesnt work for me so I printed with the method above. Both should work though.
 return 0;

}