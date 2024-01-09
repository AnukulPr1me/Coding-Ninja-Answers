int countDigits(int n){
	// Write your code here.
	int temp = n;
	int count = 0;
	while(n!=0)
	{
		int rem = n%10;
		if(rem!=0 && temp%rem==0)
		{
			count++;
		}
		n=n/10;
	}
	return count;	
}