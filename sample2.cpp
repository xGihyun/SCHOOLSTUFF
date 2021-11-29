#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;

int main(){

    srand((unsigned)time(0));
    int d1=1+rand()%6;
    int d2=1+rand()%6;
    int sum=d1+d2;
    int pointnumber;
    string player1;
    string player2;
    char ch;

    cout<<"Enter the name of player 1 (Shooter): "<<endl;
    cin>>player1;
    cout<<"Enter the name of player 2: "<<endl;
    cin>>player2;
    cout<<endl;

    cout<<d1<<" "<<d2<<endl<<endl; //dice first roll

    if(sum==7||sum==11){
        cout<<"YOU GOT A: "<<sum<<endl;
        cout<<"PLAYER 1 "<<player1<<" WINS!"<<endl;
    }
    else if(sum==2||sum==3||sum==12){
        cout<<"YOU GOT A: "<<sum<<endl;
        cout<<"PLAYER 2 "<<player2<<" WINS!"<<endl;
    } 
    else {
        
        cout<<"POINT NUMBER: "<<sum<<endl;
        cout<<"TYPE Y TO REROLL: ";
        
            while(ch=='Y'&&pointnumber!=7||pointnumber!=sum){
                cin>>ch;
                d1=1+rand()%6;
                d2=1+rand()%6;
                pointnumber=d1+d2;

                if(pointnumber==sum){
                    cout<<"REROLLING..."<<endl<<endl;
                    cout<<d1<<" "<<d2<<endl<<endl; //dice rolls
                    cout<<"YOU GOT A: "<<pointnumber<<endl;
                    cout<<"PLAYER 1 "<<player1<<" WINS!"<<endl;
                    break;
                }
                else if(pointnumber==7){
                    cout<<"REROLLING..."<<endl<<endl;
                    cout<<d1<<" "<<d2<<endl<<endl; //dice rolls
                    cout<<"YOU GOT A: "<<pointnumber<<endl;
                    cout<<"PLAYER 2 "<<player2<<" WINS!"<<endl;
                    break;
                }
                else{
                    cout<<"REROLLING..."<<endl<<endl;
                    cout<<d1<<" "<<d2<<endl<<endl; //dice rolls
                    cout<<"YOU GOT A: "<<pointnumber<<endl<<endl;
                    cout<<"TYPE Y TO REROLL: ";
                }
            }
        
    }
    //INSERT "NEW GAME" CHUCHU
}
