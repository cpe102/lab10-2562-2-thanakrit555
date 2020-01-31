#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

string result;
srand(time(0));
int i = rand()%9;
string grade[9]={"A","B+","B","C+","C","D+","D","F","W"};
cout << "Press Enter 3 times to reveal your future."<<"\n";
cin.get();
cin.get();
cin.get();

if(i==0) result = grade[0];
else if (i==1) result = grade[1];
else if (i==2) result = grade[2];
else if (i==3) result = grade[3];
else if (i==4) result = grade[4];
else if (i==5) result = grade[5];
else if (i==6) result = grade[6];
else if (i==7) result = grade[7];
else if (i==8) result = grade[8];

cout<< "You will get "<< result << " in this 261102.";






}
