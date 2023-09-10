#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 1
int ifPrime(int a) //判断质数
{
	if (a < 2) return 0;
	else if (a == 2) return 1;
	else
	{
		for (int i = 2; i <= a / 2; i++)
		{
			if (a % i == 0) return 0;
		}
		return 1;
	}
}
int ifComposite(int a)//判断合数
{
	if (a < 4) return 0;
	else
	{
		for (int i = 2; i <= a / 2; i++)
		{
			if (a % i == 0) return 1;
		}
		return 0;
	}
}
float Discount(float x)
{
	if (x < 200) return x;
	if (x >= 200 && x < 500) return 0.9 * x;
	if (x >= 500 && x < 1000)return 0.8 * x;
	if (x >= 1000 && x < 2000)return 0.7 * x;
	if (x >= 2000) return 0.6 * x;
}
int main()

/*{          //1
	int n;
	scanf_s("%d", &n);
	
	if (n > 0) {
		int x;
		scanf_s("%d", &x);
		int min, cur;
		min = x; cur = 1;
		for (int i = 1; i < n; i++)
		{
			scanf_s("%d", &x);
			if (min > x)
			{
				min = x;
				cur = i + 1;
			}
		}
		printf("最小值%d\n", min);
		printf("下标为%d\n", cur);
	}
	else printf("未输入有效数字");
	return 0;
}*/
/*{//2
	int x, max, cur;
	scanf_s("%d", &x);
	max = x;
	if (x == -1) {
		cur = 1;
	}
	else {
		cur = 0;
		while (x != -1) {
			cur++;
			scanf_s("%d", &x);
			if (max < x)
			{
				max = x;
			}
		}
		if (max == -1)cur++;
	}
	
	printf("最大值为%d\n", max);
	printf("下标为%d\n", cur);
	return 0;
}
*/
/*{//3
	int m, n;
	int sum = 0;
	scanf_s("%d,%d", &m, &n);
	if (m > n) {
		printf("输入错误\n");
	}
	else {
		for (int i = m; i <= n; i++)
		{
			if (ifPrime(i))
			{
				sum += i;
			}
		}
		printf("%d", sum);
	}
	return 0;
	
}*/
/*{//4
	int m, n;
	int count = 0;
	scanf_s("%d,%d", &m, &n);
	if (m > n) {
		printf("输入错误\n");
	}
	else {
		for (int i = m; i <= n; i++)
		{
			if (ifComposite(i))
			{
				count++;
			}
		}
		printf("%d", count);
	}
	return 0;
}*/
/*{//5      *****
	int a[10], count[10];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d",&a[i]);
		count[i] = 1;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (a[i] == a[j])
			{
				count[i]++;
				count[j] = 0;
			}
		}
	}
	int max = count[0]; int maxM = a[0];
	for (int i = 0; i < 10; i++)
	{
		if (count[i] > max)
		{
			max=count[i];
			maxM = a[i];
		}
	}
	printf("%d", maxM);
	return 0;
}*/
/*
{//6  未解决有两个同样大的数的情况
	int a[4][3];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	int max = a[0][0]; int col = 0, lin = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[i][j] > max)

			{
				max = a[i][j];
				col = i+1; lin = j+1;
			}
		}
	}
	printf("最大值%d\n", max);

	printf("行：%d,列:%d\n", col, lin);
	return 0;
}*/
/*
{//7 *****
	char a[31];
	int count[30];
	fgets(a, sizeof(a), stdin);
	for (int i = 0; i < 30; i++)
	{
		if (a[i] == ' ')
			count[i] = 0;
		else count[i] = 1;
	}
	int len = strlen(a);
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (a[i] == a[j]&&a[i]!=' ')
			{
				count[i]++;
				count[j] = 0;
			}
		}
	}
	int max = count[0];
	char c = a[0];
	for (int i = 0; i < len; i++)
	{
		if (count[i] > max)
		{
			max = count[i];
			c = a[i];
		}
	}
	printf("出现最多的字符：%c\n", c);
	return 0;
}*/
/*
{//8
	char a[31];
	char c;
	fgets(a, sizeof(a), stdin);
	c = getchar();
	int len = strlen(a);
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (a[i] == c)
		{
			count++;
		}
	}
	printf("The times that character appears:%d\n",count);
	return 0;
}*/
/*{//9
	char ch;
	int count = 0;
	
	while ((ch = getchar()) != '#')
	{
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' ||
			ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			count++;
	}
	printf("%d", count);
	return 0;
}*/
/*
{//10
	char ch;
	int count = 0;
	while ((ch = getchar()) != '@')
	{
		if (ch >= '0' && ch <= '9' || ch == ' ')
		{
			printf("%c", ch);
			count++;
		}
	}
	if (count == 0)
		printf("No digit and space\n");
	return 0;
}*/
/*
{//11
	char ch[31];
	int count = 0;
	fgets(ch, sizeof(ch), stdin);
	int len = strlen(ch);
	for (int i = 0; i < len; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			printf("%c", ch[i] - 32); count++;
		}
		if (ch[i] >= 'A' && ch[i] <= 'Z')
		{
			printf("%c", ch[i] + 32); count++;
		}
		if (ch[i] == ' ')
		{
			printf("%c", ch[i]); count++;
		}
	}
	if (count == 0)
	{
		printf("No letter and space\n");
	}
	return 0;
}*/
/*
{//12
	int N;
	float a,sum;
	sum = 0;
	scanf_s("%d", &N);
	if (N > 0) {
		for (int i = 0; i < N; i++)
		{
			scanf_s("%f", &a);
			sum += a;

		}
		printf("%.2f", sum / (float)N);
	}
	else printf("Put in the wrong number:)\n");
	return 0;

}*/
/*{//13
	float a, N,sum;
	int fail=0;
	N = 0; sum = 0;
	scanf_s("%f", &a);
	while (a != -1)
	{
		if (a < 60) fail++;
		N++;
		sum += a;
		scanf_s("%f", &a);
	}
	if (N != 0)
	{
		printf("Average Score:%.2f\n", sum / N);
		printf("Failed Student(s):%d\n", fail);
	}
	else printf("NO BODY IN THE CLASS YET!!!\n");
	return 0;
}
*/
/*{//14
	int n, m;
	scanf_s("%d%d", &n, &m);
	for (int i = n; i <= m; i++)
	{
		if (i % 7 == 0) printf("%d ", i);
		else if (i % 10 == 7)printf("%d ", i);
	}
	return 0;
}*/
/*{//15	Need to solve VAL problems
	int n, m,j;
	int sum,count;
	float average;
	scanf_s("%d%d", &n, &m);
	int** a = (int**)malloc(sizeof(int*)*n);
	for (int i = 0; i < n; i++)
	{
		a[i] = (int*)malloc(sizeof(int) * m);
	}
	for (int i = 0; i < n; i++)
	{
		for ( j = 0; j < m; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		sum = 0; count = 0;
		for ( j = 0; j < m; j++)
		{
			sum += a[i][j];
			if (a[i][j] < 60)count++;
		}
		printf("Student%d Average: %.2f\n", i + 1, sum * 1.0 / j);
		printf("         Failed %d subject(s)\n", count);
	}
	for (int i = 0; i < n; i++)
	{
		free(a[i]);
	}
	free(a);
	return 0;
}*/
/*{//16	Need to solve VAL problems
	int n, m, j,i;
	int sum, count;
	float average;
	scanf_s("%d%d", &n, &m);
	int** a = (int**)malloc(sizeof(int*) * n);
	for ( i = 0; i < n; i++)
	{
		a[i] = (int*)malloc(sizeof(int) * m);
	}
	for ( i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	for (j = 0; j < m; j++)
	{
		sum = 0; count = 0;
		for ( i = 0; i < n; i++)
		{
			sum += a[i][j];
			if (a[i][j] < 60)count++;
		}
		printf("Subject%d Average: %.2f\n", j + 1, sum * 1.0 / i);
		printf("         Failed %d student(s)\n", count);
	}
	for ( i = 0; i < n; i++)
	{
		free(a[i]);
	}
	free(a);
	return 0;
}*/
/*
{//17
	int N,a,c1,c2,c3,c4,c5;
	c1 = c2 = c3 = c4 = c5 = 0;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &a);
		if (a >= 90 && a <= 100) c1++;
		if (a >= 80 && a <= 89) c2++;
		if (a >= 70 && a <= 79) c3++;
		if (a >= 60 && a <= 69) c4++;
		if (a <60) c5++;
	}
	printf("90-100:%d人\n", c1);
	printf("80-89:%d人\n", c2);
	printf("70-79:%d人\n", c3);
	printf("60-69:%d人\n", c4);
	printf("60以下:%d人\n", c5);
	return 0;
}*/
/*{//18
	int N;
	char c;
	scanf_s("%d", &N);
	c = getchar();
	for (int i = 0; i < N; i++)
	{
		for (int j = N - 1 - i; j > 0; j--)
			printf(" ");
		for (int k = 0; k <= i; k++)
		{
			printf("%c", c);
			if (k == i) printf("\n");
		}
		if (c == 'z')c = 'a';
		else c++;
	}
	return 0;
}*/
/*
{//19 136/137不换行编译器问题
	int N;
	scanf_s("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1.0*i * i / 2 - 1.0*i / 2+1; j <=1.0*i * i / 2 + 1.0*i / 2 ; j++)
		{
			printf("%5d", j);
			if (j == 1.0*i * i / 2 + 1.0*i / 2)
			{

				printf("\n");
			}

		}
	}
	return 0;
}*/
/*
{//20 //*1.0 编译器问题
	int N;
	scanf_s("%d", &N);
	for (int i = N; i > 0; i--)
	{
		for (int j =1.0*i/2+1.0*i*i/2 ; j>1.0*i*i/2-1.0*i/2; j--)
		{
			printf("%5d", j);
			if (j == 1.0 * i * i / 2 - 1.0 * i / 2 + 1)
				printf("\n");
		}
	}
	return 0;
}*/
/*
{//21 add up each number using getchar
	char ch;
	int sum = 0;
	while ((ch = getchar()) != '\n')
	{
		sum += ch - '0';
	}
	printf("%d\n", sum);
	return 0;
}*/
/*
{//22 add up even number
	char ch;
	int sum = 0;
	int count = 1;
	while ((ch = getchar()) != '\n')
	{
		if (!(count % 2))
		{
			sum += ch - '0';
		}
		count++;
	}
	printf("%d\n", sum);
	return 0;
}*/
/*
{//23 symmetrical number
	char ch[21];
	int flag = 0;
	fgets(ch, sizeof(ch), stdin);
	int len =strlen(ch);
	for (int i = 0; i < (len-1)/2; i++)
	{
		if (ch[i] != ch[len - i-2]) {
			printf("It is not a symmetrical number!!!");
			flag = 0;
			break;
		}
		else flag = 1;
	}
	if(flag) printf("It is a symmetrical number:)");
	return 0;
}*/
/*{//24 最大公约数辗转相除法
	int N, M,t;
	scanf_s("%d%d", &N, &M);
	if (N > M)
	{
		while (N % M != 0) {
			t = M;
			M = N % M;
			N = t;
			
	}
		printf("最大公约数为：%d\n", M);
		
	}
	if (N <= M)
	{
		while (M % N != 0) {
			t = N;
			N = M % N;
			M = t;

		}
		printf("最大公约数为：%d\n", N);

	}
	return 0;
}*/
/*{//25 最大公倍数
	int N, M; int t;
	scanf_s("%d%d", &N, &M);
	if (N > M) t = N;
	else t = M;
	while (!(t % N == 0 && t % M == 0))
	{
		t++;
	}
	printf("最大公倍数为%d\n", t);
	return 0;
}*/
/*{//26
	int N, k;
	scanf_s("%d%d", &N, &k);
	for (int i = 1; i <= N; i++)
	{
		if (i % 10 == k) { printf("%3d",i); continue; }
		if (k != 0 && i % k == 0) printf("%3d",i);
	}
	return 0;
}*/
/*{//27
	char ch;
	int sum = 0;
	while ((ch = getchar()) != '\n')
	{
		sum +=( ch - '0');
	}
	if (sum % 5 == 0)printf("It is a KingKong number:)");
	else printf("No it isn't!");
	return 0;
}*/
/*
{//28
	int sum = 0;
	char ch;
	while ((ch = getchar()) != '\n')
	{
		sum += (ch - '0');
	}
	if (sum % 3 == 0 || sum % 7 == 0)printf("It it a grievous number!\n");
	else printf("Seemingly a happy one:)\n");
	return 0;
}*/
/*
{//29
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b <= c || a + c <= b || b + c <= a) printf("不能构成三角形！\n");
	if(a==b&&b==c)  printf("等边三角形！\n");
	if ((a == b || b == c||c==a) && !(a == b && b == c))printf("等腰三角形！\n");
	if ((a* a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a))printf("直角三角形！\n");
	if(!(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)&&!(a == b || b == c || c == a) &&(a+b>c&&a+c>b&&b+c>a))printf("普通三角形！\n");
	return 0;
}*/
/*{//30精度？
	float a, b, c;
	float sum = 0;
	scanf_s("%f%f%f", &a, &b, &c);
	sum = Discount(a) + Discount(b) + Discount(c);
	printf("Customer needs to pay %.2f$\n", sum);
	return 0;
}*/
/*{//31
	int A, B;
	char Operator;
	scanf_s("%d", &A);
	Operator = getchar();
	scanf_s("%d", &B);
	if (Operator == '+')printf("%d\n", A + B);
	else if (Operator == '-')printf("%d\n", A - B);
	else if (Operator == '*')printf("%d\n", A * B);
	else if (Operator == '/')printf("%d\n", A / B);
	else if (Operator == '%')printf("%d\n", A % B);
	else printf("Wrong input!\n");
	return 0;
}*/
/*{//32 %02d
	int m, n,t,h,min;
	scanf_s("%d:%d", &m, &n);
	scanf_s("%d", &t);
	h = t / 60;
	min = t - h * 60;
	m = m + h;
	n = n + min;
	while (n > 59)
	{
		n = n % 60;
		m++;
	}
	while (m > 23)
	{
		m = m % 24;
	}
	printf("At %02d:%02d,study should be ended", m, n);
	return 0;
}*/
/*{//33 strcmp function
	int n, m;
	char ch[3];
	char c;
	scanf_s("%d:%d", &n, &m);
	//while ((c = getchar()) != '\n');
	fgets(ch, sizeof(ch), stdin);
	if (strcmp(ch, "AM") != 0 && strcmp(ch, "PM") != 0||n < 1 || n>12|| m < 0 || m>59) printf("Wrong input!!!\n");
	else if (strcmp(ch, "AM") == 0)
	{
		if (n == 12) {
			n = 0;
		}
		printf("%02d:%02d", n, m);
	}
	else if (strcmp(ch, "PM") == 0)
	{
		if(n==12)printf("%02d:%02d", n, m);
		else printf("%02d:%02d", n+12, m);
	}
	return 0;
}*/
/*{//34
	int n, m;
	scanf_s("%d:%d", &n, &m);
	if (n < 0 || n>23|| m < 0 || m>59)printf("Wrong input please try again!!!\n");
	else if (n == 0)printf("%02d:%02dAM", n + 12, m);
	else if(n>0&&n<12)printf("%02d:%02dAM", n , m);
	else if (n == 12)printf("%02d:%02dPM", n, m);
	else if (n > 12)printf("%02d:%02dPM", n - 12, m);
	return 0;
}*/
/*{//35
	int a, b, c;
	int a1[304], b1[304], c1[304];
	int count = 0;
	for (a = 1; a <100; a++)
	{
		for (b = 1; b < 33; b++) {
			for (c = 1; c < 20; c++) {
				if (a + 3 * b + 5 * c == 100) {
					a1[count] = a;
					b1[count] = b;
					c1[count] = c;
			
					count++;
				}
				
			}
		}
		
	}
	int N;
	scanf_s("%d", &N);
	if (N > 304 || N < 1) printf("Wrong!!!\n");
	else printf("%d号方案：%d个1分，%d个3分，%d个5分", N, a1[N - 1], b1[N - 1], c1[N - 1]);
	//printf("%d", count);
	return 0;
	
}*/
/*{//36
	int N;
	char c;
	scanf_s("%d", &N);
	c = getchar();
	int i,j;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}*/
