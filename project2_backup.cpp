//project 2
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
char dataType,dataRepresentation,menu2;
string wer,input[13];
float avRain, in1[13],month[3][13];
int curMonth;
l:cout<<"enter average rain fall\n";
cin>>avRain;
cout<<"enter current month number, i.e. 1 for meskerem, 2 for tekemet and so on\n";
cin>>curMonth;
for(int i =0,j=curMonth;i<13;i++,j--){
    if(j==0){
        j=13;
    }
    switch(j){
        case 1:
        wer="meskerem";
        break;
        case 2:
        wer="tekemt";
        break;
        case 3:
        wer="hedar";
        break;
        case 4:
        wer="tasase";
        break;
        case 5:
        wer="terr";
        break;
        case 6:
        wer="yekatit";
        break;
        case 7:
        wer="megabit";
        break;
        case 8:
        wer="miyaziya";
        break;
        case 9:
        wer="genbot";
        break;
        case 10:
        wer="sene";
        break;
        case 11:
        wer="hamle";
        break;
        case 12:
        wer="nehase";
        break;
        case 13:
        wer="pagume";
        break;
    }
    month[0][i]=j;
    cout<<"actual rainfall for month "<<wer<<" ("<<j<<")"<<endl;
    cin>>month[1][i];
    input[i]=wer;
    month[2][i]=month[1][i]-avRain;

}
a:cout<<"type \"A\" to get the actual rain fall data\ntype \"R\" to get the relative rainfall data\n";
cin>>dataType;
t:cout<<"to get a graphical representaion type G\nto get a tabular representation type T\n";
cin>>dataRepresentation;
if(dataType=='A'||dataType=='a'){
    if(dataRepresentation=='G'||dataRepresentation=='g'){
        for(int i=0;i<13;i++){
            cout<<input[i]<<" ";
            cout<<month[1][i]<<endl;
        }

            for(int i=0;i<13;i++){
            in1[i]=month[1][i];
            }
        int in[13];
        for(int i=0;i<13;i++){
            in[i]=((int)(in1[i]/100))*100;
            }
        int deci[13];
        for(int i=0;i<13;i++){
            deci[i]=(in1[i]-in[i]);
        }
        cout<<endl<<endl;
        system("cls");
        cout<<"\t\t\t\t\t\t\tactual rain fall bar graph"<<endl;
        cout<<"\t\t\t\t\t\t\t--------------------------"<<endl<<endl<<endl;
        for(int j=12;j>=0;j--){
            cout<<input[j];
            if(month[0][j]==5||month[0][j]==10){
                cout<<"    ";
            }
            else if(month[0][j]==3||month[0][j]==11){
                cout<<"   ";
            }
            else if(month[0][j]==6||month[0][j]==7){
                cout<<" ";
            }
            else if(month[0][j]==2||month[0][j]==4||month[0][j]==9||month[0][j]==12||month[0][j]==13){
                cout<<"  ";
            }
            else{
                cout<<"";
            }

            if(in[j]-500>=0){
                cout<<"|||||";
                for(int i=0;i<in[j]-500;i+=100){
                    cout<<"|||||||";
                    }
                if(deci[j]>0&&deci[j]<50){
                    cout<<"||";
                    }
                else if (deci[j]==50){
                    cout<<"|||";
                    }
                else if(deci[j]>5&&deci[j]<99){
                    cout<<"|||||";
                    }
                }
                    cout<<endl<<endl;
                }

        cout<<"        0";
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
        }


    else if(dataRepresentation=='T'||dataRepresentation=='t'){
        cout<<"---------------------------------"<<endl;
        cout<<"|  month    |   actual rainfall |"<<endl;
        cout<<"---------------------------------"<<endl;
        for(int j=0;j<13;j++){
            cout<<input[j];
            if(month[0][j]==5||month[0][j]==10){
                cout<<"    ";
            }
            else if(month[0][j]==3||month[0][j]==11){
                cout<<"   ";
            }
            else if(month[0][j]==6||month[0][j]==7){
                cout<<" ";
            }
            else if(month[0][j]==2||month[0][j]==4||month[0][j]==9||month[0][j]==12||month[0][j]==13){
                cout<<"  ";
            }
                cout<<"    |     ";
            cout<<month[1][j]<<endl;
            cout<<"---------------------------------"<<endl;
        }
    }
}

