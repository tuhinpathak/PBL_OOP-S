#include <iostream>
using namespace std;
class NumberSum{
    private:
    int start, end, even=0, odd=0, i;
    public:
    void range(){
        cout<<"Enter the start and end range\n";
        cin>>start>>end;
    }
    void sum(){
        for(i=start;i<end;i++){
            if(i%2==0){
                even+=i;
            }
            else{
                odd+=i;
            }
        }
    }
    void display(){
        cout<<"\nSum of all even numbers between the range = "<<even;
        cout<<"\nSum of all odd numbers between the range = "<<odd;
    }
};
int main(){
    NumberSum N;
    N.range();
    N.sum();
    N.display();
    return 0;
}
