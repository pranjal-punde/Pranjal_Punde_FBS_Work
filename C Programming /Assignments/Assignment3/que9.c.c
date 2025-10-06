void main()
{
	int no=121;
	int rem,rev=0,temp=no;
	while(no>0)
	{
	   rem=no%10;
	   rev=rev*10+rem;
	   no=no/10;	
	}
	if(rev==temp)
	{
		printf("number is palindrome");
	}
	else{
		printf("number is not palindrome");
	}
}