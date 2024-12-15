#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
bool checkk() {
//serach for the user in the data 
}
int main(){
    ifstream file("data.txt");
  if(!file.is_open()){
    cerr<<"the data of users can't be accessed ";
    return 1;
  }

  char question;
  cout << "Welcome to the quthentication process !" << endl;
  cout << "Are you signed up (y/n) ?? : ";
cin>>question;
  cout<<endl;
  if (question=="y" || question=="\n"){
      string username,password;
      vector<string> users; 
      cout<<"Please enter you credentials to login "<<endl;
      cout<<"Username: ";
      cin>>username;
      cout <<endl;
    while (count(users.begin(),users.end(),username)==1){
      cout<<"the user name apears to be wrong ";
      cout<<"Username: ";
      cin>>username;
      cout <<endl;
    }
 cout<<"Password: ";
      cin>>password;
      cout <<endl;
      while(checkk(password,user,file)==false){
 cout<<"wrong password ";
      cout<<"Password: ";
      cin>>password;
      cout <<endl;
    }
    count<<"Congrads you are loged in "<<endl;

      

  }
  else{
    cout <<"We need to create an account for you "<<endl;
       cout<<"Username: ";
      cin>>username;
    while(username.length()<6){
      cout<<"Username must be at least 6 characters ";
      cout<<"Username: ";
      cin>>username;
      cout <<endl;
    }
    cout<<"Password: ";
      cin>>password;
    while(password.length()<8){
      cout<<"Password must be at least 8 characters ";
      cout<<"Password: ";
      cin>>password;
      cout <<endl;
    }
    //adding the user to the database
  }
  
  return 0;
}



//to be continued al things related to the database and the check function 
