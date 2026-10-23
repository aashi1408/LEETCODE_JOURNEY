//ARMSTRONG NUMBER

int main()
{
	int n;cin>>n;
	int num1 = n,num2 = n;
	//count number of digits in n;
	int digits = 0;
	while(num1 != 0)
	{
		num1 /= 10;
		digits++;
	}
	//calculate the resultant sum
	long long sum = 0;
	while(num2 != 0)
	{
		int ld = num2 % 10;
		long power = 1;
		for(int i=1 ; i<=digits ; i++)
		{
			power *= ld;
		}
		sum += power;
		num2 /= 10;
	}
	cout<< ( sum == n ? "Armstrong Number" : "NOT an Armstrong Number");
}