/*{//37
	int N,t;
	scanf_s("%d", &N);
	t = N;
	if (N < 1 || N>7)printf("Wrong input!!\n");
	else{ 
		N = N + 10;
		while (N % 7 != 6 && N % 7 != 0)
		{
			N += 10;
		}
		printf("第%d天可以达成心愿：）\n",N-t);
	}
		
	return 0;
}*/
/*{//38*****进制转换
	int ternary[32];
	int N; int i = 0;
	scanf_s("%d", &N);
	while (N > 0) {
		ternary[i] = N % 3;
		N=N / 3;
		i++;
	}
	for (int j = i-1; j >= 0; j--)
	{
		printf("%d", ternary[j]);
	}
	return 0;
}*/
/*{//39*********统计单词
	int count = 0;
	int flag = 0;
	char ch;
	while ((ch = getchar()) != '\n') {
		if (ch == ' ')  flag = 0;
		else if (flag == 0) {
			flag = 1;
			count++;
		}
	}printf("%d", count);
	return 0;
}*/
/*{//40*******
	int N;
	scanf_s("%d", &N);
	
	char* ch[21];
	char s[21];
	char* t;
	char ch1;
	int len;
	while ((ch1 = getchar()) != '\n');
	for (int i = 0; i < N; i++)
	{
		fgets(s, sizeof(s), stdin);
		len = strlen(s);
		ch[i] = (char*)malloc(sizeof(char) * (len+1));
		strcpy_s(ch[i], len + 1, s);
	}

	for (int i = 0; i < N-1; i++)
	{
		for (int j = i; j < N; j++)
		{
			if (strcmp(ch[i], ch[j]) < 0)
			{
				t = ch[i];
				ch[i] = ch[j];
				ch[j] = t;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%s", ch[i]);
	}
	return 0;
}*/
/*{//41
	int N;
	scanf_s("%d", &N);
	char a;
	while ((a = getchar()) != '\n');
	char s[21];
	char t[21];
	char** ch;
	ch = (char**)malloc(sizeof(char*) * N);
	for (int i = 0; i < N; i++)
	{
		fgets(s, sizeof(s), stdin);
		//int len = strlen(s);
		ch[i] = (char*)malloc(sizeof(char)*21);
		strcpy_s(ch[i], 21, s);
	}
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i; j < N; j++)
		{
			if (strlen(ch[i]) > strlen(ch[j]))
			{
				strcpy_s(t, 21, ch[i]);
				strcpy_s(ch[i], 21, ch[j]);
				strcpy_s(ch[j], 21, t);
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%s", ch[i]);
	}
	return 0;
}*/
/*{//42
	int n = 10;
	char number[11];
	fgets(number, 11, stdin);
	number[10] = '\0';
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (number[i] == number[j])
			{
				number[j] = '\0';
			}

		}
	}
	for (int i = 0; i < n; i++)
	{
		if(number[i]!='\0')
			printf("%c", number[i]);
	}
	
	return 0;
}
*/
/*{//42
	int n = 0;
	int a[10],b[10],t[10];
	int m = 0;
	int flag;
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (int i = 0; i < 10; i++)
	{
		flag = 1;
		for (int k = 0; k < n; k++)
		{
			if (i == t[k])
			{
				flag = 0;
				break;
			}
				
				
			
		}
		if (flag) {
			b[m] = a[i];
			m++;
			
		}for (int j = i + 1; j < 10; j++)
		{
			if (a[i] == a[j])
			{
				t[n] = j;
				n++;
				break;
			}
		}
		
	}
	for (int i = 0; i < m; i++)
		printf("%d ", b[i]);
	return 0;
}*/
/*{//42
	int n = 10;
	char number[11];
	fgets(number, 11, stdin);
	number[10] = '\0';
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (number[i] == number[j])
			{
				for (int k = j; k < n; k++)
				{
					number[k] = number[k + 1];
				}
				n--;
			}
			
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (number[i] == number[j])
			{
				for (int k = j; k < n; k++)
				{
					number[k] = number[k + 1];
				}
				n--;
			}

		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (number[i] == number[j])
			{
				for (int k = j; k < n; k++)
				{
					number[k] = number[k + 1];
				}
				n--;
			}

		}
	}

	printf("%s", number);
	return 0;
}*/
/*{//43
	int n = 10;
	char number[11];
	char c,x;
	int flag = 0;
	fgets(number, sizeof(number), stdin);
	number[10] = '\0';
	while ((c = getchar()) != '\n');
	x = getchar();
	for (int i = 0; i < n; i++)
	{
			if (number[i] == x)
			{
				flag = 1;
				number[i] = '\0';
			}
		
	}
	if (flag == 0) printf("Not found x!\n");
	else {
		for (int i = 0; i < n; i++)
		{
			if (number[i] != '\0')
			{
				printf("%c", number[i]);
			}

		}

	}
	
	return 0;
}*/
/*{//44
	int a[10];
	int k,x;
	for(int i=0;i<9;i++)
	scanf_s("%d", &a[i]);
	scanf_s("%d%d", &k, &x);
	for (int j = 9; j >k; j--)
	{

		a[j] = a[j-1];
	}
	a[k] = x;
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}
*/
/*{//45
	int a[7];
	int t;
	for(int i=0;i<7;i++)
	scanf_s("%d", &a[i]);
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 7; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	printf("%d\n", a[3]);
	return 0;
}*/
/*{//46
	char a[21];
	char b[21];
	int flag = 0;
	int position;
	fgets(a, 21, stdin);
	strtok(a, "\n");
	fgets(b, 21, stdin);
	strtok(b, "\n");
	int j;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == b[0])
		{
			for ( j = 0; j < strlen(b); j++)
			{
				position = i;
				if (a[i + j] != b[j])
				{
					flag = 0;
					break;
				}
				else flag = 1;
				
			}
			if (j == strlen(b) )
				break;
		}
	}
	if (flag) printf("b是a的字串，位于第%d位", position+1);
	else printf("NO!");
	return 0;
}*/
/*
{//47
	int a[6] ;
	int b[6] ;
	int t[6];
	int flag = 1;
	int n = 0;
	for (int i = 0; i < 6; i++)
		scanf_s("%d", &a[i]);
	for (int i = 0; i < 6; i++)
		scanf_s("%d", &b[i]);
	for (int i = 0; i < 5; i++)
	{
		if (flag == 0) break;
		for (int j = i + 1; j < 6; j++)
		{
			if (a[i] == a[j] || b[i] == b[j])
			{
				printf("输入错误请重新输入六个不同数字。\n");
				flag = 0;
				break;
			}
		}
	}
	if (flag)
	{
		for (int i = 0; i < 6; i++)
		{
			for (int j = 0; j < 6; j++)
			{
				if (a[i] == b[j])
				{
					t[n] = a[i];
					n++;
				}
			}
		}
	}
	if (n == 0&&flag==1) printf("这两个数组没有交集！\n");
	else if (flag == 1)

		{
			printf("交集是");
			for (int i = 0; i < n; i++)
				printf("%d ", t[i]);

		}

	return 0;
}
*/
/*{//48
	int a[6], b[6], t[12];
	for (int i = 0; i < 6; i++)
		scanf_s("%d", &a[i]);
	for (int i = 0; i < 6; i++)
		scanf_s("%d", &b[i]);
	for (int i = 0; i < 6; i++)
		t[i] = a[i];
	for (int i = 0; i < 6; i++)
		t[i + 6] = b[i];
	
	for (int i = 0; i < 12; i++)
	{
		int flag = 1;
		for (int j = 0; j < i; j++)
		{
			if (t[i] == t[j])
				flag = 0;
		}
		if (flag)
			printf("%d ", t[i]);
	}
	return 0;
}*/
/*{//49
	int a[10], b[4];
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		scanf_s("%d", &b[i]);
	}
	
	for (int i = 0; i < 10; i++)
	{
		int flag = 1;
		for (int j = 0; j < 4; j++)
		{
			if (a[i] == b[j])
				flag = 0;
		}
		if (flag)
		{
			printf("%d ", a[i]);
		}
	}
	return 0;
}*/
/*{//50
	char a[100];
	char t;
	scanf("%s", a);
	//fgets(a, sizeof(a), stdin);
	//strtok(a, "\n");
	for (int i = 0; i < strlen(a) / 2; i++)
	{
		t = a[i];
		a[i] = a[strlen(a) - i-1];
		a[strlen(a) - i-1] = t;
	}
	printf("%s", a);
	return 0;
}*/
/*{//51
	int a[5], b[5];
	int n = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d%d", &a[i], &b[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		if (n != 0 && a[i] > 0)
			printf("+");
		if (a[i] == 0)continue;
		if (b[i] != 0&&a[i]!=1&&b[i]!=1)
		{
			if(a[i]==-1)
			printf("-x^%d", b[i]);
			else
			printf("%dx^%d", a[i], b[i]);
		}
		if (b[i] != 0 && a[i] == 1 && b[i] != 1)
		{
			printf("x^%d",  b[i]);
		}
		if (b[i] != 0 && a[i] != 1 && b[i] == 1)
		{
			printf("%dx", a[i]);
		}

		if (b[i] == 0)printf("%d", a[i]);
		n++;

	}
	return 0;
}*/
/*{//52
	int a[16];
	for(int i=0;i<8;i++)
	scanf_s("%d", &a[i]);
	int b;
	scanf_s("%d", &b);
	b = b % 8;
	for (int i = 8; i < 8+b; i++)
	{
		a[i] = a[i - 8];
	}
	for (int i = b; i < 8 + b; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}*/
