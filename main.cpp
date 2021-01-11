#include <iostream>
using namespace std;

int main()
{
	string arr[15][15];
	int x,y;
	int n=3,m=2;
	char move;
	int Score=0;
	
	// Storage of the map
	
	for(x=0; x<15; x++)
	{
		for(y=0; y<15; y++)
		{
			cout<<arr[x][y];
		}
	}

       // Designing the map
       
       for(x=0; x<15; x++)
	{
		for(y=0; y<15; y++)
		{
			if( x==0 || x==14)
			{
				arr[x][y]="#";
			}
			
			else if ( y==0 || y==14 )
			{
				arr[x][y]="#";
			}
			
			else if ( x==5 && y>2 && y<10)
			{
				arr[x][y]="#";
			}
			
			else if ( x==9 && y>2 && y<10)
			{
				arr[x][y]="#";
			}
			
			else if ( y==9 && x>2 && x<10)
			{
				arr[x][y]="#";
			}
			
			else if ( y==12 && x>2 && x<10)
			{
				arr[x][y]="#";
			}
			
			else if ( y==1 && x>6 && x<10)
			{
				arr[x][y]="#";
			}
			
			else 
			{
				arr[12][12]="0";
				
				arr[x][y]=".";
			}
		}
	}
	
	// printing the map
	
	
	arr[n][m]="@";
	cout<<"\t\t\tScore: "<<Score;
	cout<<endl;
	for(x=0; x<15; x++)
	{
		for(y=0; y<15; y++)
		{
			cout<<arr[x][y]<<" ";
		}
		cout<<endl;
	}
	
	while (true)
	{
		cout<<"\nEnter the move: ";
		cin>>move;
		
		if( move == 's')
		{
			n++;
			
			if(n>0)
			{
				arr[n-1][m]=" ";
			}
		}
		
		if( move == 'w')
		{
			n--;
			
			if(n>0)
			{
				arr[n+1][m]=" ";
			}
		}
		
		if( move == 'a')
		{
			m--;
			
			if(m>0)
			{
				arr[n][m+1]=" ";
			}
		}
		
		if( move == 'd')
		{
			m++;
			
			if(n>0)
			{
				arr[n][m-1]=" ";
			}
		}
		
		if(arr[n][m]=="0")
		{
			cout<<"FINISH"<<endl;
			cout<<"Score: "<<Score;
			cout<<endl;
			break;
		}
		
		if(arr[n][m]=="#")
		{
			cout<<"Game Over"<<endl;
			cout<<"Score: "<<Score;
			cout<<endl;
			break;
		}
		
		if (arr[n][m]==".")
		{
			Score+=1;
			
		}
		
		system("cls");
		arr[n][m]="@";
		cout<<"\t\t\tScore: "<<Score;
	    cout<<endl;
	       for(x=0; x<15; x++)
		   {
		      for(y=0; y<15; y++)
	         	{
			        cout<<arr[x][y]<<" ";
		        }
		       cout<<endl;
	        }
	} 
}

