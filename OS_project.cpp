
#include <stdio.h>
#include <stdlib.h>
main(){
	int n,i;
	printf("enter the number of process you want to entered");
	scanf("%d",&n);
	int id[n],at[n],bt[n];
	
	for(i=0;i<n;i++){                 //the complexity of the loop is n
		printf("enter the process id  \n");
		scanf("%d",&id[i]);
		printf("enter the arrival time of process %d\n",id[i]);
		scanf("%d",&at[i]);
		printf("enter the burst time of process %d\n",id[i]);
		scanf("%d",&bt[i]);
	}
	int ind,min,k,f,j,m;
	
	for(i=0;i<n;i++){        //this is to sort the arrays in ascending order with respect to there arrival time
		m=at[i];				//so  the complexity of the program is n^2  
	ind=i;
		for(int j=i+1;j<n;j++){
			if(at[j]<m){
				ind=j;
				m=at[j];
			}
			
		}
		//printf("%d\t",m);
		min=at[i];
		at[i]=at[ind];
		at[ind]=min;
		min=id[i];
		id[i]=id[ind];
		id[ind]=min;
		min=bt[i];
		bt[i]=bt[ind];
		bt[ind]=min;
	}
	
	printf("process id\tarrival time\tburst time\n");
for(i=0;i<n;i++){                                                         //to display the result of the sorting 
printf("    %d    \t     %d     \t     %d\n",id[i],at[i],bt[i]);	      //the complexity of the loop is n
}
i=0;
	int pr[n],b=0,p=bt[0],index,d,l;
	for(int g=1;g<n;g++){                        //the complexity of the loop is is n
	printf("testing");
		
		
		for(j=g;j<n;j++){                        //as it is inside a loop its complexity is n^2
		
		if(at[j]<=p){
			pr[j]=1+(p-at[j])/bt[j];
			d=pr[j];
				index=j;
			printf("%d ",pr[j]);
			}
			else
			pr[j]=0;
	}
	printf("\n");

	  	for(k=g;k<n;k++){                              ////as it is inside a loop its complexity is n^2
				if(pr[k]==0)
					break;
				
		  	  if(pr[k]<=d){
		  	  	if(d==pr[k]){
		  	  		if(bt[k]>=bt[index]){
		  	  			index=index;
		  	  			if(bt[k]==bt[index]){
		  	  				if(at[k]>at[index]){
		  	  					index=index;
								}
								else{
									d=pr[k];
									index=k;
								}
							}
		  	  		}
		  	  		else{
						
					d=pr[k];	
		  	  		index=k;}
		  	  	}
					
					else{
					d=pr[k];
					
					index=k;}
				
					}}
					
				    printf("\n%d\n",index);
	  
	  

	  f=id[index];
	  id[index]=id[g];
	  id[g]=f;
	  f=at[index];
	  at[index]=at[g];
	  at[g]=f;
	  f=bt[index];
	  bt[index]=bt[g];
	  bt[g]=f;
	printf("process id\tarrival time\tburst time\n");
for(l=0;l<n;l++){                                                           // complexity of these loop is n
printf("    %d    \t     %d     \t     %d\n",id[l],at[l],bt[l]);	
}
p=bt[g]+p;
	}
printf("process id\tarrival time\tburst time\n");
for(i=0;i<n;i++){                                                         // complexity of these loop is n
printf("    %d    \t     %d     \t     %d\n",id[i],at[i],bt[i]);	
}		
}

