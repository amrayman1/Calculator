#include <iostream>
#include <string>
#include <cstring>
#include <windows.h>
using namespace std;
int main()
{
    int y,c;
float op1,op2,t,operat=0;
char op,x;

    cout << " Calculator \n"
         << "-------------------------------\n"
         << " '+' to Add. \n"
         << " '-' to subtract. \n"
         << " '*' to multiply. \n"
         << " '/' to divide. \n"
         << " '%' to take the modulus. \n"
         << "-------------------------------\n";
    cout << "Enter your operation :"<< endl;
    cin >> op1 >> op >> op2 ;

while(true)
{
      switch(op)
    {
    case('+'):
        operat=op1+op2;
        break;
    case('-'):
        operat=op1-op2;
        break;
    case('*'):
        operat=op1*op2;
        break;
    case('/'):
        while (op2==0)
             {
                 cout<<"Math error!,please Enter valid number."<<endl;
                 cout<<"Enter new number:";
                 cin>>op2;
             }
                operat=op1/op2;
        break;
    case('%'):
        operat=(int)op1%(int)op2;
        break;

    }
}

while(true)
{
do
{
        cout<<"1-Press 'm' if do you want add the result of the previous calculation to the calculator\n"
            <<"2-Press 'c' if do you want clear the calculator memory\n"
            <<"3-Press 'p' if do you want print out the contents of the calculator memory\n"
            <<"4-Press 'q' if do you want quit and printing the first out the contents of the calculator memory\n";
        cin>>x;
        if (x=='m'||x=='M')
        {
             cout<<"1-add\n"<<"2-subtract\n"<<"3-multiply\n"<<"4-divide\n"<<"5-modulus\n";
             cin>>c;
             if(c==1)
             {
                 cout<<"Enter number:";
                 cin>>t;
                 operat+=t;
            }
            else if (c==2)
            {
                cout<<"Enter number:";
                cin>>t;
                operat-=t;
            }
             else if (c==3)
            {
                cout<<"Enter number:";
                cin>>t;
                operat*=t;
            }
            else if (c==4)
            {
                cout<<"Enter number:";
                cin>>t;
                while (t==0)
             {
                 cout<<"Math error!,please Enter valid number"<<endl;
                 cout<<"Enter number:";
                 cin>>t;
             }
            operat=operat/t;
            }
            else if (c==5)
            {
                cout<<"Enter number:";
                cin>>t;
                operat=int(operat)%int(t);
            }
        }
        else if (x=='c'||x=='C')
            operat=0;
        else if (x=='p'||x=='P')
            cout<<"The total operator="<<operat<<endl;
        else if (x=='q'||x=='Q')
            cout<<"The total operator= "<<operat<<endl;


}while (x!='q');
}
    return 0;
}
