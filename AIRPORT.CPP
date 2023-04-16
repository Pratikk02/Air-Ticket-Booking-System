//progra mto  book tickets and view the respective boarding passes using simple class functions
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
class airport                 //declaring class
{
	int agea,agec;
	char namea[25],gendera[3],namec[25],genderc[3],email[25],fcode[6];
	int no_of_adults, no_of_children,seqnoa,seqnoc,day,month,yr;
	long ph_no;
	float distance,cost,time;
	char src[5],dest[5],airl[25],ch;

	public:
	void passinput()         //getting info of passengers
	{

		for(int i=0;i<no_of_adults;i++)
		{
			cout<<"\n\nEnter info for adult-"<<(i+1);
			cout<<"\n\nEnter name:";		gets(namea);
			cout<<"Enter age:";		cin>>agea;
			cout<<"Enter phone number:";    cin>>ph_no;
			cout<<"Enter gender:";		gets(gendera);
			cout<<"Enter email id:";	gets(email);
		}
		for(int j=0; j<no_of_children;j++)
		{
			cout<<"\nEnter info for child-"<<(j+1);
			cout<<"\n\nEnter name:";	gets(namec);
			cout<<"Enter age:";	cin>>agec;
			cout<<"Enter gender:";	gets(genderc);
		}
	} //end of input function

	void airbooking()   	//booking tickets
	{

		int x;
		cout<<"\n-------------------------------------";
		cout<<"\nEnter number of adults:";	cin>>no_of_adults;
		cout<<"Enter number of children:";	cin>>no_of_children;
		cout<<"\nEnter departure city:";  gets(src);
		cout<<"\nEnter your destination:";       gets(dest);
		if((strcmp(src,"A")!=0) &&  strcmp(dest,"D")!=0) {distance=775;}
		if((strcmp(src,"A")!=0) &&  strcmp(dest,"K")!=0) {distance=73;}
		if((strcmp(src,"A")!=0) &&  strcmp(dest,"C")!=0) {distance=1371;}
		if((strcmp(src,"D")!=0) &&  strcmp(dest,"A")!=0) {distance=775;}
		if((strcmp(src,"D")!=0) &&  strcmp(dest,"C")!=0) {distance=1760;}
		if((strcmp(src,"D")!=0) &&  strcmp(dest,"K")!=0) {distance=1305;}
		if((strcmp(src,"K")!=0) &&  strcmp(dest,"A")!=0) {distance=73;}
		if((strcmp(src,"K")!=0) &&  strcmp(dest,"C")!=0) {distance=1366;}
		if((strcmp(src,"K")!=0) &&  strcmp(dest,"D")!=0) {distance=1305;}
		if((strcmp(src,"C")!=0) &&  strcmp(dest,"A")!=0) {distance=1371;}
		if((strcmp(src,"C")!=0) &&  strcmp(dest,"D")!=0) {distance=1760;}
		if((strcmp(src,"C")!=0) &&  strcmp(dest,"K")!=0) {distance=1366;}

		cout<<"\n-------------------------------------";
		cout<<"\n\nAvailable airlines";
		cout<<"\n1.GO AIR";
		cout<<"\n2.INDIGO";
		cout<<"\n3.AIR INDIA";
		cout<<"\n4.VISTARA";
		cout<<"\n5.SPICEJET";
		cout<<"\n-------------------------------------";
		cout<<"\n\nEnter yor choice:";
		cin>>x;
			switch(x)
		{
			case 1:   {
					strcpy(airl,"Go Air");
					cout<<"\n\nTHANK YOU FOR CHOOSING *GO AIR*";
					cout<<"\nThe price would be as follows  ";
					cost=((distance*15)*no_of_adults)+((distance*10)*no_of_children);
					cout<<"\nTotal cost is=\t"<<cost;
				   }break;
			case 2: {
					strcpy(airl,"Indigo");
					cout<<"\n\tTHANK YOU FOR CHOOSING *INDIGO*";
					cout<<"\nThe price would be as follows  ";
					cost=((distance*25)*no_of_adults)+((distance*20)*no_of_children);
					cout<<"\nTotal cost is=\t"<<cost;
				   }    break;
			case 3: {
					strcpy(airl,"Air India");
					cout<<"\n\tTHANK YOU FOR CHOOSING *AIR INDIA*";
					cout<<"\nThe price would be as follows  ";
					cost=((distance*5)*no_of_adults)+((distance*10)*no_of_children);
					cout<<"\nTotal cost is=\t"<<cost;
				   } break;
			case 4: {
					strcpy(airl,"Vistara");
					cout<<"\n\tTHANK YOU FOR CHOOSING *VISTARA*";
					cout<<"\nThe price would be as follows  ";
					cost=((distance*20)*no_of_adults)+((distance*15)*no_of_children);
					cout<<"\nTotal cost is=\t"<<cost;
				   } break;
			case 5: {
					strcpy(airl,"Spicejet");
					cout<<"\n\tTHANK YOU FOR CHOOSING *SPICE JET*";
					cout<<"\nThe price would be as follows  ";
					cost=((distance*30)*no_of_adults)+((distance*25)*no_of_children);
					cout<<"\nTotal cost is=\t"<<cost;
				   } break;
			default: cout<<"We donot provide other airlines";
		}
	}

