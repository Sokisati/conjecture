#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x,peak;
    cout<<"sayi gir"<<endl;
    //some comment dudeee
    cin>>x;
    peak = x;
    //whaddup

   while(x>1)
   {

       if(x%2==0)
       {

           x = x/2;
           cout<<x<<endl;
           if(x > peak)
           {
              peak = x;
           }

       }

       else
        {

            x = 3*x + 1;
             cout<<x<<endl;
               if(x > peak)
           {
              peak = x;
           }

        }

   }

cout<<"zirve nokta: "<<peak<<endl;

return 0;
}
