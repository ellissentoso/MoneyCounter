#include <iostream>
#include <string>
#include "../!includes/mom_counter_lib.h"
using namespace std;

// Explain the error handling and your strategy
int main()
{
    /***
    //        mom_counter_lib c;
    //        c.incr(9900);
    //        c.show();

    //        if (c.overflow()) { // when it's overflowing, tell user to exit the program
    //            cout<<"Overflow Warning. Please press [Q] to quit the program."<<endl;
    //        }

    //        cout<<endl;
    //        c.incr(150);
    //        c.show();
    //        cout<<endl;


    //        if (c.overflow()) { // when it's overflowing, tell user to exit the program
    //            cout<<"Overflow Warning. Please press [Q] to quit the program."<<endl;
    //        }


    //        cout<<endl<<endl;

    ***/
    char choice;

    //variables for my loops. I'm using a loop to do the restriction of 1-9
    int j = 0;
    int i = 0;

    mom_counter_lib C1;

    cout<<"Total Amount: "<<endl;
    C1.show();

    cout<<endl<<endl;

    cout<<"Step 2. Enter amount "<<endl;
    cout<<endl;
    cout<<"Press either of the following: "<<endl;
    cout<<endl;

    cout<<"Step 1. Press [A] for thousands\n";
    cout<<"Step 1. Press [S] for hundreds\n";
    cout<<"Step 1. Press [D] for tens\n";
    cout<<"Step 1. Press [F] for dollars\n";
    cout<<endl;
    cout<<"Press [R] to reset the program\n"<<endl;
    cout<<"Press [Q] to quit the program\n"<<endl;

    cin>>choice;

    do
    { // decrementing the starting budget for grocery shopping at 100
        // Thus, this will not be an infinite loop

        if (C1.overflow()) { // when it's overflowing, tell user to exit the program
            cout<<"Overflow Warning. Please press [Q] to quit the program."<<endl;
        }

        cout<<endl<<endl;


        cin>>j; // j is the number the user enter and this allows me to do
        // my restriction 1-9 range

        if (!(j <= 9 && 0<j)) {

            cout<<"Only number between 1 to 9 allowed"<<endl;

        }

        switch (toupper(choice)) {

        // increased by 1
        case 'A':
            for (i = 0; i < j; i++) { //loops ensure that it's within 1-9 range
                C1.incr1000(); // increase by cent
            }
            break;
        case 'S':
            for ( i = 0; i < j; i++) { //loops ensure that it's within 1-9 range
                C1.incr100(); // increase by 10 cents

            }
            break;
        case 'D':
            for ( i = 0; i < j; i++){ //loops ensure that it's within 1-9 range
                C1.incr10();

            }
            break;
        case 'F':
            for ( i = 0; i < j; i++) { //loops ensure that it's within 1-9 range
                C1.incr1();

            }
            break;
        case 'Q':
            cout<<"Terminating program "<<endl;
            //return 0; //terminating
            break;
        default:
            cout<<"Wrong input. Try again";
            break;

        } //switch

        cout<<"Total Amount: "<<endl;
        C1.show();

        cout<<endl<<endl;

        cout<<"Step 2. Enter number from 1 to 9"<<endl;

        cout<<endl;
        cout<<"Press either of the following: "<<endl;
        cout<<endl;

        cout<<"Step 1. Press [A] for thousands\n";
        cout<<"Step 1. Press [S] for hundreds\n";
        cout<<"Step 1. Press [D] for tens\n";
        cout<<"Step 1. Press [F] for dollars\n";
        cout<<endl;
        cout<<"Press [R] to reset the program\n"<<endl;
        cout<<"Press [Q] to quit the program\n"<<endl;

        cin>>choice;

     } while (toupper(choice) != 'Q'); //while

    return 0;

}
