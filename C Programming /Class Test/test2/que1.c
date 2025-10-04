 void main()
 {
 	int units=0,bill;
 	if(units>=1 && units<=50)
 	{
 	  bill=units*30;	
	 }
	 else if(units>=51&& units<=150)
	 {
	 	bill=units*40;
	 }
	 else if(units>=151)
	 {
	 	bill=units*50;
	 }
	 else{
	 	bill=0;
	 }
	 printf("total electricity bill is %drs",bill);
 }