void main()
{
  char ch=6;
	int n=122;
	if(ch==1)
	{
	
	if(n%2==0)
	{
		printf(" number is even");
	}else
	{
		printf("number is odd");
	}
 }
 else if(ch==2)
 {
 		int i=2,flag=0;
	while(i<=n/2)
	{
		if(n%i==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	printf("number is prime");
	else
	printf("number is not prime");
 }
 else if(ch==3)
 {
 	int rem,rev=0,temp=n;
	while(n>0)
	{
	   rem=n%10;
	   rev=rev*10+rem;
	   n=n/10;	
	}
	if(rev==temp)
	{
		printf("number is palindrome");
	}
	else{
		printf("number is not palindrome");
	}
 }
 else if(ch==4)
 {
 	if(n>0)
 	printf("number is positive");
 	else if(n<0)
 	printf("number is negative");
 	else
 	printf("number is zero");
 }
 else if(ch==5)
 {
 	int sum=0;
 	int r1;
 	while(n>0)
 	{
 		r1=n%10;
 		sum=sum+r1;
 		n=n/10;
	 }
	 printf("%d",sum);
 }
 else if(ch==6)
 {
 	 int  reverse=0, r2;

    while(n> 0)
    {
        r2= n % 10;         
        reverse = reverse * 10 + r2;   
        n = n / 10;         
    }

    printf("Reversed number = %d", reverse);
 }

}
