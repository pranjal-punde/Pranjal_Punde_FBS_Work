void main()
{
	int no=145;
	int sum=0,rem,temp=no;
	while(no>0)
	{
		rem=no%10;
	int	fact=1;
	int	i=1;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		no=no/10;
		
		
	}
	if(sum==temp)
	{
		printf("number is strong number");
	}
	else
	{
		printf("number is not strong number");
	}
}