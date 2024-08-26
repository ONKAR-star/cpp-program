#include<iostream>
#include <string>
using namespace std;

 class car{
  public:
  //properties
  string brand;
  string model;
  int year;
  
  //function to display car info
  void dosplayinfo(){
    cout<<"brand:"<<brand<<endl;
    cout<<"model:"<<model<<endl;
    cout<<"year:"<< year<<endl;
  }
 };
 
 int main() {
   //create an object of car
   car carobj1;
   carobj1.brand="mahindra ";
   carobj1.model="thar ";
   carobj1.year=2010;
   
   // create anouther object of car
   
   car carobj2;
   carobj2.brand= "tata ";
   carobj2.model= "nano ";
   carobj2.year= 2008;
  
  
   
   //print attribute value
   
   cout<<carobj1.brand<<""<<carobj1.model<<""<<carobj1.year<<"\n";
   
   cout<<carobj2.brand<<""<<carobj2.model<<""<<carobj2.year<<"\n";
   
   return 0;
 }