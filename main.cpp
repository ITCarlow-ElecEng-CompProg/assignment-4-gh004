/** Gearoid
*  Hanrahan
*  Lab 4
*  Resistance of a Wire
*
*
*/



#include <iostream>
#define PI 3.141592
#include <math.h>
    /** Double variable */
    double resistance (double rad, double length, double resitivity);

    using namespace std;

int main()
    {   //Local Variable Declaration
        double res,resitivity=0,length=0,rad=0;
        /** While Loop */
        while (rad<=0)
    {
        cout<<"Enter Positive number for radius"<<endl;
        cin>>rad;
    }
        while (length<=0)
    {
        cout<<"Enter Positive number for length"<<endl;
        cin>>length;
    }
        while(resitivity<=0)
    {
        cout<<"Enter Positive number for resitivity"<<endl;
        cin>>resitivity;
    }
        /** Calculations carried out */
        res = resistance (rad, length, resitivity);

        cout<< "Resistance is:"<<res<<endl;

        return 0;
    }
        //Function Variable Declaration
        double resistance (double rad, double length, double resitivity)
    {
        double area, res;
        /** calculated results */
        area = PI * pow(rad,2);

        res= resitivity * ( length / area );
        /** returned res to the function */
        return res;
    }
