# include<iostream>
using namespace std;
void Primeaverage(){
	int val;    int primesum;   float count;   float avgOfPrimeNumbers;
	primesum = 0;      count = 0;
	cout<<"Enter positive integer: ";
	cin>>val;
	cout<<"----------------------------------------------------------------------------------"<<endl;
	cout<<"Prime numbers below "<<val<<" are"<<endl;
	cout<<"----------------------------------------------------------------------------------"<<endl;
    for(int x=2;x<val;x++){
    	int pass=0;
    	for(int i=2;i<=x/2;i++){
    		if(x%i==0){
    			pass=1; break;
	    	}
		}
		if (pass==0){
		cout<<x<<endl;
		primesum+=x;
		count+=1;
	    }
	}
	avgOfPrimeNumbers = primesum/count;
	cout<<"The sum of the the printed prime numbers above is "<<primesum<<endl;
	cout<<"The count of the prime numbers is "<<count<<endl;
	cout<<"The average the of the sum of the prime numbers above is "<<avgOfPrimeNumbers<<endl;
}
int main(){
	Primeaverage();
	return 0;
}
