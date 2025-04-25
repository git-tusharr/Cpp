#include <iostream>
using namespace std;

int main()
   
{
    // // For loop

    // for (int i = 0; i < 5; i++) {
    //     cout << "i = " << i << endl;
    // }




    // // While loop

    // int i = 0;
    // while (i < 5) {
    //     cout << "i = " << i << endl;
    //     i++;
    // }


    // // Do while loop
    // int i = 0;
    // do {
    //     cout << "i = " << i << endl;
    //     i++;
    // } while (i < 5);
    




    // Que. sum of n natural number
    // int sum=0;
    // for(int i=1;i<=10;++i)
    // {
    //     sum=sum+i;
    // }
    // cout<<sum;


    // Factorial 


    // int factorial=1;
    // for(int i=1;i<=5;++i)
    // {
    //     factorial=factorial*i;
    // }
    // cout<<factorial;

    // int factorial=1;
    // for(int i=1;i<=6;++i)
    // {
    //     factorial=factorial*i;
    // }
    // cout<<factorial;



    // Prime Number 

    int number=9;
    int counter=0;
        for(int i=1;i<=number;++i)
        {
            if(number%i==0)
            {
                counter++;
            }
        }
        if(counter==2)
        {
            cout<<"prime number";
        }
        else
        {
            cout<<number<<" is not a prime number";
        }













}
