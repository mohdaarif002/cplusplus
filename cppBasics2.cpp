#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;
int address(int* pointer){
return *(pointer)+=10;
}

int main(){


string s1;
getline(cin,s1);

cout<<s1<<" "<<s1.length()<<" "<<endl;

reverse(s1.begin(),s1.end());   // inbuilt function
cout<<s1<<endl;


 for(int x=(s1.length()-1); x>=0;x--){           //reverse using loop

cout<<s1[x]<<" ";
 }

string str=s1;
int n=str.length();

for (int i = 0; i < n / 2; i++)            //reverse using swap
      swap(str[i], str[n - i - 1]);

cout<<str<<endl;

int var=20;
int* pointer;              //pointer to point integer values
pointer=&var;

cout<<(&var)<<endl;  //address in memory of any variable
cout<<pointer<<endl;

cout<<address(&var)<<endl;                  // call by value/reference
cout<<*(&var)<<endl;


return 0;
}
