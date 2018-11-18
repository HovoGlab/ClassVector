#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

int rows_arrey;
int cols_arrey;
cout<<"Enter rows_arrey size: "; 
cin>>rows_arrey;	
cout<<"Enter cols_arrey size: ";
cin>>cols_arrey;
    int**arr=new int*[rows_arrey];
    for(int i=0;i<rows_arrey;i++)
       {arr[i]=new int[cols_arrey];} 
	   
    for(int i=0;i<rows_arrey;i++)
       {
	    for(int j=0;j<cols_arrey;j++)
           {
            arr[i][j]=rand() %10;
           }
       }
    
    
    for(int i=0;i<rows_arrey;i++)
       {
        for(int j=0;j<cols_arrey;j++)
          {
           cout<<arr[i][j]<<"\t";
          }
          cout<<endl;
       }
    



    for(int i;i<rows_arrey;i++)
        {delete [] arr[i];   }
    delete [] arr;
}


