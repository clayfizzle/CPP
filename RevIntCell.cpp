/*
 *  GIVES :  SEGMENT FAULT 11 ERROR
 *           when the ShallowCell constructors are called NOT compiled.  It's a runtime error.
 *//**********************/
#include <iostream>
#include "IntCell.h"
#include "ShallowCell.h"

using namespace std;

/* -- Constructors/Destructors -- */
//"Default" Constructors
IntCell::IntCell( int initVal ) : storedVal( initVal ){
}
//ShallowCell Constructor
ShallowCell::ShallowCell( int initVal ){
    *storedVal = initVal;    
}
//Copy Constructor
ShallowCell::ShallowCell( const ShallowCell &refX ){
    storedVal = new int( *refX.storedVal );
}

//Destructor
ShallowCell::~ShallowCell( ){
    delete storedVal;
}

/* -- Methods -- */
// (=) operator overloading for SHALLOW COPY
const ShallowCell& ShallowCell::operator = ( const ShallowCell &refX ){
    if( this != &refX )
        { *storedVal = *refX.storedVal; }
    return *this;
}
/*
ShallowCell ShallowCell::operator + ( const ShallowCell &refX ){
    return ShallowCell( &storedVal + &refX.read() );
}
*/
//I think this function i going to add address location vals not the int vals cuz they're pointers
void ShallowCell::plusEq( const ShallowCell &refX ){
    *storedVal = *storedVal + *refX.storedVal;
} 

// (+) operator overloading for NON-destructive  addition
int IntCell::operator + ( IntCell x ){
    return (storedVal + x.storedVal);
}

// (+=) operator overloading for descructive addition.
void IntCell::plusEq( IntCell x ){
    storedVal = storedVal + x.storedVal;
}

int IntCell::read( ) const
    { return storedVal; }

void IntCell::write( int x )
    { storedVal = x; }

int ShallowCell::read( ) const
    { return *storedVal; }

void ShallowCell::write( int x )
    { *storedVal = x; }

 ////--------------\\\\
//// ---  MAIN  --- \\\\

int main( int argc, char *argv[] ){
//    ShallowCell s1(52);

//    ShallowCell s2;

    IntCell i1(25);

    IntCell i2;

    cout << "Cell i1: " << i1.read() << "\nCell i2: " << i2.read() << endl;
//    cout << "Cell s1: " << s1.read() << "\nCell s2: " << s2.read() << endl;


    i1.write(15); 
    i2.write(i1.read());

//    s1.write(51); 
//    s2.write(s1.read());

    cout << "Cell i1: " << i1.read() << "\nCell i2: " << i2.read() << endl;
//    cout << "Cell s1: " << s1.read() << "\nCell s2: " << s2.read() << endl;


}


