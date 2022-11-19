#include<bits/stdc++.h>
#define N 3
using namespace std;

int main()
{
	float Matrix[N][N+1],x[N];
	float temp;
     int i,j,k;

	cout<<"Enter Elements of "<<N<<" Rows & "<<N+1<<" Columns\n";

	for(i=0; i<N; i++)
	{
		cout<<"\tEnter Row  "<<i+1<<" & Press Enter\n";
		for(j=0; j<N+1; j++)
		cin>>Matrix[i][j];
	}

	cout<<fixed;
	for(j=0; j<N; j++)

		for(i=0; i<N; i++)
		if(i!=j)
		{
			temp=Matrix[i][j]/Matrix[j][j];

			for(k=0; k<N+1; k++)
				Matrix[i][k]-=Matrix[j][k]*temp;
		}


	cout<<"\n The Solution is:\n";
	for(i=0; i<N; i++)
	 cout<<"x["<<setw(3)<<i+1<<"]="<<setw(7)<<setprecision(4)<<Matrix[i][N]/Matrix[i][i]<<endl;

return 0;
}
