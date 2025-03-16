#include <iostream>
using namespace std;

int calculateAge(int birthYear,int birthMonth,
int birthDay,int currentYear,int currentMonth,int currentDay,){
   int age;
   age=curretYear-birthYear;
   if (currentMonth<birthMonth||(currentDay<birthDay))
   {
    age-1;
    }
    return age;
}
int main(){

    int name;
    int birthYear,birthMonth,birhDay;
    int currentYear,currentmonth,currentDay;

    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your birth year";
    cin>>birthYear;
    cout<<"Enter your birth month";
    cin>>birthMonth;
    cout<<"Enter your birth day";
    cin>>birthDay;

    
    cout<<"Enter current year";
    cin>>currentYear;
    cout<<"Enter the current month";
    cin>>currentMonth;
    cout<<"Enter the current day";
    cin>>currentDay;



    return 0;
}