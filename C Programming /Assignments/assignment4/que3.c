void main()
{ 
int i;
for(int j=1;j<=500;j++){

  int sum=0;
  for( i=1;j>i;i++)
  {
  	if(j%i==0)
  	{
  	  sum=sum+i;	
	  }
  	
  	
  }
  if(sum==i)
  {
  	printf("\n%d",i);
  }
}
}
