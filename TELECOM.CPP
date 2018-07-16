#include<iostream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream>
#include<string.h>
#include<dos.h>
void otrfrm();
void otrfrm1();
class graphics
{
  public:
  void fram()
  {
	int x;
	textcolor(4);
	for( x=2;x<=23;x++)
	{
		gotoxy(12,x);
		cprintf("Û");
		gotoxy(68,x);
		cprintf("Û");
	}
	for(x=12;x<=68;x++)
	{
		gotoxy(x,2);
		cprintf("Û");
		gotoxy(x,23);
		cprintf("Û");
	}
	gotoxy(15,3);
	textcolor(8);
	cprintf("B H A R A T  S A N C H A R  N I G A M  L I M I T E D");
  }
     void menu()
     {
	int x;
	gotoxy(28,4);
	textcolor(2);
	cprintf("     <<<<  MENU >>>> ");
	textcolor(9);
	for(x=5;x<=20;x++)
	{
		gotoxy(22,x);
		cprintf("Û");
		gotoxy(58,x);
		cprintf("Û");
	}
	for(x=22;x<=58;x++)
	{
		gotoxy(x,5);
		cprintf("Û");
		gotoxy(x,20);
		cprintf("Û");
	}
	gotoxy(26,7);
	cout<<"1 : Add New Customer.";
	gotoxy(26,8);
	cout<<"2 : Search for an account";
	gotoxy(26,9);
	cout<<"3 : List All Accounts.";
	gotoxy(26,10);
	cout<<"4 : Edit Customer Account ";
	gotoxy(26,11);
	cout<<"5 : Call Details.";
	gotoxy(26,12);
	cout<<"6 : Bills.";
	gotoxy(26,13);
	cout<<"7 : Bill Details.";
	gotoxy(26,14);
	cout<<"8 : Delete All Accounts.";
	gotoxy(26,15);
	cout<<"9 : Exit.";
	gotoxy(26,18);
	cout<<"Enter your choice:";
  }
  void frame1()
  {
	for(int x=5;x<=20;x++)
	{
		gotoxy(19,x);
		cout<<"ณ";
		gotoxy(61,x);
		cout<<"ณ";
	}
	for(x=19;x<=61;x++)
	{
		gotoxy(x,5);
		if(x==19)
			cout<<"ฺ";
		else if(x==61)
			cout<<"ฟ";
		else
			cout<<"ฤ";
		gotoxy(x,20);
		if(x==19)
			cout<<"ภ";
		else if(x==61)
			cout<<"ู";
		else
			cout<<"ฤ";
	}
		gotoxy(35,4);
		cout<<"NEW ACCOUNT";
		gotoxy(22,7);
		cout<<"Customer Name  :";
		gotoxy(22,9);
		cout<<"Address        :";
		gotoxy(22,11);
		cout<<"City           :";
		gotoxy(22,13);
		cout<<"State          :";
		gotoxy(22,15);
		cout<<"Pin code       :";
		gotoxy(22,17);
		cout<<"AccountNo.     :";
		gotoxy(22,19);
		cout<<"Telephone No.  :";
  }
  void infrm1()                          //frame for list
  {
    int x,y;
    for(x=2;x<=78;x++)
    {
      gotoxy(x,2);
      cout<<"อ";
      gotoxy(x,4);
      cout<<"อ";
      gotoxy(2,2);
      cout<<"ษ";
      gotoxy(78,2);
      cout<<"ป";
      gotoxy(22,2);
      cout<<"ห";
      gotoxy(35,2);
      cout<<"ห";
      gotoxy(64,2);
      cout<<"ห";
      gotoxy(22,25);
      cout<<"ส";
      gotoxy(35,25);
      cout<<"ส";
      gotoxy(64,25);
      cout<<"ส";
      gotoxy(2,25);
      cout<<"ศ";
      gotoxy(x,25);
      cout<<"อ";
      gotoxy(78,25);
      cout<<"ผ";
    }
    for(y=3;y<=24;y++)
    {
      gotoxy(2,y);
      cout<<"บ";
      gotoxy(22,y);
      cout<<"บ";
      gotoxy(35,y);
      cout<<"บ";
      gotoxy(64,y);
      cout<<"บ";
      gotoxy(78,y);
      cout<<"บ";
    }
  }
  void infrm2()                             //frame for bills
    {
    int x,y;
    for(x=12;x<=60;x++)
    {
      gotoxy(x,3);
      cout<<"อ";
      gotoxy(x,5);
      cout<<"อ";
      gotoxy(12,3);
      cout<<"ษ";
      gotoxy(60,3);
      cout<<"ป";
      gotoxy(36,5);
      cout<<"ห";
      gotoxy(36,20);
      cout<<"ส";
      gotoxy(12,20);
      cout<<"ศ";
      gotoxy(x,20);
      cout<<"อ";
      gotoxy(60,20);
      cout<<"ผ";
    }
    for(y=4;y<=19;y++)
    {
      gotoxy(12,y);
      cout<<"บ";
      if(y!=4&&y!=5)
      {
	gotoxy(36,y);
	cout<<"บ";
     }
      gotoxy(60,y);
      cout<<"บ";
    }
  }
};
class customers
{
   public:
   char name[20],addrs[50],city[15],state[15],pin[10],acno[15],telno[15];
   void newcustomer()
   {
    gotoxy(35,4);
    cout<<"NEW ACCOUNT";
    gotoxy(38,7);
    gets(name);
    gotoxy(38,9);
    gets(addrs);
    gotoxy(38,11);
    gets(city);
    gotoxy(38,13);
    gets(state);
    gotoxy(38,15);
    gets(pin);
    gotoxy(38,17);
    gets(acno);
    gotoxy(38,19);
    gets(telno);
   }
   void search()
   {
    gotoxy(28,4);
    cout<<"CUSTOMER DETAILS";
    gotoxy(40,7);
    cout<<name;
    gotoxy(40,9);
    cout<<addrs;
    gotoxy(40,11);
    cout<<city;
    gotoxy(40,13);
    cout<<state;
    gotoxy(40,15);
    cout<<pin;
    gotoxy(40,17);
    cout<<acno;
    gotoxy(40,19);
    cout<<telno;
   }
   void list(int y)
   {
	gotoxy(4,y);
	cout<<name;
	gotoxy(24,y);
	cout<<acno;
	gotoxy(37,y);
	cout<<addrs;
	gotoxy(66,y);
	cout<<telno;
   }
};
class bills
{
 public:char telno[15],rpd[10];
	long prev,pres;
	int dy;
	double cbcalls,st,fine,total,cbs,rpno;
 void callentries()
   {
     gotoxy(32,4);
     cout<<"CALL ENTRIES";
     gotoxy(40,6);
     cin>>telno;
     gotoxy(40,10);
     cin>>prev;
     gotoxy(40,12);
     cin>>pres;
     cbcalls=(pres-prev)-50;
     gotoxy(40,16);
     cout<<cbcalls;
     gotoxy(40,18);

     cbs=(cbcalls*1.50);
     cout<<cbs;
   }
 void bill()
   {
     gotoxy(28,4);
     cout<<"CUSTOMER'S BILL";
     st=(8*cbs)/100;
     gotoxy(40,6);
     cout<<telno;
     gotoxy(40,8);
     cout<<cbs;
     gotoxy(40,10);
     cout<<st;
     gotoxy(40,12);
     if(cbs!=0)
      cin>>dy;
     else
      cout<<0;
     gotoxy(40,14);
     if(dy>=1&&dy<=5)
     {
	fine=0;
	cout<<"No surcharges";
     }
     else if(dy>=6&&dy<=10)
     {
	fine=(0.10)*cbs;
	cout<<fine;
     }
     else if(dy>=11&&dy<=15)
     {
	fine=(0.15)*cbs;
	cout<<fine;
     }
     else if(dy>=16&&dy<=20)
     {
	fine=(0.20)*cbs;
	cout<<fine;
     }
     else
     {  if(cbs!=0)
	{
		fine=(0.25)*cbs;
		cout<<fine<<" + Disconect";
	}
	else
		cout<<0;

     }
     total=st+cbs+fine;
     gotoxy(40,16);
     cout<<total;
     gotoxy(40,18);
      gets(rpd);
    }
 void bid()
   {
     gotoxy(32,4);
     cout<<"BILL DETAILS";
     gotoxy(40,6);
     cout<<telno;
     gotoxy(40,8);
     cout<<cbs;
     gotoxy(40,10);
     cout<<st;
     gotoxy(40,12);
     cout<<dy;
     gotoxy(40,14);
     cout<<fine;
     gotoxy(40,16);
     cout<<total;
     gotoxy(40,18);
     cout<<rpd;
   }
};
void nwcstmr()
{
  fstream file;
  file.open("BSNL_C.dat",ios::app|ios::binary);
  customers C;
  C.newcustomer();
  file.seekp(0,ios::end);
  file.write((char*)&C,sizeof(C));
  gotoxy(32,21);
  cout<<"1 Record stored....";
  file.close();
}
void lst()                                           //For list
{
 fstream file;
 file.open("BSNL_C.dat",ios::in|ios::binary);
 customers C;
 graphics G;
 G.infrm1();
 textcolor(9);
 gotoxy(4,3);
 cprintf("Name    ");
 gotoxy(24,3);
 cprintf("Acc.No. ");
 gotoxy(37,3);
 cprintf("Address.");
 gotoxy(66,3);
 cprintf("Tel.No. ");
 int y=5;
 file.seekg(0,ios::beg);
 while(file.read((char*)&C,sizeof(C)))
 {
  C.list(y++);
 }
 file.close();
}
void srch()                                //For searching
{
 fstream file;
 customers C;
 graphics G;
 char tn[10];
 otrfrm();
 gotoxy(27,12);
 cout<<"Enter Tel.No.   :  ";
 cin>>tn;
 file.open("BSNL_C.dat",ios::in|ios::binary);
 file.seekg(0,ios::beg);
 int flag=0;
 clrscr();
 while(file.read((char*)&C,sizeof(C)))
 {
  if(strcmp(C.telno,tn)==0)
  {
   flag++;
   break;
  }
 }
 if(flag==0)
 {
  otrfrm();
  gotoxy(30,12);
  cout<<"RECORD DOES NOT EXIST!!!";
  textcolor(2);
  delay(1000);
  gotoxy(30,12);
  cprintf("Enter a Valid Number Please");
  textcolor(8);
 }
 else
 {
  G.fram();
  G.frame1();
  C.search();
 }
  file.close();
}
void cllentris()                       //For callentries
{
 graphics G;
 bills B;
 fstream file;
 file.open("BSNL_D.dat",ios::app|ios::binary);
 G.fram();
 gotoxy(15,6);
 cout<<"Tel.No.                :";
 gotoxy(15,8);
 cout<<"Free Calls Granted     : 50";
 gotoxy(15,10);
 cout<<"Previous Calls         :";
 gotoxy(15,12);
 cout<<"Present Calls          :";
 gotoxy(15,14);
 cout<<"Cost per Call          : 1.5";
 gotoxy(15,16);
 cout<<"Total Chargeable Calls :";
 gotoxy(15,18);
 cout<<"Call Costs             :";
 B.callentries();
 file.seekp(0,ios::end);
 file.write((char*)&B,sizeof(B));
 gotoxy(32,21);
 cout<<"1 Record stored....";
 file.close();
}
void bll()                    //For bills
{
 bills B;
 graphics G;
 char tn[15];
 otrfrm();
 gotoxy(28,12);
 cout<<"Enter Tel.No.   :  ";
 gets(tn);
 fstream file;
 file.open("BSNL_D.dat",ios::in|ios::binary);
 file.seekg(0,ios::beg);
 int flag=0;
 clrscr();
 while(file.read((char*)&B,sizeof(B)))
 {
  if(strcmp(B.telno,tn)==0)
  {
   flag++;
   break;
  }
 }
 file.close();

 if(flag==0)
 {
  otrfrm();
  gotoxy(30,12);
  cout<<"RECORD DOES NOT EXIST!!!";
  textcolor(2);
  delay(1000);
  gotoxy(28,12);
  cprintf("Enter a Valid Number Please");
  textcolor(8);
 }
 else
 {
  G.infrm2();
  gotoxy(15,6);
  cout<<"Tel.No.              ";
  gotoxy(15,8);
  cout<<"Call Costs           ";
  gotoxy(15,10);
  cout<<"Service Tax          ";
  gotoxy(15,12);
  cout<<"No. of days Late     ";
  gotoxy(15,14);
  cout<<"Surcharges           ";
  gotoxy(15,16);
  cout<<"Total Amount         ";
  gotoxy(15,18);
  cout<<"Date of Payment      ";
  file.open("BSNL_E.dat",ios::app|ios::binary);
  file.seekp(0,ios::end);
  B.bill();
  file.write((char*)&B,sizeof(B));
  gotoxy(32,21);
  cout<<"1 Record stored....";
  file.close();
 }
}
void bild()                //For bill details
{
 fstream file;
 file.open("BSNL_E.dat",ios::in|ios::binary);
 bills B;
 graphics G;
 char tn[15];int flag=0;
 otrfrm();
 gotoxy(28,12);
 cout<<"Enter Tel.No.   :  ";
 gets(tn);
 while(file.read((char*)&B,sizeof(B)))
 {
  if(strcmp(B.telno,tn)==0)
  {
   flag++;
   break;
  }
 }
 if(flag==0)
 {
  clrscr();
  otrfrm();
  gotoxy(30,12);
  cout<<"RECORD DOES NOT EXIST!!!";
  textcolor(2);
  delay(1000);
  gotoxy(30,12);
  cprintf("Enter a Valid Number Please");
  textcolor(8);
 }
 else
 {
  clrscr();
  G.fram();
  gotoxy(15,6);
  cout<<"Tel.No.              :";
  gotoxy(15,8);
  cout<<"Call Costs           :";
  gotoxy(15,10);
  cout<<"Service Tax          :";
  gotoxy(15,12);
  cout<<"No. of days Late     :";
  gotoxy(15,14);
  cout<<"Surcharges           :";
  gotoxy(15,16);
  cout<<"Total Amount         :";
  gotoxy(15,18);
  cout<<"Date of Payment      :";
  B.bid();
 }
 file.close();
}
void del()
{
 graphics G;
 clrscr();
 otrfrm();
 gotoxy(30,12);
 cout<<" Deleting All Files....";
 delay(1000);
 gotoxy(30,12);
 textcolor(4);
 cprintf("   All Files Deleted    ");
	 fstream file;
	 file.open("BSNL_C.dat",ios::out|ios::binary);
	 file.close();
	 file.open("BSNL_D.dat",ios::out|ios::binary);
	 file.close();
	 file.open("BSNL_E.dat",ios::out|ios::binary);
	 file.close();
}
void load()
{
  int i,j;
  for(i=25;i<=55;i++)
  {
    gotoxy(i,12);
    cout<<"ฤ";
    gotoxy(i,14);
    cout<<"ฤ";
  }
  for(j=12;j<=14;j++)
  {
    gotoxy(25,j);
    cout<<"ณ";
    gotoxy(55,j);
    cout<<"ณ";
  }
  gotoxy(25,12);
  cout<<"ฺ";
  gotoxy(55,12);
  cout<<"ฟ";
  gotoxy(25,14);
  cout<<"ภ";
  gotoxy(55,14);
  cout<<"ู";
  for(int m=6;m<=8;m++)
  {
   delay(200);
   gotoxy(20,11);
   textcolor(6);
   cprintf("WELCOME TO OUR PROJECT");
   delay(200);
   gotoxy(20,11);
   textcolor(8);
   cprintf("WELCOME TO OUR PROJECT");
   gotoxy(28,13);
   textcolor(2);
   delay(200);
   cprintf("INITIALISING");
   textcolor(15);
   gotoxy(40,13);
   delay(200);
   cprintf(" ....         ");
   textcolor(15);
   gotoxy(40,13);
   delay(200);
   cprintf(" .......      ");
   textcolor(15);
   gotoxy(40,13)
   ;
   delay(200);
   cprintf(" ..........   ");
   textcolor(15);
   gotoxy(40,13);
   delay(200);
   cprintf(" .............");
  }
  delay(1000);
  textcolor(3);
}
void name()
{
  clrscr();
  int x,y;
  textcolor(2);
  delay(200);                         //R
  for(y=2;y<=7;y++)
  {
    {
    gotoxy(25,y);
    cprintf("||");
    gotoxy(35,y);
    cprintf("||");
    }
  }
  for(x=25;x<=35;x++)
    {
     gotoxy(x,2);
     cprintf("||");
     gotoxy(x,7);
     cprintf("||");
    }
  for(y=6;y<=12;y++)
  {
    gotoxy(25,y);
    cprintf("||");
  }
  for(x=26,y=7;x<=31;x++,y++)
  {
    gotoxy(x+3,y);
    cprintf("//");
  }
  for(x=25;x<=35;x++)
  {
    gotoxy(x,7);
    cprintf("||");
  }
  delay(600);                                        //H
  textcolor(4);
  for(y=8;y<=18;y++)
  {
    gotoxy(37,y);
    cprintf("ฒ");
    gotoxy(48,y);
    cprintf("ฒ");
  }
  for(x=37;x<=48;x++)
  {
    gotoxy(x,13);
    cprintf("ฒ");
  }
  delay(600);
  textcolor(2);                                      //R
  for(y=2;y<=7;y++)
  {
    {
    gotoxy(49,y);
    cprintf("||");
    gotoxy(59,y);
    cprintf("||");
    }
  }
  for(x=49;x<=59;x++)
    {
     gotoxy(x,2);
     cprintf("||");
     gotoxy(x,7);
     cprintf("||");
    }
  for(y=6;y<=12;y++)
  {
    gotoxy(59,y);
    cprintf("||");
  }
  for(x=58,y=7;x>=53;x--,y++)
  {
    gotoxy(x-3,y);
    cprintf("//");
  }
  for(x=49;x<=59;x++)
  {
    gotoxy(x,7);
    cprintf("||");
  }
  for(x=1;x<2;x++)                                      //Name
 {
  delay(500);
  textcolor(3);
  gotoxy(32,20);
  cprintf("Project Developed By ");
  delay(500);
  textcolor(8);
  gotoxy(32,20);
  cprintf("Project Developed By ");
  delay(500);
  textcolor(4);
  gotoxy(12,22);
  cprintf("* RISHABH KUMAR");
  delay(500);
  textcolor(8);
  gotoxy(12,22);
  cprintf("* RISHABH KUMAR");
  delay(500);
  textcolor(5);
  gotoxy(32,22);
  cprintf("* HARSH GORASIA");
  delay(500);
  textcolor(8);
  gotoxy(32,22);
  cprintf("* HARSH GORASIA");
  delay(500);
  textcolor(6);
  gotoxy(52,22);
  cprintf("* ROHIT DEWANGAN");
  delay(500);
  textcolor(8);
  gotoxy(52,22);
  cprintf("* ROHIT DEWANGAN");
  delay(500);
  textcolor(6);
  gotoxy(25,24);
  cprintf("         CLASS XII A            ");
  delay(500);
  textcolor(15);
  gotoxy(25,24);
  cprintf("Nirmal Higher Secondary School");
}
  delay(2000);
}
void pass()
{
     for(int s=2;s>=0;s--)
     {
	clrscr();
	delay(100);
	char pas[10]="$rhr$";
	char un[30]="nv123";
	char u[30];
	char pa[10];
	gotoxy(34,7);
	cout<<"LOG IN WINDOW";
	delay(110);
	for(int x=20;x<=60;x++)
	{
	 gotoxy(x,8);
	 cout<<"Û";
	 gotoxy(x,18);
	 cout<<"Û";
	}
	for( x=8;x<=18;x++)
	{
	 gotoxy(20,x);
	 cout<<"Û";
	 gotoxy(60,x);
	 cout<<"Û";
	}
	textcolor(9);
	gotoxy(22,11);
	cout<<"NAME     : ";
	cin>>u;
	gotoxy(22,14);
	cout<<"PASSWORD : ";
	for( int i=0 ;i<10;i++)
	{
	  pa[i]=getch();
	  if(pa[i]==13)
	   break;
	   else
	   cout<<"*";

	}
	pa[i]='\0';

	  if(strcmp(un,u)==0 && strcmp(pas,pa)==0)
	  {
	      gotoxy(30,16);
	      textcolor(2);
	      cprintf("!!Access Granted!!");
	      delay(600);
	      break;
	  }
	  else
	  {
	     if(s!=0)
	     {
	      int x;
	      gotoxy(20,20);
	      cout<<"Access Denied";
	      gotoxy(20,22);
	      cout<<"Press 0 to exit and 1 to re-enter ";
	      cin>>x;
	      if(x!=0)
	      {
	       gotoxy(20,23);
	       cout<<"Attempts Left : "<<s;
	      }
	      else
		exit(0);
	      }
	     else
	     {
	      clrscr();
	      otrfrm1();
	      textcolor(4);
	      gotoxy(22,12);
	      cprintf("ACCESS DENIED FOR SECURITY CONCERNS");
	      gotoxy(24,13);
	      cprintf("CHECK YOUR USERNAME AND PASSWORD");
	      delay(2000);
	      exit(0);
	     }
	     getch();
	    }
  }
}
void frm()                                               //loading window
{
 clrscr();
 int x,y,z;
 textcolor(4);
 for(y=2;y<=8;y++)                                      //B
 {
   gotoxy(19,y);
   cprintf("!!");
   if(y!=4 && y!=5 && y!=6)
   {
   gotoxy(27,y);
   cprintf("!!");
   }
   gotoxy(y+19,2);
   cprintf("!!");
   gotoxy(y+19,8);
   cprintf("!!");
   gotoxy(y+17,5);
   cprintf("!!");;
   gotoxy(27,4);
   cprintf("//");
   gotoxy(27,6);
   cprintf("//");
 }
 textcolor(2);
 for(x=31;x<=39;x++)                                      //S
 {
   gotoxy(x,2);
   cprintf("%");
   gotoxy(x,8);
   cprintf("%");
   gotoxy(x,5);
   cprintf("%");
   if(x<34)
   {
   gotoxy(31,x-29);
   cprintf("%");
   }
   else if(x-29<=8)
   {
   gotoxy(39,x-29);
   cprintf("%");
   }
 }
 textcolor(9);
 for(z=2;z<=8;z++)                                    //N
 {
   gotoxy(41,z);
   cprintf("ญญ");
   gotoxy(50,z);
   cprintf("ญญ");
 }
 for(x=42,y=5;x<=48;x++,y++)
 {
   gotoxy(x+1,y-3);
   cprintf("/");
 }
 textcolor(6);                                      //L
 for(y=2;y<=8;y++)
 {
   gotoxy(53,y);
   cprintf("||");
   gotoxy(y+51,8);
   cprintf("||");
 }
 textcolor(8);
 for( x=10;x<=20;x++)              //box1
 {
  gotoxy(16,x);
  cprintf("ณ");
  gotoxy(62,x);
  cprintf("ณ");
 }
 for(x=16;x<=62;x++)
 {
  gotoxy(x,10);
  cprintf("ฤ");
  gotoxy(x,20);
  cprintf("ฤ");
 }
 gotoxy(16,10);
 cprintf("ฺ");
 gotoxy(16,20);
 cprintf("ภ");
 gotoxy(62,10);
 cprintf("ฟ");
 gotoxy(62,20);
 cprintf("ู");
 textcolor(15);
 for( x=15;x<=17;x++)              //box2
 {
  gotoxy(27,x);
  cprintf("ณ");
  gotoxy(53,x);
  cprintf("ณ");
 }
 for(x=27;x<=53;x++)
 {
  gotoxy(x,15);
  cprintf("ฤ");
  gotoxy(x,17);
  cprintf("ฤ");
 }
 gotoxy(27,15);
 cprintf("ฺ");
 gotoxy(27,17);
 cprintf("ภ");
 gotoxy(53,15);
 cprintf("ฟ");
 gotoxy(53,17);
 cprintf("ู");
 gotoxy(26,14);
 cprintf("LOADING");
 for(x=28;x<=52;x++)
 {
   gotoxy(x,16);
   cprintf("Û");
 }
 for(x=28,z=4;x<=52;x++,z+=4)
 {
   gotoxy(50,14);
   delay(60);
   cout<<z<<"%";
   textcolor(8);
   delay(60);
   gotoxy(x,16);
   cprintf("Û");
   textcolor(15);
   gotoxy(30,24);
   cprintf("CONNECTING INDIA");
   delay(30);
 }
   delay(1000);
}
void otrfrm()
{
	clrscr();
	int x;
	for(x=11;x<=13;x++)
	{
		gotoxy(26,x);
		cout<<"บ";
		gotoxy(58,x);
		cout<<"บ";
	}
	for(x=26;x<=58;x++)
	{
		gotoxy(x,11);
		if(x==26)
			cout<<"ษ";
		else if(x==58)
			cout<<"ป";
		else
			cout<<"อ";
		gotoxy(x,13);
		if(x==26)
			cout<<"ศ";
		else if(x==58)
			cout<<"ผ";
		else
			cout<<"อ";
	}
}
void otrfrm1()
{
	clrscr();
	int x;
	for(x=11;x<=14;x++)
	{
		gotoxy(20,x);
		cout<<"บ";
		gotoxy(60,x);
		cout<<"บ";
	}
	for(x=20;x<=60;x++)
	{
		gotoxy(x,11);
		if(x==20)
			cout<<"ษ";
		else if(x==60)
			cout<<"ป";
		else
			cout<<"อ";
		gotoxy(x,14);
		if(x==20)
			cout<<"ศ";
		else if(x==60)
			cout<<"ผ";
		else
			cout<<"อ";
	}
}
void ext()
{
	otrfrm();
	delay(100);
	textcolor(2);
	gotoxy(28,12);
	cprintf("TERMINATING THE PROGRAM ...");
	delay(1000);
	textcolor(4);
	gotoxy(28,12);
	cprintf("      THANK YOU      ");
	gotoxy(30,18);
	cprintf("SOFTWARE DEVELOPERS");
	gotoxy(12,20);
	cout<<"฿ RISHABH KUMAR  ฿ HARSH GORASIA  ฿ ROHIT DEWANGAN";
	delay(2000);
	exit(0);
}

void main()
{
	clrscr();
	load();
	name();
	pass();
	frm();
	while(1)
	{
	 int ch;
	 clrscr();
	 graphics G;
	 customers C;
	 bills B;
	 G.fram();
	 G.menu();
	 cin>>ch;
	 fflush(stdin);
	 switch(ch)
	 {
		case 1: clrscr();
			G.fram();
			G.frame1();
			nwcstmr();
			break;
		case 2: clrscr();
			srch();
			break;
		case 3: clrscr();
			lst();
			break;
		case 4: clrscr();
			break;
		case 5: clrscr();
			cllentris();
			break;
		case 6: clrscr();
			bll();
			break;
		case 7: clrscr();
			bild();
			break;
		case 8: clrscr();
			del();
			break;
		case 9: ext();
			break;
		default:clrscr();
			gotoxy(30,12);
			cout<<"Invalid Entry!!!";
	}
	getch();
	}
}
