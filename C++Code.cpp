#include<iostream>
#include<string.h> 
#include<stdio.h>
#define max 3      //for instance let no. of students providing data be 5 in each batch
using namespace std;
class batch2;
class batch1       //class with details of  cse batch 1
{
	string name;
	int roll;
	static int year;
	float g1;
	float g2;
	float avg;
	string m;	
	public:
		batch1()
		{
	
		}
		void avgcalc()
		{
			avg=((g1*21)+(g2*25))/46;
		}
		static int gety()   //static member function
		{
			return year;
		}
		void display();
		void get();
};







int batch1::year=2;
inline void batch1::get()
{
	cout<<"enter name"<<endl;
	cin>>name;
	cout<<"enter rollno"<<endl;
	cin>>roll;
	cout<<"enter mode of accomodation"<<endl;
	cin>>m;
	cout<<"enter gpa of sem1"<<endl;
	cin>>g1;
	cout<<"enter gpa of sem2"<<endl;
	cin>>g2;
	cout<<endl;
}
void batch1::display()
{

    if(avg>=8)
    {
    		cout<<"NAME= "<<name<<endl;
        	cout<<"ROLLNO= "<<roll<<endl;
        	cout<<"YEAR OF STUDY= "<<gety()<<endl;
            	cout<<"MODE OF ACCOMODATION= "<<m<<endl;
        	cout<<"AVERAGE OF TWO SEMS= "<<avg<<endl;
        	cout<<"___________________________________"<<endl;
        	cout<<"ELIGIBLE"<<endl;
        	cout<<endl;
	}
	else
	{
		cout<<"NAME= "<<name<<endl;
      		cout<<"ROLLNO= "<<roll<<endl;
	      	cout<<"YEAR OF STUDY= "<<gety()<<endl;
            	cout<<"MODE OF ACCOMODATION= "<<m<<endl;
	      	cout<<"AVERAGE OF TWO SEMS= "<<avg<<endl;
	      	cout<<"_________________________________________"<<endl;
		cout<<"NOT ELIGIBLE"<<endl;
		cout<<endl;
	}
	cout<<endl;
}















class batch2   //class containing details of cse batch 2
{
    string n;
	int r;
	static int y;
	float gpa1;
	float gpa2;
	float avgr;
	//int count2=0;
	string ma;	
	public:
		batch2()
		{
		}
		void avgrcalc()
		{
			avgr=((gpa1*21)+(gpa2*25))/46;
		}
		static int getyear()
		{
			return y;
		}	
		void show();
		void getdata();
	    
};
int batch2::y=2;
inline void batch2::getdata()    //inline function
{
	cout<<"enter name"<<endl;
	cin>>n;
	cout<<"enter rollno"<<endl;
	cin>>r;
	cout<<"enter mode of accomodation"<<endl;
	cin>>ma;
	cout<<"enter gpa of sem1"<<endl;
	cin>>gpa1;
	cout<<"enter gpa of sem2"<<endl;
	cin>>gpa2;
	cout<<endl;
}
void batch2::show()
{
    	if(avgr>=8)
    	{
    		cout<<"NAME= "<<n<<endl;
        	cout<<"ROLLNO= "<<r<<endl;
        	cout<<"YEAR OF STUDY= "<<getyear()<<endl;
            	cout<<"MODE OF ACCOMODATION= "<<ma<<endl;
        	cout<<"AVERAGE OF TWO SEMS= "<<avgr<<endl;
        	cout<<"______________________________________________"<<endl;
        	cout<<"ELIGIBLE"<<endl;
        	cout<<endl;
    	}
	else
	{
		cout<<"NAME= "<<n<<endl;
    		cout<<"ROLLNO= "<<r<<endl;
	    	cout<<"YEAR OF STUDY= "<<getyear()<<endl;
        	cout<<"MODE OF ACCOMODATION= "<<ma<<endl;
	    	cout<<"AVERAGE OF TWO SEMS= "<<avgr<<endl;
	    	cout<<"_____________________________________________________"<<endl;
		cout<<"NOT ELIGIBLE"<<endl;
		cout<<endl;
   	}
}




class grade1;
class grade2
{
	float pds1;
	float eg;
	float epl;
	float pdslab;
	float te;
	float edc;
	float evs;
	float m2;
	float gpa2;
	public:
		friend class grade1;
		friend void display(grade2);//friend function
		grade2() //default constructor
		{
			cout<<"GPA CALCULATOR FOR SEM 2";
		} 
		grade2(float p,float q,float r,float s,float t,float u,float v,float w)    //parameterised constructor
		{
			
			pds1=p;
			eg=q;
			epl=r;
			pdslab=s;
			te=t;
			edc=u;
			evs=v;
			m2=w;
		}
		grade2(const grade2 &a1)      //copy constructor
		{
			pds1=a1.pds1;
			eg=a1.eg;
			epl=a1.epl;
			pdslab=a1.pdslab;
			te=a1.te;
			edc=a1.edc;
			evs=a1.evs;
			m2=a1.m2;
			
		}
		float calculate() //calculation using credits of respective subjects;
		{  

  			gpa2=((pds1*3)+(eg*4)+(epl*2)+(pdslab*2)+(te*4)+(edc*3)+(evs*3)+(m2*4))/25;
                	return gpa2;
		}				
};
void display(grade2 a2)
{		
	cout<<"YOUR GPA FOR SECOND SEM = "<<a2.calculate();
}