	void passoutput()
	{

		cout<<"\n\nNumber of adults:"<<no_of_adults;
		cout<<"\nNumber of children:"<<no_of_children;
		cout<<"\nEnter f code:" ;	gets(fcode);
		cout<<"\nEnter day:";	cin>>day;
		cout<<"\nEnter month";	cin>>month;
		cout<<"\nEnter year";	cin>>yr;
		for(int i=0;i<no_of_adults;i++)
		{
			cout<<"\nInfo for adult-"<<(i+1);
			cout<<"\n\tName:"<<namea;
			cout<<"\n\tAge:"<<agea;
			cout<<"\n\tPhone number:"<<ph_no;
			cout<<"\n\tGender:"<<gendera;
			cout<<"\n\tEmail id:"<<email;
		}
		for(int j=0; j<no_of_children;j++)
		{
			cout<<"\nInfo for child-"<<(j+1);
			cout<<"\n\tName:"<<namec;
			cout<<"\n\tAge:"<<agec;
			cout<<"\n\tGender:"<<genderc;
		}
		cout<<"\nCurrent location:"<<src;
		cout<<"\nDestination:"<<dest;
		cout<<"\ndistance: "<<distance;
		cout<<"\nAIRLINES:"<<airl;
		time=distance/900;
		cout<<"\nTime(in hours):"<<time;


	} //end of output function

	void boardingpass()
	{
		clrscr();
		cout<<"\nHERE ARE YOUR BOARDING PASSES:";
		for(int f=0,seqnoc;f<no_of_children;f++,seqnoc++)
		{
			cout<<"\n";
			cout<<"************************************************************";
			cout<<"\n"<<airl;
			cout<<"\nName:"<<namec;
			cout<<"\nFrom:";      if(strcmp(src,"D")!=0) {cout<<"Delhi";}
						      else if(strcmp(src,"A")!=0) {cout<<"Ahmedabad";}
						      else if(strcmp(src,"K")!=0) {cout<<"Kolkata";}
						      else if(strcmp(src,"C")!=0) {cout<<"Chennai";}
			cout<<"\t\t\t"<<"To:"; 	   if(strcmp(dest,"D")!=0) {cout<<"Delhi";}
						      else if(strcmp(dest,"A")!=0) {cout<<"Ahmedabad";}
						      else if(strcmp(dest,"K")!=0) {cout<<"Kolkata";}
						      else if(strcmp(dest,"C")!=0) {cout<<"Chennai";}
			cout<<"\nBoarding time:6:15"<<"\t\tDeparture time:7:00";
			cout<<"\t\t\t\tClass:A";
			cout<<"\nDate:"<<day<<"/"<<month<<"/"<<yr;
			cout<<"\t\t\tseq no:"<<seqnoc;
			cout<<"\nFlight No.:"<<fcode;
			cout<<"\n************************************************************";

		}
		for (int g=0,seqnoa=0;g<no_of_adults;g++,seqnoa++)
		{
			cout<<"\n";
			cout<<"************************************************************";
			cout<<"\n"<<airl;
			cout<<"\nName:"<<namea;
			cout<<"\nFrom:";      if(strcmp(src,"D")!=0) {cout<<"Delhi";}
						      else if(strcmp(src,"A")!=0) {cout<<"Ahmedabad";}
						      else if(strcmp(src,"K")!=0) {cout<<"Kolkata";}
						      else if(strcmp(src,"C")!=0) {cout<<"Chennai";}
			cout<<"\t\t\t"<<"To:"; 	   if(strcmp(dest,"D")!=0) {cout<<"Delhi";}
						      else if(strcmp(dest,"A")!=0) {cout<<"Ahmedabad";}
						      else if(strcmp(dest,"K")!=0) {cout<<"Kolkata";}
						      else if(strcmp(dest,"C")!=0) {cout<<"Chennai";}
			cout<<"\nBoarding time:6:15"<<"\t\tDeparture time:7:00";
			cout<<"\t\t\t\tClass:A";
			cout<<"\nDate:"<<day<<"/"<<month<<"/"<<yr;
			cout<<"\t\t\tseq no:"<<seqnoa;
			cout<<"\nFlight No.:"<<fcode;
			cout<<"\n************************************************************";

		}
			cout<<"\nHAVE A HAPPY AND A SAFE JOURNEY AND TRAVEL AGAIN";
			cout<<"\n\t\tBON VOYAGE";

	}


};		//end of class
void main()
{
	int opt;
	clrscr();
	airport a1;
	cout<<"\t\t\t\tCOMPUTER PROJECT";
cout<<"\n\t\t\t\tAIRPORT MANAGEMENT\n\t\t\t";
for (int i=0;i<12;i++)
cout<<"-";
for (int j=0;j<9;j++)
cout<<"*";
for (int k=0;k<12;k++)
cout<<"-";
cout<<"\n\n\n\t\t\t\tWELCOME TO XYZ AIRPORT\n\n\n\t\t\t";
for (int l=0;l<12;l++)
cout<<"-";
for(int h=0;h<9;h++)
cout<<"*";
for (int f=0;f<12;f++)
cout<<"-";
cout<<"\n\n\n\n\n\n\n\t\t\t\t\t      PROJECT BY:-Avyansh Chaturvedi";
cout<<"\n\t\t\t\t      \t                       -Prarthan Patel";
cout<<"\n\t\t\t\t      \t                       -Pratik Kelkar";
cout<<"\n\t\t\t\t      \t                       -Jainam Shah";
getch();
clrscr();
	cout<<"\n\nPlease press 'D' for Delhi, 'A' for Ahmedabad, 'C' for chennai and"<<"\n"<<"'K' for Kolkata";
	cout<<"\n1.Book Tickets";
	cout<<"\n2.Cancel tickets";
	cout<<"\n3.Modify your details";
	cout<<"\n4.";
	a1.airbooking();
	a1.passinput();
	a1.passoutput();
	a1.boardingpass();
	getch();
}