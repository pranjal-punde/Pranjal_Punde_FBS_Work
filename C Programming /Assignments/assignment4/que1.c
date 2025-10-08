void main()
{

	int rem,sum;
	for(int i=1;i<=1000;i++)
	{
		int num=i;
		sum=0;
		
	
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(sum==i)
	{
		printf("\n%d",i);
	}
}
}