#include<iostream>
using namespace std;
double mpl(double m){
	double pul;
	pul=(m*100)/2.54;
	return pul;}
double map(double m){
	double pies;
	double pul;
	pul=(m*100)/2.54;
	pies=pul/12;
	return pies;}
	
double pam(double pl){
	double mts;
	double pies2;
	mts=pl*(2.54/100);
	return mts;}
	
double pap(double pl){
	double pies2;
	pies2=pl/12;
	return pies2;}
	
double piapl(double pi){
	double pl2;
	pl2=pi*12;
	return pl2;}
	
double piam(double pi){
double m2;
	m2=((pi*12)/2.54);}
	
int main(){
	int v;
	double m;
	double pl;
	double pi;
	do{
	cout<<"ingrese el numero de las conversiones que desea realizar"<<endl;
	cout<<"(1) de metros a pulgadas y pies"<<endl;
	cout<<"(2 de pulgadas a metros y pies"<<endl;
	cout<<"(3 de pies a pulgadas y metros"<<endl;
	cin>>v;
	if(v>3 && v<1) {
	switch(v){
		case 1:
			cout<<"ingrese los metros"<<endl;
			cin>>m;
			cout<<"pulgadas:  "<<mpl(m)<<endl<<"pies:  "<< map(m);
			break;
		case 2:
		    cout<<"ingrese las pulgadas"<<endl;
		    cin>>pl;
		    cout<<"metros:  "<<pam(pl)<<endl<<"pies:  "<<pap(pl);
			break;
		case 3:
		    cout<<"ingrese los pies"<<endl;
		     cin>>pi;
		    cout<<"pulgadas:   "<<piapl(pi)<<endl<<"metros:   "<<piam(pl);
		    break;
		default:
			cout<<"incorrecto";
					
	}
}
}
	while(v!=1,2,3);
}

