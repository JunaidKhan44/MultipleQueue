#include<iostream>
#include<string>
using namespace std;
int c1=0;
int c2=0;
int c3=0;
int c4=0;
class Bank
{

private:
	int id;
	int Amount;

public:
		void Enqueue()
		{
			cout<<"Enter Id"<<endl;
			cin>>id;
			cout<<"Enter Amount"<<endl;
			cin>>Amount;
		}
		void Dequeue()
		{
            cout<<id<<"Dequeue"<<endl; 
		}
		void Display(Bank* qd,Bank * qw,Bank * qt,Bank * ql)
		{
			cout<<"Queue 1"<<endl; 
			for (int i = 0; i < c1; i++)
			{
				cout<<"Id is "<<qd[i].id<<" Amount is "<<qd[i].Amount<<endl;
			}
			cout<<"Queue 2"<<endl; 
			for (int i = 0; i < c2; i++)
			{
				cout<<"Id is "<<qw[i].id<<" Amount is "<<qw[i].Amount<<endl;
			}
				cout<<"Queue 3"<<endl; 
			for (int i = 0; i < c3; i++)
			{
				cout<<"Id is "<<qt[i].id<<" Amount is "<<qt[i].Amount<<endl;
			}
			cout<<"Queue 4"<<endl;
			for (int i = 0; i < c4; i++)
			{
				cout<<"Id is "<<ql[i].id<<" Amount is "<<ql[i].Amount<<endl;
			}
		}
};
void main()
{
    Bank qd[10];
	Bank qw[10];
	Bank ql[10];
	Bank qt[10];
	int in;
	int in2;

	do
	{
		cout<<"1 for Deposite\n2 for With Draw\n3 for Transfer\n4 for Loan\n5 for Display"<<endl;
		cin>>in;
		switch (in)
		{
		case 1:
			cout<<"1 for Enqueue\n2 for Dequeue"<<endl;
			cin>>in2;
			if (in2==1)
			{
				qd[c1].Enqueue();
				c1++;
			}
			else if(in2==2)
			{
                c1--;
				qd[c1].Dequeue();
			}
			break;
		case 2:
			cout<<"1 for Enqueue\n2 for Dequeue"<<endl;
			cin>>in2;
			if (in2==1)
			{
				qw[c2].Enqueue();
				c2++;
			}
			else if(in2==2)
			{
				c2--;
				qw[c2].Dequeue();
			}
			break;
		case 3:
			cout<<"1 for Enqueue\n2 for Dequeue"<<endl;
			cin>>in2;
			if (in2==1)
			{
				qt[c3].Enqueue();
				c3++;

			}
			else if(in2==2)
			{
				c3--;
				qw[c3].Dequeue();
			}
			break;
		case 4:
			cout<<"1 for Enqueue\n2 for Dequeue"<<endl;
			cin>>in2;
			if (in2==1)
			{
				ql[c4].Enqueue();
				c4++;
			}
			else if(in2==2)
			{
			   c4--;
				qw[c4].Dequeue();
			}
			break;
		case 5:
			qd[0].Display(qd,qw,qt,ql);
			break;
		}

	} while (in!=6);



	system("pause");
}