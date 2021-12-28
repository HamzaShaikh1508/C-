#include<iostream>
using namespace std;

class time{
	private:
		int seconds;
		int hh,mm,ss;
	public:
		void getTime(void);
		void convertintoseconds(void);
		void displaytime(void);	
};
void time::getTime(void){
	cout<<"Enter time ";
	cout<<"\nHours : ";
	cin>>hh;
	cout<<"\nminutes : ";
	cin>>mm;
	cout<<"\nseconds : ";
	cin>>ss;
}
 void time::convertintoseconds(void){
 	seconds = ss + 60*mm + 3600*hh;
}
 void time::displaytime(void){
 	cout<<"\nHours : "<<hh;
 	cout<<"\nminutes : "<<mm;
 	cout<<"\nseconds : "<<ss;
 	cout<<"\nThe time in seconds is : "<<seconds;
}
int main(){
	time t;
	t.getTime();
	t.convertintoseconds();
	t.displaytime();
	return 0;
	
}
 
 
 
 
 
 
