#include<iostream>
#include<string>
using namespace std;


int main(){

            //data types
char a;
int b;
float c;
double d;
bool g=true;

cout << sizeof(d);   //gives size in Bytes


 char name[6]="aarif"; // stores last element as \0
 cout<<name<<endl;


int arr[]={1,2,4,5};
 int len=sizeof(arr)/sizeof(arr[0]);   //calculate length of any array
 for(int i=0;i<len;i++){
   cout << arr[i]<<endl;
 }

int i=0;
while(i<11){
        cout<<"i is under 11: "<<i<<endl;
i++;
}


string s1;
string s2="buddy";              // see other useful string functions
getline(cin,s1);
cout<<s1<<endl;
cout<<s1.length()<<endl;
s2=s2+s1;
cout<<s2<<endl;




return 0;
}
