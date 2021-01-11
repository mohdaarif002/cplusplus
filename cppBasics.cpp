#include<iostream>
#include<string>
using namespace std;


int main(){
/*       data types
char a;
int b;
float c;
long double d;
bool g=true;

cout << sizeof(d);
*/

// char name[100]="aarif";                it is a c lang way
// cout<<"Hye this is my value "<<name[0]<<endl;

string add;
getline(cin,add);
cout<<add<<endl;
cout<<add.size()<<endl;



return 0;
}