#include <iostream>
using namespace std;
class Employ{
    private :
    char ename[100];
    char designation[50];
    int id;
    int salary;

    public :
    void getdata()
    {
    cout<<"enter Name of employ :";
    cin>>ename;-
    cout<<"enter Designation of employ :";
    cin>>designation;
    cout<<"enter Id of employ :";
    cin>>id;
    cout<<"enter salary of employ :";
    cin>>salary;
    }

    void showdata()
    {
        cout<<" Name of employ :"<<ename<<endl;
        cout<<" Designation of employ :"<<designation<<endl;
        cout<<" Id of employ :"<<id<<endl;
        cout<<" Salary of employ :"<<salary<<endl;
    }
};

int main(){
    Employ e1,e2,e3;
    e1.getdata();
    e2.getdata();
    e3.getdata();
    e1.showdata();
    e2.showdata();
    e3.showdata();
    return 0;
}