/*{//53
	char a[31], b[31];
	fgets(a, sizeof(a), stdin);
	strtok(a, "\n");
	int n, m;
	scanf_s("%d%d", &n, &m);
	for (int i = n; i < m; i++)
	{
		b[i - n] = a[i];
	}
	for(int i=0;i<m-n;i++)
	printf("%c", b[i]);
	return 0;
}*/
/*{//54 *********
	char a[6][21];
	char* ptr[6];
	for (int i = 0; i < 6; i++)
	{
		scanf("%s", a[i]);
		ptr[i] = (char*)malloc(sizeof(char) * 21);
		strcpy(ptr[i], a[i]);
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5-i; j++)
		{
			int cmp = strcmp(ptr[j], ptr[j+1]);
			if (cmp > 0)
			{
				char* temp=NULL;
				 temp = ptr[j];
				 ptr[j] = ptr[j+1];
				 ptr[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < 6; i++)
	{
		printf("%s\n", a[i]);
	}for (int i = 0; i < 6; i++)
	{
		printf("%s\n", ptr[i]);
	}
	return 0;
}
*/
/*{//55
	int a[10];
	int MAX, MIN;
	int sum = 0;
	for(int i=0;i<10;i++)
	scanf("%d", &a[i]);
	MAX = a[0];
	MIN = a[0];
	for (int i = 0; i < 10; i++)
	{
		if (a[i] > MAX) MAX = a[i];
		if (a[i] < MIN) MIN = a[i];
		sum += a[i];
	}
	float average;
	average = 1.0 * (sum - MAX - MIN) / (1.0 * 8);
	printf("%.2f", average);
	return 0;
}*/
/*{//56
	int a[5]; int n = 0; int flag = 0;
	for (int i = 0; i < 5;i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < 4; i++)
	{
		if (a[i + 1] > a[i]) n++;
		if (a[i + 1] < a[i]) {
			flag = 1; break;
		}
	}
	if (flag)printf("不是升序\n");
	else if (n == 4) printf("严格升序\n");
	else printf("升序（肯定不是严格升序）\n");
	return 0;
}*/
/*{//57
	char a[21];
	scanf("%s", a);
	int len = strlen(a);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i-1; j++)
		{
			if (a[j] < a[j + 1])
			{
				char t;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	printf("%s", a);
	return 0;
}*/
/*{//58
	int n = 0; int flag = 0;
	char a[31];
	char b[16];
	scanf("%s", a);
	int len = strlen(a);
	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 0) {
			b[n] = a[i];
			n++;
		}
	}
	for (int i = 0; i < n / 2; i++)
	{
		if (b[i] != b[n - 1 - i])flag = 1;
	}
	if (flag)
	{
		printf("NO!!!\n");
	}
	else printf("YES!!!\n");
	return 0;
}*/
/*{//59
	/*typedef struct {
		int number;
		char name[11];
		char gender[2];
		int score;
	}Student;
	for (int i = 0; i < 7; i++)
	{
		Student i;
		scanf("%d %s %s %d", &i.number, i.name, i.gender, &i.score);
	}
	*/
