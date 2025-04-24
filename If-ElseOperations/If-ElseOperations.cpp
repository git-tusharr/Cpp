# include <iostream>
using namespace std;
int main()
{


// conditional statements=statements works on conditions
// ()
// true  if()
// true false if else
// true false other if else if else



// int number;
// cout<<"enter the number";
// cin>>number;
// if(number!=0 && number%2==0)
// {
//     cout<<"true";
// }
// else if(number==0)
// {
//     cout<<"invalid input";
// }
// else
// {
//     cout<<"false";
// }


// // the number is even or odd

// int number;
// cout<<"enter the number";
// cin>>number;

// if(number%2==0)
// {
//     cout<<"the given number is even";
// }
// else if(number==0)
// {
//     cout<<"the given number is zero";
// }
// else
// {
//     cout<<"the given number is odd";
// }



// //check that the moth has how manay days

// int month;
// cout<<"enter the month from 1-12";
// cin>>month;
// if(month==1)
// {
//     cout<<"jan"<<"31 days";
// }
// else if(month==2)
// {
//     cout<<"feb"<<"28 days";

// }

// else if(month==3)
// {
//     cout<<"march"<<"31 days";

// }
// else if(month==4)
// {
//     cout<<"april"<<"30 days";

// }
// else if(month==5)
// {
//     cout<<"may"<<"31 days";

// }
// else if(month==6)
// {
//     cout<<"june"<<"30 days";

// }
// else if(month==7)
// {
//     cout<<"july"<<"31 days";

// }
// else if(month==8)
// {
//     cout<<"aug"<<"31 days";

// }
// else if(month==9)
// {
//     cout<<"sep"<<"30 days";

// }
// else if(month==10)
// {
//     cout<<"oct"<<"31 days";

// }
// else if(month==11)
// {
//     cout<<"nov"<<"30 days";

// }
// else if(month==12)
// {
//     cout<<"dec"<<"31 days";

// }
// else{
//     cout<<"inv month number";
// }


// int month;
// cout<<"enter the month number ";
// cin>>month;

// if(month==1)
// {
//     cout<<"the month is january and has 31 days";
// }
// else if (month==2)
// {
//     cout<<"the month is feburary and has 28/29 days";
// }
// else if (month==3)
// {
//     cout<<"the month is March and has 31 days";
// }
// else if (month==4)
// {
//     cout<<"the month is april and has 30 days";
// }
// else if (month==5)
// {
//     cout<<"the month is may and has 31 days";
// }
// else if (month==6)
// {
//     cout<<"the month is june and has 30 days";
// }
// else if (month==7)
// {
//     cout<<"the month is july and has 31 days";
// }
// else if (month==8)
// {
//     cout<<"the month is august and has 31 days";
// }
// else if (month==9)
// {
//     cout<<"the month is september and has 30 days";
// }
// else if (month==10)
// {
//     cout<<"the month is october and has 31 days";
// }
// else if (month==11)
// {
//     cout<<"the month is november and has 30 days";
// }
// else if (month==12)
// {
//     cout<<"the month is december and has 31 days";
// }
// else
// {
//     cout<<"Invalid month number";
// }


// int month;
// cout<<"enter month between 1-12";
// cin>>month;
// if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
// {
//     cout<<"31 days";
// }
// else if(month==2)
// {
//     cout<<"28/29 days";
// }
// else if(month==4 || month==6 || month==9 || month==11)
// {
//     cout<<"30 days";
// }
// else{
//     cout<<"inv input";
// }


 
// {
//     int path;
//     cout << "Enter the path: ";
//     cin >> path;

//     if (path == 1)
//     {
//         cout << "Enter the path: ";
//         cin >> path;

//         if(path == 2)
//         {
//             cout << "Enter the path: ";
//             cin >> path;

//             if (path == 3)
//             {
//                 cout << "Enter the path: ";
//                 cin >> path;

//                 if (path == 4)
//                 {
//                     cout << "Reached";
//                 }
//                 else
//                 {
//                     cout << "Invalid path";
//                 }
//             }
//             else if(path==4)
//             {
//                 cout << "Reached";
//             }
//             else
//             {
//                 cout << "Invalid path" ;
//             }
//         }
//         else if(path==3)
//         {
//             cout << "Enter the path: ";
//             cin >> path;

//             if(path==4)
//             {
//                 cout << "reached ";
//             }
//             else
//             {
//                 cout<<"invalid path";
//             }
//         }
       
    
//     else if(path==4)
//     {
//         cout << "reached ";
//         cin >> path;

//         if(path==3)
//         {
//             cout << "Enter the path: ";
//             cin >> path;

//             if(path==4)
//             {
//             cout << "reached ";
//             }
//             else
//             {
//                 cout << "Invalid path" ;
//             }

//         }
//     }
    
//     } else
//     {
//         cout << "Invalid path" ;
//     }
// }
// }



int path;
cout<<"enter the path ";
cin>>path;

if(path==1)
{
    cout<<"enter path";
    cin>>path;
    if(path==2)
    {
        cout<<"enter path";
        cin>>path;
        if(path==3)
        {
            cout<<"enter path";
            cin>>path;
            if(path==4)
            {
                cout<<"Path reached";
            }
            else
            {
                cout<<"invalid path";
            }
        }
        else if(path==4)
        {
            cout<<"Path reached";
        }
        else
        {
            cout<<"invalid path";
        }
    }
    else if(path==4)
    {
        cout<<"Path reached";
    }
    else
    {
        cout<<"invalid path";
    }

}
else if(path==2)
{
    if(path==3)
    {
        cout<<"enter the path";
        cin>>path;
        if(path==4)
        {
            cout<<"Path Reached";
        }
        else
        {
            cout<<"invalid path";
        }

    }
    else if(path==4)
    {
        cout<<"Path reached";
    }
    else
    {
        cout<<"invalid";
    }
}
else if(path==3)
{
    if(path==2)
    {
        cout<<"enter the path";
        cin>>path;
        if(path==4)
        {
            cout<<"Path reached";
        }
        else
        {
            cout<<"invalid";
        }
    }
    else if(path==4)
    {
        cout<<"Path reached";
    }
    else
    {
        cout<<"invalid";
    }
}
else if (path==4)
{
        cout<<"Path reached";
}
else

    {
        cout<<"invalid path";
    }

}

