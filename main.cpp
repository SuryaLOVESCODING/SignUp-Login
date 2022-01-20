
#include <conio.h>






#include<iostream>
using namespace std;
#include <vector>
#include <string>
#include <string>
#include<string.h>
#include <stdlib.h>




int main()
{

  vector<string>storedusername;
  vector<string>storedpassword;
  while (true){



    cout<<"Welcome to the Sign Up or Login Page"<<endl;
    string pass;
    int choice;
    cout<<"pick 1 for sign up and 2 for log in:";
    cin>>choice;
    if(choice==1){
      int ch;
      start:
      string username, password;


	  cout << "Username: "<<endl;
	  cin  >> username;
      cout << "Password: "<<endl;
      ch=getch();
      while(ch!=13){
        password.push_back(ch);
        cout<<'*';
        ch=getch();
      }

      cout<<'\n';


      int check=0;



      for(int i=0;i<password.length();i++){

        if(password[i]>='a' && password[i]<='z'){
          check+=1;

        }


        if(password[i]>='A' && password[i]<='Z'){
          check+=1;

        }


        if(password.find('0',i) || password.find('1',i) ||password.find('2',i) || password.find('3',i) || password.find('4',i) || password[i]=='5' || password.find('6',i) || password.find('7',i) || password.find('8',i)|| password.find('9',i) ){
          check+=1;

        }


        if(password.find('&',i) || password.find('!',i) || password.find('@',i) || password.find('#',i) || password.find('%',i) || password.find('^',i) || password.find('&',i) || password.find('*',i) || password.find('(',i) || password.find(')',i) || password.find('-',i) || password.find('_',i) ||password.find('+',i) || password.find('=',i) || password.find('{',i) || password.find('[',i) || password.find('}',i) || password.find(']',i) || password.find('|',i) || password.find(':',i) || password.find(';',i) || password.find('"',i) || password.find('<',i) || password.find(',',i) || password.find('>',i) || password.find('.',i) || password.find('?',i) || password.find('/',i)){
          check+=1;


        }


        if(password.length()>=8){
          check+=1;

        }




      if(check==5){
        cout<<"Signed Up!"<<endl;
        storedpassword.push_back(password);
        break;
      }

      else if(check!=5){
        cout<<"Not a Good Password"<<endl;
        break;
      }




      }

      storedusername.push_back(username);
    }













    if(choice==2){
      int ch;

      string checkusername, checkpassword;


	  cout << "Username: ";
	  cin  >> checkusername;
      cout << "Password: ";
      ch=getch();
      while(ch!=13){
        checkpassword.push_back(ch);
        cout<<'*';
        ch=getch();
      }

      int counter=0;
      for(int i=0;i<storedusername.size();i++){
        if(checkusername==storedusername[i]){
          counter++;
        }
      }
      for(int i=0;i<storedpassword.size();i++){
        if(checkpassword==storedpassword[i]){
          counter++;
        }
      }

      if(counter==2){
        cout<<"Logged In!, Welcome "<<checkusername<<endl;
      }
    }



  }

}
