void main()
{
	int no;
	
	for(no=1;no<=1000;no++){
	int sum=0,rem,temp=no;
	while(temp>0)
	{
		rem=temp%10;
	int	fact=1;
	int	i=1;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		temp=temp/10;
		
		
	}
	if(sum==no)
	{
		printf("%d\n",no);
	}
	
  }
}