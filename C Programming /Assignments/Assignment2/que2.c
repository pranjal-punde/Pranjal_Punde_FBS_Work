void main()
{
	int s1=5,s2=3, s3=2;
	if(s1==s2&& s2==s3)
	{
		printf("triangle is equilateral");
	}
	else if(s1==s2||s2==s3||s1==s3)
	{
		printf("triangle is isosceles");
	}
	else
	printf("triangle is scalene");
}