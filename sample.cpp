#include <iostream>

using namespace std;

int main() {
    int water, elec, food, net, water2, elec2, food2, net2, amount, amount2, finalTotal;
    
    cin>>water>>elec>>food>>net;
    
    cout<<"Expenses this month:"<<endl<<endl;
    
    cout<<water<<endl;
    cout<<elec<<endl;
    cout<<food<<endl;
    cout<<net<<endl<<endl;
    
    amount = (water+elec+food+net);
    cout<<amount<<endl<<endl;
    
    cin>>water2>>elec2>>food2>>net2;
    
    cout<<"Expenses last month:"<<endl<<endl;
    
    cout<<water2<<endl;
    cout<<elec2<<endl;
    cout<<food2<<endl;
    cout<<net2<<endl<<endl;
    
    amount2 = (water2+elec2+food2+net2);
    cout<<amount2<<endl<<endl;
    
    finalTotal = (amount-amount2);
    
    if(finalTotal < 0)
    {
        cout<<"Our family was able to save "<<(finalTotal)<<endl<<endl;
    }
    else{
        cout<<"Our family over spent for "<<finalTotal<<endl<<endl;
    }
    
}
