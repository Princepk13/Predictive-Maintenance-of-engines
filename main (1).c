#include <stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int num,num1;
    char str[10000];
    printf("Enter Den number: \n");
    scanf("%d",&num);
    printf("Enter Number of points: \n");
    scanf("%d",&num1);
    printf("Enter the points: \n");
    scanf("\n%[^\n]%*c", str);
    char c; 
    int i,j=0; 
    int digit[2*num1];
    for(i=0;i<strlen(str);i++) 
    { 
	c = str[i]; 
	if(c>='0' && c<='9')  
	{ 
		digit[j] = c-'0'; 
		j=j+1;
	}
    }
   int arr[num1-1][2];
   int k=0;
    for(i=0;i<num1;i++){
        for(j=0;j<2;j++){
        arr[i][j]=digit[k];
        k=k+1;
        }
        
        }
    float maxdist=0;
    int a1,a2,b1,b2;
    for(i=0;i<num1-1;i++){
        int x1=arr[i][0];
        int y1=arr[i][1];
       
       
        for(j=i+1;j<num1;j++){
         
        int x2=arr[j][0];
        int y2=arr[j][1];
      
        float dist=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        
        
        
        if(maxdist<dist){
            maxdist=dist;
            a1=x1;a2=x2;b1=y1;b2=y2;
        }
        }
    
    } 
    printf("\nMaximum distance is between points (%d,%d) and (%d,%d) which is %f",a1,b1,a2,b2,maxdist);
    printf("\nTime taken is %f",maxdist/num);
    


}
