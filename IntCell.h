//Just adding comments for playing with version control.  Yay! Git.
//
#ifndef INTCELL_H
#define INTCELL_H

class IntCell{
    public:
        
        //IntCell();
        //Default Constructor  " IntCell m;  //NOT IntCell m(); "
        explicit IntCell( int initVal = 0 );
        //Constructor w/initial value
        //IntCell( int initVal );
        
        //Non-destrcutive add
        int  operator + ( IntCell x );
        //Destructive add
        void plusEq( IntCell x );

        int  read( ) const;
        void write( int x );
                            
    private:        
        int storedVal;

};
#endif