class grade1
{
	float fe;
	float ep;
	float ec;
	float m1;
	float ct;
	float ctl;
	float bsl;
	float gpa1;
	public:
		friend void show(grade1 b1);
		grade1() //default constructor
		{
			cout<<"GPA CALCULATOR FOR SEM 1";
		} 
		grade1(	float p1,float q1,float r1,float s1,float t1,float u1,float v1)    //parameterised constructor
		{
			
			
			fe=p1;
			ep=q1;
			ec=r1;
			m1=s1;
			ct=t1;
			ctl=u1;
			bsl=v1;
		}
		grade1(const grade1 &b1)      //copy constructor
		{
			fe=b1.fe;
			ep=b1.ep;
			ec=b1.ec;
			m1=b1.m1;
			ct=b1.ct;
			ctl=b1.ctl;
			bsl=b1.bsl;			
		}
		void calculate() //calculation using credits of respective subjects;
		{
			gpa1=((fe*4)+(ep*3)+(ec*3)+(m1*4)+(ct*3)+(ctl*2)+(bsl*2))/21;
		}
		void show()
		{
			cout<<"YOUR GPA OF SEM1= "<<gpa1<<endl;
		}
        
};


int main()
{
	int cal;
	cout<<"Please enter accurate gpa of both the sems if it is known already."<<endl;
	cout<<"Else use the gpa calculator for calculating your gpa of sem1 and sem2."<<endl;
    	int stop;
	while(stop!=0)
	{
		cout<<"to use th GPA CALCULATOR press 1"<<endl;
		cout<<"to exit from calculator press 0"<<endl;
      		cin>>cal;
		switch(cal)
		{
			case 1:
				float p1,q1,r1,s1,t1,u1,v1;	
                		cout<<"Enter your grade points for each subject of semester 1"<<endl;
                       		cout<<"O=10 ; A+=9 ; A=8 ; B+=7 ; B=6 "<<endl;  
	                 	cout<<"FOUNDATION ENGLISH = ";
	                 	cin>>p1;
	                 	cout<<"ENGINEERING PHYSICS = ";
	                 	cin>>q1;
	                 	cout<<"ENGINEERING CHEMISTRY = ";
	                 	cin>>r1;
	                 	cout<<"MATHEMATICS 1= ";
	                 	cin>>s1;	
	                 	cout<<"COMPUTING TECHNIQuES = ";
	                 	cin>>t1;
	                 	cout<<"CT LAB = ";
	            		cin>>u1;
	            		cout<<"BSL = ";
	            		cin>>v1;
	            		grade1 b1(p1,q1,r1,s1,t1,u1,v1);
	           		b1.calculate();
	            		grade1 b2(b1);
	            		b2.calculate();
	            		b2.show();
	            		cout<<"________________________________________________________________________"<<endl;
	        		float p,q,r,s,t,u,v,w;
	            		cout<<"Enter your grade points for each subject of semester 2"<<endl;
	            		cout<<"O=10 ; A+=9 ; A=8 ; B+=7 ; B=6 "<<endl;  
            			cout<<"PROGRAMMING DATA STRUCTURES 1= ";  
            			cin>>p;
	           		cout<<"ENGINEERING GRAPHICS= ";  
             			cin>>q; 
	            		cout<<"ENGINEERING PRACTICES LABORATORY= ";
	            		cin>>r;
            			cout<<"PDS-1 LAB= ";
            			cin>>s;
	            		cout<<"TECHNICAL ENGLISH= ";
            			cin>>t;
            			cout<<"ELECTRONIC DEVICeS AND CIRCUITS= ";
	           		cin>>u; 
             			cout<<"ENVIRONMENTAL SCIENCE AND ENGINEERING= ";
	            		cin>>v;
             			cout<<"MATHEMATICS 2= ";
	            		cin>>w;
	            		grade2 a1(p,q,r,s,t,u,v,w);
             			a1.calculate();
             			grade2 a2(a1);
             			a2.calculate();
            			display(a2);
            			break;
              	
            		
        }
        cout<<endl;
	cout<<"BATCH 1 DETAILS"<<endl;
	batch1 a[max]; //array of objects
        int i;
	for(i=0;i<max;i++)
	{
		a[i].get();
	        cout<<"\n";
        }
        for(i=0;i<max;i++)
        {  
	       a[i].avgcalc();
        }
        cout<<"_______________________________________________________________________________________";
        cout<<"BATCH 2 DETAILS"<<endl;
        batch2 b[max];
        for(i=0;i<max;i++)
	{
     		b[i].getdata();
     		cout<<"\n";
        }
        for(i=0;i<max;i++)
        {
	       b[i].avgrcalc();
        }
        for(i=0;i<max;i++)
        {
	       a[i].display();
	       cout<<"\n";
        }  
        for(i=0;i<max;i++)
        {
	       b[i].show();
	       cout<<"\n";
        }
	cout<<"enter 0 to stop"<<endl;
	cin>>stop; 
    }
    
    
}

