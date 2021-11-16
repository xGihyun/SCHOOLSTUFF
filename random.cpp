#include <iostream>
#include <ctime>

using namespace std;

int main() {
    char c;
    cin>>c;
    srand((unsigned)time(0));
    int luck=1+rand()%99;
    int kapalaran=1+rand()%3;
    
    switch(c){
        case 'M':
            
            switch(kapalaran){
                case 1:
                    cout<<"Kapalaran: Mahal ka rin niya"<<endl
                        <<"Lucky color: "<<"insert color"<<endl
                        <<"Lucky num: "<<luck<<endl;
                    break;
                case 2:
                    cout<<"Kapalaran: Di ka niya mahal"<<endl
                        <<"Lucky color: "<<"insert color"<<endl
                        <<"Lucky num: "<<luck<<endl;
                    break;
                case 3:
                    cout<<"Kapalaran: Di ka niya kilala"<<endl
                        <<"Lucky color: "<<"insert color"<<endl
                        <<"Lucky num: "<<luck<<endl;
                    break;
            }
            break;
        case 'F':
            
            switch(kapalaran){
                case 1:
                    cout<<"Kapalaran: Papasa ka"<<endl
                        <<"Lucky color: "<<"insert color"<<endl
                        <<"Lucky num: "<<luck<<endl;
                    break;
                case 2:
                    cout<<"Kapalaran: Bagsak ka"<<endl
                        <<"Lucky color: "<<"insert color"<<endl
                        <<"Lucky num: "<<luck<<endl;
                    break;
                case 3:
                    cout<<"Kapalaran: Idk"<<endl
                        <<"Lucky color: "<<"insert color"<<endl
                        <<"Lucky num: "<<luck<<endl;
                    break;
            }
    }
}
