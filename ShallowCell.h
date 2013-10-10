#ifndef SHALLOWCELL_H
#define SHALLOWCELL_H

class ShallowCell{

    public:
        
        explicit ShallowCell( int initVal = 0 );
       
        ShallowCell( const ShallowCell &refX );
       
       ~ShallowCell( );
        
        
        /* -- Methods -- */
        const ShallowCell* operator = ( const ShallowCell &refX );
        
        const ShallowCell operator + ( const ShallowCell &refX );
        
        void plusEq( const ShallowCell &refX ); 
        
        int  read( ) const;
        void write( int x );

        
    private:
        int *storedVal;
};
#endif
