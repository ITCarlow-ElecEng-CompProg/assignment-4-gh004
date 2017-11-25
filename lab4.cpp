/** Gearoid
 *  Hanrahan
 *  Lab 4
 *  Resistance of a Wire
 *
 *
 */



#include <iostream>
#include <math.h>
/**#define PI 3.141592*/

/**Defining name as sub function*/
double resistance (double rad, double length, double resitivity);


using namespace std;

/**main function*/
int main()
{
    /**Declaring variables*/
    double res , resitivity = 0 , length = 0 , rad = 0 ;

    while ( rad < = 0 )
    {
        /** Read in text */
        cout << "Enter Positive number for radius" << endl ;
        cin  >> rad ;
    }

    while ( length < = 0 )
    {
        cout << "Enter Positive number for length" << endl ;
        cin  >> length ;
    }

    while ( resitivity < = 0 )
    {
        cout << "Enter Positive number for resitivity" << endl ;
        cin  >> resitivity ;
    }
    /**making res equal to the returned value from the sub function resistance*/
    res = resistance (rad, length, resitivity);

    cout << "Resistance is:" << res <<endl ;

    return 0;
}


/**< sub function to calculate resistance */
double resistance (double rad, double length, double resitivity)
{
    /**< Declaring variables */
    double area, res;
    /**< Equation for area */
    area = M_PI * pow ( rad , 2 );
    /**< Equation for resistance */
    res = resitivity * ( length / area );

    return res;
}
