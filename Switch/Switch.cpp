# include <iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"enter your choice 1. for fruits and 2. for veg";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"enter your choice 1.Mango and 2. for Apple";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Mango";
            break;
            case 2:cout<<"Apple";
            break;
            default:cout<<"Invalid input";
        }
        break;
        case 2:cout<<"enter your choice 1.Potato and 2. for Tomato";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Potato";
            break;
            case 2:cout<<"Tomato";
            break; 
            default:cout<<"Invalid input";
        }
        break;
        default:cout<<"Invalid input";
        break;
    }

    
    // int a=1;
    // label:
    // if(a<=10)
    // {

    //      cout<<2*a<<endl;
    //      a++;
    //      goto label;
    //  } 

}