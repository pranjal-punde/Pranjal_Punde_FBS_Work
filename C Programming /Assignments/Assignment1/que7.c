void main(){
	double salary=7000;
	double ts,ta,da,hra;
	if(salary<=5000){
		da=salary*0.10;
		ta=salary*0.20;
		hra=salary*0.25;
	}
	else{
		da=salary*0.15;
		ta=salary*0.25;
		hra=salary*0.30;
		
	}
	ts=salary+da+ta+hra;
	printf("\n%lf",ts);
	printf("\n%lf",da);
	printf("\n%lf",ta);
	printf("\n%lf",hra);
}