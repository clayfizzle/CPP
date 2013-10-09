#include <iostream>
using namespace std;

int main( ){
    
    //If they only enter ints this will be fine but... 
    //...I'm not sure how to do the error checking yet.
    int fst, snd, thd, temp;
    
    cout << "Enter an integer: ";
    cin >> fst;
    cout << "Enter another integer: ";
    cin >> snd;
    cout << "Do it again!!! : ";
    cin >> thd;

    cout << "Forward: " << fst << snd << thd << endl;
    cout << "Reverse: " << thd << snd << fst << endl;

    //or is int division is ok?
    cout << "Average: " << ((fst + snd + thd) / 3.0) << endl;
    
    //stupid simple "find max"
    if( fst > snd && fst > thd )
        { cout << "Max:     " << fst << endl; }
    if( snd > fst && snd > thd )
        { cout << "Max:     " << snd << endl; }
    if( thd > fst && thd > snd )
        { cout << "Mix:     " << thd << endl; }

    //stupid simple "find min"
    if( fst < snd && fst < thd )
        { cout << "Min:     " << fst << endl; }
    if( snd < fst && snd < thd )
        { cout << "Min:     " << snd << endl; }
    if( thd < fst && thd < snd ) 
        { cout << "Min:     " << thd << endl; }
}

/*************************************************************
]0;SchoolClay-Franciscos-MacBook:School clayfrancisco$ g++ -o Rev3.cpp RevThree.cpp
]0;SchoolClay-Franciscos-MacBook:School clayfrancisco$ ./Rev3.cpp
Enter an integer: 90
Enter another integer: 10
Do it again!!! : 900
Forward: 9010900
Reverse: 9001090
Average: 333.333
Mix:     900
Min:     10
*************************************************************/


