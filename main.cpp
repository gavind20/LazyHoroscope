//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    string firstname;
    string lastname;
  //get user input
    cout<<"What is your first name?\n"<<endl;
    cin>>firstname;
    cout<<"What is your last name?\n"<<endl;
    cin>>lastname;
  //tell fortune
    cout<<"Welcome, "<<firstname[0]<<lastname[0];
    cout<<", here is your fortune..."<<endl;
    cout<<"your lucky number is "<<firstname.length()<<" letters"<<endl;
    
  return 0;
}
