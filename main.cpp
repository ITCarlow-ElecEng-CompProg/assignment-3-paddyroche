/**<
Patrick Roche
Exercise 3
Standard Deviation Calculator */

/**< Preprocessor directives */
#include <iostream>
#include <math.h>

using namespace std;

/**< Main Fucntion */
int main()
{
    /**< Variable Declerations and array */
    double num [10];
    double avg,sum = 0,top,topoverbottom,stddev;

    /**< Countin integer */
    int i;

    /**< i=0 is starting from 0; i<10 is telling the array to stop at 9; i++ is adding 1 at the end of each step to "i" */
    for(i=0;i<10;i++)
    {
        cout << "enter value" << i+1 << endl ;
        cin >> num[i];
    }

    /**< i=0 is starting from 0; i<10 is telling the array to stop at 9; i++ is adding 1 at the end of each step to "i" */
    for(i=0;i<10;i++)
    {
        /**< Starting at 0 and counting to 9- this is the mean X(bar)  */
        sum = sum + num[i];
    }

    /**< the sum divided by 10 elements of the array to get the average */
    avg = sum/10;

    /**< i=0 is starting from 0; i<10 is telling the array to stop at 9; i++ is adding 1 at the end of each step to "i" */
    for(i=0;i<10;i++)
    {
        /**< the whole topline of the equation */
        top = top + pow(num[i] - avg,2 );
    }

    /**< topline divided by 9, as n-1=10-1=9 */
    topoverbottom = top/9;


    /**< sqrt of everything for the stand dev */
    stddev = sqrt(topoverbottom);


    /**< presenting the standard deviation */
    cout << "stddev is: " << stddev ;


    return 0;
}
