void main()
{
	int age=100;
	if(age<12)
	printf("child");
	else if(age>=12 && age<=19)
	{
		printf("Teenager");
	}
	else if(age>=20&& age<=59)
	{
		printf("Adult");
	}
	else if(age>=60)
	printf("senior");
	else{
		printf("invalid age");
	}
}