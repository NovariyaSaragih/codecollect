#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#define f(x) tan(x) - (x) - (1)

using namespace std;
int main()
{
	system("cls");
	 float x1, x2, xr, f1, f2, fxr, e;
	 int step = 1;
cout <<"Carilah akar persamaan dari f(x) = tan(x) - (x) - (1) Menggunakan Metode Bisection";
     cout<< setprecision(10)<< fixed;
	 up:
	 cout<<"\n\n\t- Input nilai x1 : ";
     cin>>x1;
     cout<<"\t- Input nilai x2 : ";
     cin>>x2;
     cout<<"\t- Input nilai epsilon : ";
     cin>>e;
	 f1 = f(x1);
	 f2 = f(x2);

	 if( f1 * f2 > 0.0)
	 {
		  cout<<"Tidak ada akar persamaan."<< endl;
		  goto up;
	 }
     cout<< endl<<"------------------------------------------------------------------"<< endl;
	 cout<<"			Bisection Method				                 "<< endl;
	 cout<<"------------------------------------------------------------------"<< endl;
	 do 
	 {
		  xr = (x1 + x2)/2;
		  fxr = f(xr);

		  cout<<"Iterasi-"<< step<<" :\t xr = "<< setw(10)<< xr<<" and f(xr) = "<< setw(10)<< f(xr)<< endl;

		  if( f1 * fxr < 0)
		  {
			   x2 = xr;
		  }
		  else
		  {
			   x1 = xr;
		  }
		  step = step + 1;
	 }while(fabs(fxr)>e);
     	 cout<<"------------------------------------------------------------------"<< endl;
     	 cout<<"------------------------------------------------------------------"<< endl;

 cout<<"\nAkarnya adalah : "<<  xr<< endl;

	return 0;
}



     
