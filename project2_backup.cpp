#include<iostream>
using namespace std;
int main(){
/*
input monthly average rainfall
      current month
      rain fall figures of the provious 12 month

output rainfall for previous 12 month
       how much above and bellow average rainfall for each month
       2 bar graph (average rain fall and actual rain fall)
*/
float in1[12];
l:for(int i=0;i<12;i++){
    cout<<"input "<<i+1<<" ";
    cin>>in1[i];
    }
int in[12];
for(int i=0;i<12;i++){
    in[i]=((int)(in1[i]/100))*100;
    }
int deci[12];
for(int i=0;i<12;i++){
    deci[i]=(in1[i]-in[i]);
}
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\tBar graph"<<endl;
cout<<"\t\t\t\t\t\t\t---------"<<endl<<endl<<endl;
for(int j=12;j>0;j--){
    cout<<"input"<<j;
    if(j<10){
        cout<<" ";
    }
    if(in[j-1]-500>=0){
        cout<<"|||||";
        for(int i=0;i<in[j-1]-500;i+=100){
            cout<<"|||||||";
            }
        if(deci[j-1]>0&&deci[j-1]<50){
            cout<<"||";
            }
        else if (deci[j-1]==50){
            cout<<"|||";
            }
        else if(deci[j-1]>5&&deci[j-1]<99){
            cout<<"|||||";
            }
        }
            cout<<endl<<endl;
        }

cout<<"      0";
for(int i=500;i<=2000;i+=100){
    if(i<1000){
        cout<<"    ";
    }
    else{
        cout<<"   ";
    }
    cout<<i;
    }
    cout<<endl;
    goto l;
    return 0;
}
