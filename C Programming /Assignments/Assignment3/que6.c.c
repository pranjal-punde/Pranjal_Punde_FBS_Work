void main()
{ 
  int no=28,i=1,sum=0;
  while(no>i)
  {
  	if(no%i==0)
  	{
  	  sum=sum+i;	
	  }
  	
  	i++;
  }
  if(sum==no)
  {
  	printf("number is perfect number");
  }
  else
  printf("number is not perfect");
}