/*
int number[7];
char name[7][11];
char gender[7][2];
int score[7];
float average_m, average_f;
int sum_m = 0;
int sum_f = 0;
int fail_m = 0;
int fail_f = 0;
int c_m = 0;
int c_f = 0;
for (int i = 0; i < 7; i++)
{
	scanf("%d %s %s %d", &number[i], name[i], gender[i], &score[i]);
}
for (int i = 0; i < 7; i++)
{
	if (strcmp(gender[i], "m") == 0) {
		if (score[i] < 60)fail_m++;
		sum_m += score[i];
		c_m++;
	}
	if (strcmp(gender[i], "f") == 0) {
		if (score[i] < 60)fail_f++;
		sum_f += score[i];
		c_f++;
	}
}
average_f = sum_f * 1.0 / (c_f * 1.0);
average_m = sum_m * 1.0 / (c_m * 1.0);
printf("男生不及格人数为：%d\n平均分为：%.2f\n", fail_m, average_m);
printf("女生不及格人数为：%d\n平均分为：%.2f", fail_f, average_f);
return 0;
}*/
/*{//60
	int number[7];
	char name[7][11];
	char gender[7][2];
	int score[7];
	for (int i = 0; i < 7; i++)
	{
		scanf("%d %s %s %d", &number[i], name[i], gender[i], &score[i]);
	}
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7-1 - i; j++)
		{
			if (number[j] > number[j + 1])
			{
				char temp[20];
				char temp1[20];
				int t;
				t = number[j];
				number[j] = number[j + 1];
				number[j + 1] = t;
				t = score[j];
				score[j] = score[j + 1];
				score[j + 1] = t;
				strcpy(temp, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], temp);
				strcpy(temp1, gender[j]);
				strcpy(gender[j], gender[j + 1]);
				strcpy(gender[j + 1], temp1);
			}
		}
	}

	for (int i = 0; i < 7; i++)
	{

		printf("%d %s %s %d\n", number[i], name[i], gender[i], score[i]);

	}
	return 0;
}*/