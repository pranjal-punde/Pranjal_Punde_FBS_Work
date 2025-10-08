void main(){
	
	for(int j=2;j<=100;j++)
	{
		int i=2,flag=0;
	
	while(i<=j/2)
	{
		if(j%i==0){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	printf("%d\n",j);
	
}
}