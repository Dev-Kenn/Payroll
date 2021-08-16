#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {	
	
	char ans = 'Y';
   	int empno, hours, rate, salary, anss, sp, gt;
   	char name [50];
    int choice = 0;
    
    cout<<"     See Sharp Company"<<endl;
    cout<<"     Quezon City"<<endl;
    cout<<"     Payroll Report\n\n\n"<<endl;
    
    do{	
	cout <<"EMPLOYEE NUMBER: ";
	cin>>empno;
	cout <<"EMPLOYEE NAME: ";
	cin>>name;
	cout <<"NO. OF HOURS WORKED: ";
	cin>>hours;
	cout <<"RATE PER HOUR: ";
	cin>>rate;
	
	salary = rate * hours;
    cout <<"YOUR SALARY IS: "<<salary<<endl;
    cout <<"GRAND TOTAL SALARY IS : "<<salary<<endl;
    
    
   	cout<<"\n\nPROCESS ANOTHER? (Y/N): ";
	cin>>ans;
	
	}while ((ans=='Y')||(ans=='y'));
	cout<<"\nTOTAL NUMBER OF TRANSACTION: "<<sp<<endl;
    cout<<"Press any key to continue...";
    system("pause");
    
}
