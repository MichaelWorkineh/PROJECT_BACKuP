#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long int x,y,w=0,m=0;
    float sum1=0,sum2=0;
    cout<<"Enter the temp you want to cook with \n";
    cin>>x;
    y=x;
    for(;x>0;x/=10){
        //s[i]=x%10;
        //cout<<y<<endl;
        ++w;
        //sum1+=y*pow(10,w);
        //sum2+=y*pow(10,w);
        //cout<<endl;
        //cout<<sum<<endl;
    }
    int s[w];
    for(int i=0;y>0;y/=10,i++){
        s[i]=y%10;
        //cout<<s[i]<<endl;
        //++w;
        //sum1+=y*pow(10,w);
        //sum2+=y*pow(10,w);
        //cout<<endl;
        //cout<<sum<<endl;
    }
    //cout<<w;
    for(int i=0;i<w;i++){
    if(s[i]==1||s[i]==4||s[i]==7){
        m=1;
        if(i==0){
        //cout<<"hi"<<endl;
        sum1+=(s[i]+1)*pow(10,i);
        sum2+=(s[i]-1)*pow(10,i);
        }
        else
            {   //cout<<"yee"<<endl;
                sum1=(s[i]+1)*pow(10,i);
                sum2=(s[i])*pow(10,i)-1;
            }
    }
    else
        {
        sum1+=s[i]*pow(10,i);
        sum2+=s[i]*pow(10,i);
        }
    }

if(m!=0){
    system("cls");
    cout<<"the least upper bound temperature you can cook with is "<<sum1<<"*c"<<endl<<"the highest lower bound temperature you can cook with is "<<sum2<<"*c"<<endl;
    }
else{
    system("cls");
    cout<<"you can cook with "<<sum1<<"*c"<<endl;
    }
    return 0;
}
