#include<iostream>
using namespace std;

class weather
{
	int day,ht,lt,rain,snow;

	public:
	static float aht,alt,arain,asnow;
		weather()
		{
			ht=0;
			lt=0;
			rain=0;
			snow=0;

		}
		void getdata()
		{
			cout<<"high temp.:";
			cin>>ht;
			cout<<"low temp.:";
			cin>>lt;
			cout<<"amt. of rain:";
			cin>>rain;
			cout<<"Amt. of snow:";
			cin>>snow;
		}
		void display()
		{


			cout<<ht<<"\t\t";
			cout<<lt<<"\t\t";
			cout<<rain<<"\t\t";
			cout<<snow<<"\t\t";
			cout<<"\n";

		}
		void average()
		{
			aht=aht+ht;
			alt=alt+lt;
			arain=arain+rain;
			asnow=asnow+snow;
		}

};

float weather::aht;
float weather::alt;
float weather::arain;
float weather::asnow;

int main()
{
	int n,a,dayn,i,c;

	weather w[31];
	do
	{
		cout<<"1.Enter data"<<"\n"<<"2.Display n day"<<"\n"<<"3.Display monthly average\n4.exit"<<"\n";
		cin>>a;

		switch (a)
		{
			case 1:
			{
				cout<<"Enter no. of days:";
				cin>>n;
				for (i=0;i<n;i++)
				{
					cout<<"\nEnter day no.:";
					cin>>dayn;
					w[dayn].getdata();
				}
				break;
			}
			case 2:
			{
				cout<<"Enter day no.:";
				cin>>dayn;
				cout<<"Day no.:"<<"\t"<<"high temp"<<"\t"<<"low temp"<<"\t"<<"rain"<<"\t\t"<<"snow"<<"\n";
				cout<<dayn<<"\t\t";
				w[dayn].display();
				break;
			}
			case 3:
			{
				cout<<"Day no.:"<<"\t"<<"high temp"<<"\t"<<"low temp"<<"\t"<<"rain"<<"\t\t"<<"snow"<<"\n";

				for (i=1;i<=30;i++)
				{
					cout<<i<<"\t\t";
					w[i].display();

				}
				for (int i=1;i<=30;i++)
				{
					w[i].average();
				}
				cout<<"Average:\t";

				cout<<weather::aht/30<<"\t\t";
				cout<<weather::alt/30<<"\t\t";
				cout<<weather::arain/30<<"\t\t";
				cout<<weather::asnow/30<<"\t\t";
				break;
			}
		}

	}while(c!=4);
}