else if(dataType=='R'||dataType=='r'){
    if(dataRepresentation=='G'||dataRepresentation=='g'){
        for(int i=0;i<13;i++){
            cout<<input[i]<<" ";
            cout<<month[2][i]<<endl;
        }

            for(int i=0;i<13;i++){
            in1[i]=month[2][i];
            }
        int in[13];
        for(int i=0;i<13;i++){
            in[i]=((int)(in1[i]/100))*100;
            }
        int deci[13];
        for(int i=0;i<13;i++){
            deci[i]=(in1[i]-in[i]);
        }
        cout<<endl<<endl;
        system("cls");
        cout<<"\t\t\t\t\t\t\tactual rain fall bar graph"<<endl;
        cout<<"\t\t\t\t\t\t\t--------------------------"<<endl<<endl<<endl;
        for(int j=12;j>=0;j--){
            cout<<input[j];
            if(month[0][j]==5||month[0][j]==10){
                cout<<"    ";
            }
            else if(month[0][j]==3||month[0][j]==11){
                cout<<"   ";
            }
            else if(month[0][j]==6||month[0][j]==7){
                cout<<" ";
            }
            else if(month[0][j]==2||month[0][j]==4||month[0][j]==9||month[0][j]==12||month[0][j]==13){
                cout<<"  ";
            }
            else{
                cout<<"";
            }

            if(in[j]-500>=0){
                cout<<"|||||";
                for(int i=0;i<in[j]-500;i+=100){
                    cout<<"|||||||";
                    }
                if(deci[j]>0&&deci[j]<50){
                    cout<<"||";
                    }
                else if (deci[j]==50){
                    cout<<"|||";
                    }
                else if(deci[j]>5&&deci[j]<99){
                    cout<<"|||||";
                    }
                }
                    cout<<endl<<endl;
                }

        cout<<"        0";
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
        }


    else if(dataRepresentation=='T'||dataRepresentation=='t'){
        cout<<"---------------------------------"<<endl;
        cout<<"|  month    | relative rainfall |"<<endl;
        cout<<"---------------------------------"<<endl;
        for(int j=0;j<13;j++){
            cout<<input[j];
            if(month[0][j]==5||month[0][j]==10){
                cout<<"    ";
            }
            else if(month[0][j]==3||month[0][j]==11){
                cout<<"   ";
            }
            else if(month[0][j]==6||month[0][j]==7){
                cout<<" ";
            }
            else if(month[0][j]==2||month[0][j]==4||month[0][j]==9||month[0][j]==12||month[0][j]==13){
                cout<<"  ";
            }
                cout<<"    |     ";
            cout<<month[2][j]<<endl;
            cout<<"---------------------------------"<<endl;
        }
    }
}

cout<<"if you want to change the data representation press \"t\"\npress \"c\" to change the data entered \npress \"q\" to leave the program\npress \"a\" to change the the data you want to see\n and do press any thing if you want to continue viewing"<<endl;
    d:cin>>menu2;

    switch(menu2){
        case 'a':
        case 'A':
            system("cls");
            goto a;
            break;
        case 't':
        case 'T':
            system("cls");
            goto t;
            break;
        case 'c':
        case 'C':
            system("cls");
            goto l;
            break;
        case 'q':
        case 'Q':
            return 0;
            break;
        default:
            cout<<"please press a, t or q to change the data you are in in their according manner.\n";
            goto d;

    }
    return 0;
}
