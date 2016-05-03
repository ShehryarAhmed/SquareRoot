#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double squareroot(double num){
double start = 0.0 , End = num , temp = 0.0;
int chk = 50;
while(chk != 0){
        temp = (start + End)/2;
        if((temp*temp) == num ){

         return temp;
        }
        else if( temp*temp > num){
            End = temp;
        }
        else{
            start = temp;
        }
chk--;
}
return temp;
}
int main()
{
    double getresult = 0.0 , num = 0.0;
    cout << "\n\n\t\t\tGet Square Root"<<endl;
    cout << "\t\t Enter Number and Get Square Root : ";cin>>num;
    getresult = squareroot(num);
    cout << "Square Root OF "<< num << " : " << "+"<< getresult << " And -" << getresult;
    return 0;

    }
