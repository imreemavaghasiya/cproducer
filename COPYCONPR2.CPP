#include<iostream>
#include<string.h>
using namespace std;

class Copy{
	public :
	int X,Y,l;
	char point[100];
	
	Copy(int X,int Y){
		this->X = Y;
		this->Y = Y;
		cout<<" X = "<<X<<endl<<" Y = "<<Y<<endl;
	}
	Copy(Copy &n)
	{
		this->X = n.X;
		this->Y = n.Y;
		cout<<" X = "<<X<<endl<<" Y = "<<Y<<endl;
		
	}
	
	
};

int main(){
	Copy c(15,59);
	Copy d(c);
	cout<<endl<<"****************"<<endl;
	Copy e(17,27);
	Copy n1 = e;
	return 0;
}
