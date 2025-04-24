# include <iostream>
using namespace std;
int main()
{

    // Leap year finder

    // int year;
    // cout<<"enter year ";
    // cin>>year;

    // if((year%4==0 && year%100!=0)||(year%400==0))
    // {
    //     cout<<"Leap Year";
    // }
    // else
    // {
    //     cout<<"Not a Leap Year";
    // }


    // Letter is Uppercase or Lowercase
    // char a;
    // cout<<"Enter Input";
    // cin>>a;
    // if(a>='A'&&a<='Z')
    // {
    //     cout<<"UpperCase";
    // }
    // else if(a>='a'&&a<='z')
    // {
    //     cout<<"LowerCase";
    // }
    // else
    // {
    //     cout<<"invalid";
    // }


    // 0-50 =10rs
    // 50-100 =20rs
    // 100-150=30rs
    // 150-200=40rs
    // 200 above = 50rs



    int unit;
    cout<<"Enter unit";
    cin>>unit;

    if(unit>=0 && unit<=50)
    {
        cout<<unit*10;
    }
    else if(unit>=50 && unit<=100)
    {
        cout<<50*10+(unit-50)*20;
    }
    else if(unit>=100 && unit<=150)
    {
        cout<<50*10+50*20+(unit-100)*30;
    }
    else if(unit>=150 && unit<=200)
    {
        cout<<50*10+50*20+50*30+(unit-150)*40;
    }
    else if(unit>=200)
    {
        cout<<50*10+50*20+50*30+50*40+(unit-200)*50;

    }
    else
    {
        cout<<"Invalid";
    }
   


   
 

}