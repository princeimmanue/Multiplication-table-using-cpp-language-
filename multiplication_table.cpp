/////////////MULTIPLICATION TABLE PROGRAM///////////
///////////////////by PRINCE IMMANUEL//////////////////

#include<iostream>
using namespace std;
int main()
{
    int table_no,rang_e; //declare the variable
    
    cout<<"                                             \t\t\t\t  ::> MULTIPLICATION  TABLE <::"<<endl;
    cout<<"                                                  \t\t\t         ::> WELCOME <::"<<endl;
    cout<<"                                                             \t\t                   by .`.PRINCE IMMANUEL.`."<<endl;
    // get the table no from user 
    
    cout<<"-->Enter an table number:";
    cin>>table_no;
    
    //get the range from user 
    
    cout<<"-->Enter range:";
    cin>>rang_e;
    
    for(int i=1;i<=rang_e; ++i)
    {
        cout<<table_no<<"*"<<i<<"="<<table_no*i<<endl;
    } 
    return 0;
}

