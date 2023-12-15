#include<iostream>
#include<string>
using namespace std;

class Calculator
{
    private:
            float x,y;
    public:
            void getdata()
            {
                cout<<"\n Enter the First Value: ";
                cin >> x;
                cout<<"\n Enter the Second value: ";
                cin >> y;

            }
            float add()
            {
                float sum1;
                sum1 = x + y;
                cout<<"\n Sum : "<<sum1<<endl;
                return 0;
            }
            float sub()
            {
                float subs;
                subs = x - y;
                cout<<"\n Subtraction : "<<subs<<endl;
                return 0; 
            }
            float div()
            {
                float divs;
                divs = x/y ;
                cout<<"\n Division : "<<divs<<endl;
                return 0; 
            }
            float mul()
            {
                float mult;
                mult = x*y;
                cout<<"\n Multiplication : "<<mult<<endl;
                return 0;
            }
};

int main()
{
    Calculator ob1;
    
    int choice = 0;
    while(choice != 5)
    {
        cout<<"\n 1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Exit \n";
        cout<<"\n Enter Your Choice: ";
        cin>>choice;
        cout<<endl;
        
            switch(choice)
            {
                case 1: ob1.getdata();
                        ob1.add();
                        break;
                case 2: ob1.getdata();
                        ob1.sub();
                        break;
                case 3: ob1.getdata();
                        ob1.mul();
                        break;
                case 4: ob1.getdata();
                        ob1.div();
                        break;
                case 5: cout<<"Exited \n"<<endl;
                        exit(0);
                        break;
                default:cout<<"\n Wrong choice!!!!";
                        break;
            }
    }
    return 0;
}