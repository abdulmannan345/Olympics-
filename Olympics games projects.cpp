#include<iostream>
using namespace std;
int main()
{
	cout<<"\t\t\t\t\tOlympics Games\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t  Fives Games\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t  Eight teams\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t   35 Events\t\t\t\t"<<endl;
	string game;
	cout<<"You Select any one from these games(Basketball,gymnastics,badminton,swimming and cyclingtrack)"<<endl;
	cout<<"Total Teams Eight"<<endl;
	cout<<"Japan\nGermany\nAustria\nSouth Africa\nSwitzerland\nSpain\nSrilanka\nBrazil"<<endl;
	cout<<"Choose and Select the Game ";
	cin>>game;
	if ((game=="Basketball") || (game=="basketball"))
	{
		cout<<"\nYou Select the basketball Game";
		int num;
		cout<<"\nEnter the Event no (1-7)";
		cin>>num;
		if (num==1)
		{
			cout<<"Japan Vs Brazil";
		}
		else if(num==2)
		{
			cout<<"Germany Vs Srilanka";
		}
		else if(num==3)
		{
			cout<<"Austria Vs Spain";
		}
		else if(num==4)
		{
			cout<<"South Africa Vs switzerland";
		}
		else if(num==5)
		{
			cout<<"Semi Final 1";
		}
		else if(num==6)
		{
			cout<<"semi Final 2";
		}
		else if(num==7)
		{
			cout<<"Final";
		}
		else
		{
			cout<<"You enter the invalid event";
		}
	}
	else if ((game=="Gymnastics")||(game=="gymnastics"))
	{
		cout<<"You Select the Gymnastics Game";
		int num;
		cout<<"\nEnter the Event no (8-14)";
		cin>>num;
		if (num==8)
		{
			cout<<"Japan Vs Srilanka";
		}
		else if(num==9)
		{
			cout<<"Germany Vs Brazil";
		}
		else if(num==10)
		{
			cout<<"Austria Vs switzerland";
		}
		else if(num==11)
		{
			cout<<"South Africa Vs Spain";
		}
		else if(num==12)
		{
			cout<<"Semi Final 1";
		}
		else if(num==13)
		{
			cout<<"semi Final 2";
		}
		else if(num==14)
		{
			cout<<"Final";
		}
		else
		{
			cout<<"You enter the invalid event";
		}
	}
	else if ((game=="Badminton")||(game=="badminton"))
	{
		cout<<"You Select the Badminton Game";
			int num;
		cout<<"\nEnter the Event no (15-21)";
		cin>>num;
		if (num==15)
		{
			cout<<"switzerland Vs Srilanka";
		}
		else if(num==16)
		{
			cout<<"Spain Vs Brazil";
		}
		else if(num==17)
		{
			cout<<"Austria Vs Japan";
		}
		else if(num==18)
		{
			cout<<"South Africa Vs Germany";
		}
		else if(num==19)
		{
			cout<<"Semi Final 1";
		}
		else if(num==20)
		{
			cout<<"semi Final 2";
		}
		else if(num==21)
		{
			cout<<"Final";
		}
		else
		{
			cout<<"You enter the invalid event";
		}
		
	}
	else if ((game=="Swimming")||(game=="swimming"))
	{
		cout<<"You Select the Swimming Game";
			int num;
		cout<<"\nEnter the Event no (22-28)";
		cin>>num;
		if (num==22)
		{
			cout<<"Japan Vs Germany";
		}
		else if(num==23)
		{
			cout<<"Srilanka Vs Brazil";
		}
		else if(num==24)
		{
			cout<<"Spain Vs switzerland";
		}
		else if(num==25)
		{
			cout<<"South Africa Vs Austria";
		}
		else if(num==26)
		{
			cout<<"Semi Final 1";
		}
		else if(num==27)
		{
			cout<<"semi Final 2";
		}
		else if(num==28)
		{
			cout<<"Final";
		}
		else
		{
			cout<<"You enter the invalid event";
		}
	}
	else if ((game=="Cyclingtrack")||(game=="cyclingtrack"))
	{
		cout<<"You Select the Cycling Track Game ";
			int num;
		cout<<"\nEnter the Event no (29-35)";
		cin>>num;
		if (num==29)
		{
			cout<<"Japan Vs Srilanka";
		}
		else if(num==30)
		{
			cout<<"Germany Vs Brazil";
		}
		else if(num==31)
		{
			cout<<"Austria Vs switzerland";
		}
		else if(num==32)
		{
			cout<<"South Africa Vs Spain";
		}
		else if(num==33)
		{
			cout<<"Semi Final 1";
		}
		else if(num==34)
		{
			cout<<"semi Final 2";
		}
		else if(num==35)
		{
			cout<<"Final";
		}
		else
		{
			cout<<"You enter the invalid event";
		}
	}
	else
	{
		cout<<"You Enter the invalid game";
	}
    return 0;
}
