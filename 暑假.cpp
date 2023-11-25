//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int select;
//	cin>>select;
//	switch(select)
//	{
//		case 1:
//			{
//				cout<<"I love Luogu!"<<endl;
//				break;
//			}
//		case 2:
//			{
//				int a=2,b=4;
//				cout<<a+b<<" "<<10-a-b<<endl;
//				break;
//			}
//		case 3:
//			{
//				int x=14,y=4;
//				cout<<x/y<<endl;
//				cout<<x-x%y<<endl;
//				cout<<x%y<<endl;
//				break;
//			}
//		case 4:
//			{
//				cout<<fixed<<setprecision(6)<<(double)500/3<<endl;
//				break; 
//			}
//		case 5:
//			{
//				int n;
//				n=(260+220)/(12+20);
//				cout<<n<<endl;
//				break;
//			}
//		case 6:
//			{
//				cout<<sqrt(6*6+9*9)<<endl;
//				break;
//			}
//	}
//	return 0;
// } 
//#include <iostream>
//using namespace std;
//int main()
//{
//	int x;
//	cin>>x;
//	if(x==1||x==0)
//	{
//		cout<<"Today, I ate "<<x<<" apple."<<endl;
//	}
//	else
//	{
//		cout<<"Today, I ate "<<x<<" apples."<<endl;
//	}
//	return 0;
// } 
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	if(n%4==0&&n%100==0||n%400==0)
//	{
//		cout<<1<<endl;
//	}
//	else
//	cout<<0<<endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,a=0,b=0,c=0,d=0;
//	cin>>n;
//	if(n%2==0&&n>=4&&n<=12)
//	{
//		a=1;
//	}
//	if(n%2==0||n>4&&n<=12||n%2==0&&n>4&&n<=12)
//	b=1;
//	if(n%2==0&&n<=4&&n>12||n>4&&n<=12&&n%2==1)
//	c=1;
//	if(n%2==1&&n<=4||n%2==1&&n>12)
//	d=1;
//	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" ";
//	return 0;
// } 
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,a=0,b=0;
//	cin>>n;
//	a=5*n;
//	b=3*n+11;
//	if(a>b)
//	cout<<"Luogu"<<endl;
//	else
//	cout<<"Local"<<endl;
//	return 0;
//}
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	float m,h,BMI;
//	cin>>m>>h;
//	BMI=m/pow(h,2);
//	if(BMI<18.5)
//	cout<<"Underweight"<<endl;
//	else if(BMI>=18.5||BMI<24)
//	cout<<"Normal"<<endl;
//	else
//	cout<<BMI<<"\n"<<"Overweight"<<endl;
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int a[3];
//	cin>>a[0]>>a[1]>>a[2];
//	sort(a,a+3);
//	for(int i=0;i<3;i++)
//	{
//		cout<<a[i]<<" ";
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x,n;
//	cin>>n>>x;
//	if(x==2)
//	{
//		if((n%400==0) || ((n%4==0) && (n%100!=0)))
//		cout<<29<<endl;
//		else
//		cout<<28<<endl;
//	}
//	else if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
//	{
//	cout<<31<<endl; 
//	}
//	else
//	cout<<30<<endl;
//	return 0;
// } 
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,m,sum,day=0,max=0,cho=0;
//	for(int i=1;i<8;i++)
//	{
//		cin>>m>>n;
//		sum=m+n;
//		if ((sum>max)&&(sum>8)) max=sum,day=i;
//	}
//	cout<<day;
//	return 0;
//}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int a,b,c,array[3];
//	for(int i=0;i<3;i++)
//	{
//		cin>>array[i];
//	}
//	sort(array,array+3);
//	a=array[0];b=array[1];c=array[2];
//	if(a+b<c||a+c<b||b+c<a)
//	{
//		cout<<"Not triangle"<<endl;
//		return 0;
//	}
//	if(a*a+b*b==c*c)
//	cout<<"Right triangle"<<endl;
//	else if(a*a+b*b>c*c)
//	cout<<"Acute triangle"<<endl;
//	else if(a*a+b*b<c*c)
//	cout<<"Obtuse triangle"<<endl;
//	if(a==b||a==c||b==c)
//	cout<<"Isosceles triangle"<<endl;
//	if(a==b&&b==c&&a==c)
//	cout<<"Equilateral triangle"<<endl;
//	return 0;
//}
//#include<bits/stdc++.h>    //万能库 
//using namespace std;
//int main()
//{
//	int a[3];
//	for(int i=0;i<3;i++)
//	{
//		cin>>a[i];
//	}
//	sort(a,a+3);
//	cout<<a[0]/__gcd(a[0],a[2])<<"/"<<a[2]/__gcd(a[0],a[2])<<endl;
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	double a;
//	if(n<=150)
//	{
//		a=0.4463*n;
//		cout<<fixed<<setprecision(1)<<a<<endl;
//	}
//	else if(n>150&&n<=400)
//	{
//		a=0.4463*150;
//		a=a+0.4663*(n-150);
//		cout<<fixed<<setprecision(1)<<a<<endl;
//	}
//	else
//	{
//	a=0.4463*150;
//	a=a+0.4663*(400-150);
//	a=a+0.5663*(n-400);
//	cout<<fixed<<setprecision(1)<<a<<endl;
//	}
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a[10],n,count=0;
//	for(int i=0;i<10;i++)
//	{
//		cin>>a[i];
//	}
//	cin>>n;
//	for(int i=0;i<10;i++)
//	{
//		if(a[i]<=n+30)
//		{
//			count++;
//		}
//	}
//	cout<<count;
//	return 0;
// }
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a[3];
//	char b[3];
//	for(int i=0;i<3;i++)
//	{
//		cin>>a[i];
//	}
//	sort(a,a+3);
//		for(int i=0;i<3;i++)
//	{
//		cin>>b[i];
//		cout<<a[b[i]-'A']<<" ";
//	}
//	return 0;
// } 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//char a[13],b[10];
//	int count=0;
//	for(int i=0;i<13;i++)
//	{
//		cin>>a[i];
//		if(a[i]=='-')
//		continue;
//		else
//		{
//			b[count]=a[i];
//			count++;
//		}
//	}
//	int sum,temp;
//	sum=(int)1*(b[0]-'0')+2*(b[1]-'0')+3*(b[2]-'0')+4*(b[3]-'0')+5*(b[4]-'0')+6*(b[5]-'0')+7*(b[6]-'0')+8*(b[7]-'0')+9*(b[8]-'0');
//	temp=b[9]-'0';
//	if(b[9]=='X')
//	{
//		temp=10;
//	}
//	if(sum%11==temp)
//	cout<<"Right";
//	else
//	{
//		if(sum%11==10)
//		a[12]='X';
//		else
//		a[12]=sum%11+'0';
//		for(int i=0;i<13;i++)
//		{
//			cout<<a[i];
//		}
//	 } 
//	 return 0;
// } 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int m,s,t,n;
//	cin>>m>>t>>s;
//	if(t==0)
//	{
//		cout<<0;
//		return 0;	
//	}
//	if(s%t==0)
//	n=m-s/t;
//	else
//	n=m-s/t-1;
//	if(n<0)
//	cout<<0;
//	else
//	cout<<n;
//	return 0;	
//}
//#include<bits/stdc++.h> 
//using namespace std;
//int main()
//{
//	int a=0,b,days=0;
//	cin>>b;
//	for(int i=1;i<=b;i++)
//	{
//		for(int j=1;j<=i;j++)
//		{
//			a+=i;
//			days++;
//			if(days==b)
//			break; 
//		}
//		if(days==b)
//			break; 
//	}
//	cout<<a;
//	return 0;
// } 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int l,sum=0,m,z,count=0;
//	cin>>l;
//	for(int i=2;;i++)
//	{
//		m=i;
//		z=1;
//		for(int j=2;j<m-1;j++)
//		{
//			if(m%j==0)
//			{
//				z=0;
//				break;
//			}
//		}
//		if(z==1)
//		{
//			sum+=m;
//			if(sum<=l)
//			{
//				cout<<m<<endl;
//				count++;
//			}
//			else
//			{
//				break;
//			}
//		} 
//	}
//	cout<<count;
//	return 0;
//}
        /*P1307 [NOIP2011 普及组] 数字反转*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,s=0;
//	cin>>n;
//	while(n!=0)
//	{
//		s=s*10+n%10, 
//		n=n/10;
//	}
//	cout<<s;
//	return 0;
//}
/*P1720 月落乌啼算钱（斐波那契数列）*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	double Fn,a,b;
//	a=pow((1+sqrt(5))/2,n);
//	b=pow((1-sqrt(5))/2,n);;
//	Fn=(a-b)/sqrt(5);
//    cout<<fixed<<setprecision(2)<<Fn<<endl;
//	return 0;
//}
  /*P5724 【深基4.习5】求极差 / 最大跨度值*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,max,min;
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	max=min=a[0];
//	for(int i=0;i<n;i++)
//	{
//		if(max<a[i])
//		max=a[i];
//		if(min>a[i])
//		min=a[i];
//	}
//	cout<<max-min<<endl;
//	return 0;
//}
/*P1420 最长连号*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,count=0,maxn=0;
//	cin>>n;
//	int a[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//		if(a[i+1]==a[i]+1)
//		count++;
//		else
//		count=0;
//		maxn=max(maxn,count);
//	}
//	cout<<maxn+1;
//	return 0;
//}
    /*数字反转*/ 
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int m,n;
//	scanf("%d.%d",&m,&n);
//	int z=0;
//	while(m)
//	{
//		z=z*10+m%10;
//		m/=10;
//	 } 
//	cout<<n<<"."<<z<<endl;
//	return 0;
//} 
    /*P5708 【深基2.习2】三角形面积*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double a,b,c;
//	cin>>a>>b>>c;
//	double p,area;
//	p=(a+b+c)/2.0;
//	area=p*(p-a)*(p-b)*(p-c);
//	cout<<fixed<<setprecision(1)<<sqrt(area)<<endl;
//	return 0;
//}
/*P1425 小鱼的游泳时间*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a,b,c,d,sum,count;
//	cin>>a>>b>>c>>d;
//	sum=c-a;
//	count=d-b;
//	if(count<0)
//	{
//		count=d+60-b;
//		sum=sum-1;
//	}
//	else if(count>60)
//	{
//		count =count-60;
//		sum=sum+1;
//	}
//	cout<<sum<<" "<<count<<endl;
//	return 0;
//}
  /*P1421 小玉买文具*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a,b,sum;
//	cin>>a>>b;
//	sum=a*10+b;
//	cout<<sum/19<<endl;
//	return 0;
//}
 /*P3954 [NOIP2017 普及组] 成绩*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a,b,c,sum;
//	cin>>a>>b>>c;
//	sum=a*0.2+b*0.3+c*0.5;
//	cout<<sum<<endl;
//	return 0;
//}
/*P1075 [NOIP2012 普及组] 质因数分解*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,m=0;
//	cin>>n;
//	for(int i=2;i<sqrt(n);i++)
//	{
//		if(n%i==0)         /*找到最小公约数*/ 
//		{
//			cout<<n/i; 
//		}
//	}
//	return 0;
//}
/*P5725 【深基4.习8】求三角形*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n*n;i++)
//	{
//		if(i<10) cout<<0<<i;
//		else  cout<<i;
//		if(i%n==0) cout<<endl;
//	}
//	cout<<endl;
//	int cnt=1;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=0;j<n-i;j++)
//		{
//			cout<<"  ";
//		}
//		while(cnt<=i*(i+1)/2)
//		{
//			if(cnt<10) cout<<0<<cnt;
//			else cout<<cnt;
//			cnt++;
//		}
//		cout<<endl;
//	}
//	return 0;
// }
/*P4956 [COCI2017-2018#6] Davor*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,k=1,x;
//	cin>>n;
//	while(1)
//	{
//		for(x=100;x>=1;x--)
//		{
//			if((7*x+21*k)*52==n)
//			{
//				cout<<x<<endl<<k;
//				return 0;
//			}
//		}
//		k++;
//	}
//	return 0;
// } 
/*P5726 【深基4.习9】打分*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin>>n;
//	double a[n];
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	double min=a[0],max=a[0];
//	double sum=0.0;
//	for(int i=0;i<n;i++)
//	{
//		sum+=a[i];
//		if(min>a[i])
//		{
//			min=a[i];
//		}
//		if(max<a[i])
//		{
//			max=a[i];
//		}
//	}
//	double arva;
//	arva=(sum-min-max)/(n-2);
//	cout<<fixed<<setprecision(2)<<arva<<endl;
//	return 0;
//}
/*P1089 [NOIP2004 提高组] 津津的储蓄计划*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int money=0,cost,momnoey=0,month,flag=1;
//	for(int i=1;i<=12;i++)
//	{
//		money+=300;
//		cin>>cost;
//		money-=cost;
//		if(money<0)
//		{
//			flag=0;
//			month=i;
//		}
//		momnoey+=money/100;
//		money%=100;
//	}
//	if(flag==1)
//	{
//		cout<<(momnoey*100*1.2+money)<<endl;
//	}
//	else
//	cout<<"-"<<month;
//	return 0;
//}
/*P1427 小鱼的数字游戏*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a[100],m;
//	for(int i=0;;i++)
//	{
//		cin>>a[i];
//		if(a[i]==0)
//		{
//			m=i;
//			break;
//		}
//	}
//	for(int i=m-1;i>=0;i--)
//	{
//		cout<<a[i]<<" ";
//	}
//	return 0;
//}
///*P5727 【深基5.例3】冰雹猜想*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,cnt=0;
//	int a[1000];
//	cin>>n;
//	a[cnt]=n;
//	while(n!=1)
//	{
//		if(n%2==0)
//		n/=2;
//		else
//		n=3*n+1;
//		cnt++;
//		a[cnt]=n;
//	}
//	for(int i=cnt;i>=0;i--)
//	{
//		cout<<a[i]<<" ";
//	}
//	return 0;
//}
/*P5733 【深基6.例1】自动修正*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string n;
//	cin>>n;
//	int len=n.size();
//	for(int i=0;i<len;i++)
//	{
//		if(n[i]>='a'&&n[i]<='z')
//		{
//			n[i]+='A'-'a';
//		}
//	}
//	cout<<n;
//	return 0; 
//}
/*P1428 小鱼比可爱*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,a[100],d=0;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<i;j++)
//		{
//			if(a[j]<a[i])
//			{
//				d++;
//			}
//		}
//		cout<<d<<" ";
//		d=0;
//	}
//	return 0; 
//}
///*P5728 【深基5.例5】旗鼓相当的对手*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int N;
//	cin>>N;
//	int a[N][3],count=0,sum[3];
//	for(int i=0;i<N;i++)
//	{
//		for(int j=0;j<3;j++)
//		{
//			cin>>a[i][j];
//		}
//	}
//	for(int i=0;i<N;i++)
//	{
//		sum[i]=a[i][1]+a[i][2]+a[i][3];
//	}
//	cout<<sum[0]<<sum[1]<<sum[2];
//	for(int i=0;i<N;i++)
//	{
//		for(int j=i+1;j<=N;j++)
//		{
//			if(abs(a[i][1]-a[j][1]<=5)&&abs(a[i][2]-a[j][2]<=5)&&abs(a[i][3]-a[j][3]<=5)&&abs(sum[i]-sum[j])<=10)
//			{
//				count++;
//			}
//		}
//	}
//	cout<<count<<endl;
//	return 0;
//}
///*P5735 【深基7.例1】距离函数*/
//#include<bits/stdc++.h>
//using namespace std;
//double Distanced(double x,double y);
//int main()
//{
//	double x1,x2,x3,y1,y2,y3,a,b,c;
//	double m,n,p,q,w,r;
//	cin>>x1>>y1>>x2>>y2>>x3>>y3;
//	m=abs(x1-x2);n=abs(x1-x3);p=abs(x2-x3);
//	q=abs(y1-y2);w=abs(y1-y3);r=abs(y2-y3);
//	a=Distanced(m,q);
//	b=Distanced(n,w);
//	c=Distanced(p,r);
//	if(a+b<c&&a+c<b&&b+c<a)
//	{
//		cout<<"数据错误！"<<endl; 
//	}
//	else
//	{
//		cout<<fixed<<setprecision(2)<<a+b+c<<endl;
//	}
//	return 0;
//} 
//double Distanced(double x,double y)
//{
//	return sqrt(pow(x,2)+pow(y,2));
//}
///*P5736 【深基7.例2】质数筛*/
//#include<bits/stdc++.h>
//using namespace std;
//int  Permin(int n);
//int main()
//{
//	int n,a[1000],count=0;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	for(int i=0;i<n;i++)
//	{
//		if(Permin(a[i])==1)
//		{
//			cout<<a[i]<<" ";
//		}
//	}
//}
//int  Permin(int n)
//{
//	int flag=1;
//	if(n<2) return flag=0;
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//		{
//			flag=0;
//			return flag;     //不是质数 
//			break;
//		}
//	}
//	return flag;
//}
///*P5737 【深基7.例3】闰年展示*/
//#include<bits/stdc++.h>
//using namespace std;
//bool tend(int n)
//{
//if((n%4==0&&n%100!=0)||n%400==0)
//{
//return  true;
//}
//else
//return false;
//}
//int main()
//{
//int x,y,count =0;
//int a[1000];
//cin>>x>>y;
//for(int i=x;i<=y;i++)
//{
//if(tend(i))
//{
//count++;
//a[count]=i;
//}
//}
//cout<<count<<endl;
//for(int i=1;i<=count;i++)
//{
//cout<<a[i]<<" ";
//}
//return 0;
//}
///*P5739 【深基7.例7】计算阶乘*/
//#include<bits/stdc++.h>
//using namespace std;
//int J(int n)
//{
//	if(n==1) return 1;
//	else return n*J(n-1);    //递归：变量与自身函数的关系 
//}
//int main()
//{
//	int n;
//	cin>>n;
//	cout<<J(n);
//	return 0;
//} 
/*P5740 【深基7.例9】最厉害的学生*/
//#include<bits/stdc++.h>
//using namespace std;
//struct student{
//	string name;
//	int a,b,c,id,sum;
//}a[10000];
//int main()
//{
//	int n,count=1,cmp=-1;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		a[i].id =i;
//		cin>>a[i].name >>a[i].a>>a[i].b >>a[i].c ;
//		a[i].sum=a[i].a+a[i].b+a[i].c;
//	}
//	for(int i=0;i<n;i++)
//	{
//		if(a[i].sum>cmp)
//		{
//			cmp=a[i].sum ;
//			count=i;
//		}
//	}
//	cout<<a[count].name <<" "<<a[count].a <<" "<<a[count].b <<" "<<a[count].c <<endl;
//	return 0; 
//}
/*P5741 【深基7.例10】旗鼓相当的对手 - 加强版*/
//#include<bits/stdc++.h>
//using namespace std;
//struct student{
//	string name;
//	int a,b,c,sum;
//}temp[10000];
//bool cmp(student a1,student a2)
//{
//	int m,n,x,s;
//	m=abs(a1.a -a2.a );
//	n=abs(a1.b -a2.b );
//	x=abs(a1.c -a2.c );
//	s=abs(a1.sum -a2.sum );
//	if(m<=5&&n<=5&&x<=5&&s<=10)
//	return true;
//	else return false;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cin>>temp[i].name >>temp[i].a >>temp[i].b >>temp[i].c;
//		temp[i].sum =temp[i].a +temp[i].b +temp[i].c ; 
//	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=i+1;j<=n;j++)
//		{
//			if(cmp(temp[i],temp[j]))
//			{
//				if(temp[i].name >temp[j].name )
//				{
//					cout<<temp[j].name <<" "<<temp[i].name<<endl;;
//				}
//				else
//				cout<<temp[i].name <<" "<<temp[j].name<<endl;
//			}
//		}
//	} 
//	return 0;
//}
/*P5728 【深基5.例5】旗鼓相当的对手*/
//#include<bits/stdc++.h>
//using namespace std;
//struct st{
//	int a,b,c,sum;
//}a[1000];
//int main()
//{
//	int n,count;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i].a >>a[i].b>>a[i].c ;
//		a[i].sum =a[i].a +a[i].b+a[i].c;
//	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=i+1;j<=n;j++)
//		{
//			if((abs(a[i].a -a[j].a)<=5)&&(abs(a[i].b-a[j].b)<=5)&&(abs(a[i].c -a[j].c )<=5)&&(abs(a[i].sum -a[j].sum)<=10))
//			{
//				count++;
//			}
//		}
//	}
//	cout<<count;
//	return 0;
//}
/*P5738 【深基7.例4】歌唱比赛*/
//#include<bits/stdc++.h>
//using namespace std;
//double juge(int &m)
//{
//	int min=999,max=-1,sum=0,total=0,tem;
//	double area;
//	for(int j=1;j<=m;j++)
//	{
//		cin>>tem;
//		if(tem>max) max=tem;
//		if(tem<min) min=tem;
//		sum+=tem;
//	}
//	total=sum-min-max;
//	area=total*1.0/(m-2);
//	return area;
//}
//int main()
//{
//	int n,m,sum=0,total=0;
//	double ans=-1,temp;
//	cin>>n>>m;
//	for(int i=0;i<n;i++)
//	{
//		temp=juge(m);
//		if(ans<temp)
//		{
//			ans=temp;
//		}
//	}
//	cout<<fixed<<setprecision(2)<<ans<<endl;
//	return 0;
//}
//int main()
//{
//	int a,b;
//	cin>>a>>b;
//	for(int i=a;i<=b;i+=2)
//	{
//		if(isPermin(i)&&isProdom(i))
//		{
//			cout<<i<<endl;
//		}
//	}
//	return 0;
//}
/*P5707 【深基2.例12】上学迟到*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	double s,v;
//	int t=0,n,a,b;
//	cin>>s>>v;
//	t=ceil(s/v);
//	n=8*60;
//	n=n-10-t;
//	if(n>=24*60) n-=24*60;
//	a=n%60;
//	b=n/60;
//	if(b<10)
//	{
//		if(a<10) cout<<"0"<<b<<":"<<"0"<<a;
//		else cout<<"0"<<b<<":"<<a;
//	}
//	else{
//		if(a<10) cout<<b<<":"<<"0"<<a;
//		else cout<<b<<":"<<a; 
//	}
//	return 0;
//}
/*P1424 小鱼的航程（改进版）*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	long long int n,ans=0;     //关键 
//	int x;
//	cin>>x>>n;
//	for(int i=0;i<n;i++)
//	{
//		if((x!=6)&&(x!=7))
//		{
//			ans+=250;
//		}
//		if(x==7) x=1;
//		else  x++;
//	}
//	cout<<ans;
//	return 0;
//} 
/*P5717 【深基3.习8】三角形分类*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int a[3],t1,t2;
//	cin>>a[0]>>a[1]>>a[2];
//	sort(a,a+3);
//	t1=a[0]*a[0]+a[1]*a[1];
//	t2=a[2]*a[2];
//	if(a[0]+a[1]<=a[2])
//	{
//		cout<<"Not triangle"<<endl;
//	}
//	else
//	{
//		if(t1==t2) cout<<"Right triangle"<<endl;
//		if(t1>t2)  cout<<"Acute triangle"<<endl;
//		if(t1<t2)  cout<<"Obtuse triangle"<<endl;
//		if(a[0]==a[1]||a[1]==a[2]) cout<<"Isosceles triangle"<<endl;
//		if(a[0]==a[1]&&a[1]==a[2]) cout<<"Equilateral triangle"<<endl;
//	}
//	return 0;
//}
/* P1909 [NOIP2016 普及组] 买铅笔*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,a,b,c,d,e,f;
//	int sum1,sum2,sum3;
//	cin>>n;
//	cin>>a>>b>>c>>d>>e>>f;
//	sum1=ceil(n*1.0/a)*b;
//	sum2=ceil(n*1.0/c)*d;
//	sum3=ceil(n*1.0/e)*f;
//	if(sum1<sum2&&sum1<sum3)  cout<<sum1;
//	else if(sum2<sum1&&sum2<sum3)  cout<<sum2;
//	else  cout<<sum3;
//	return 0;
//}
/*P5742 【深基7.例11】评等级*/
//#include<bits/stdc++.h>
//using namespace std;
//struct student{
//	string id;
//	int a,b,c,n;
//	int sum();
//}temp[10000];
//int student::sum() 
//{
//	return a+b;
//}
//bool ans(student s)
//{
//	if(s.c >=800&&s.n >140)  return true;
//	else return false;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++)
//	{
//		cin>>temp[i].id >>temp[i].a >>temp[i].b ;
//		temp[i].c =7*temp[i].a+3*temp[i].b ;
//		temp[i].n =temp[i].sum() ;
//	}
//	for(int i=1;i<=n;i++)
//	{
//		if(ans(temp[i])) cout<<"Excellent"<<endl;
//		else   cout<<"Not excellent"<<endl;
//	}
//	return 0;
//}
/*P1304 哥德巴赫猜想*/
//#include<bits/stdc++.h>
//using namespace std;
//bool isPermin(int n)
//{
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0) return false;
//	}
//	return true;
//}
//int ans(int n)
//{
//	int x=0;
//	for(int i=2;i<=n;i++)
//	{
//		int m=n-i;
//		if(isPermin(i)&&isPermin(m))
//		{
//			return x=i;
//			break;
//		} 
//	}
//}
//int main ()
//{
//	int n;
//	cin>>n; 
//	for(int i=4;i<=n;i+=2)
//	{
//		cout<<i<<"="<<ans(i)<<"+"<<i-ans(i)<<endl;
//	}
//	return 0;
//}
/*P2415 集合求和*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	long long s;
//	int a,count=0;
//	while(cin>>a)
//	{
//		s+=a;  count++;
//	}
//	s=s*pow(2,count-1);
//	cout<<s<<endl;
//	return 0;
//}
/*P5743 【深基7.习8】猴子吃桃*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,x=1,sum=0;
//	cin>>n;
//	while (n!=1)
//	{
//		sum=(x+1)*2;
//		x=sum;
//		n--;
//	}
//	cout<<sum<<endl;
//	return 0;
//} 
/*P5744 【深基7.习9】培训*/
//#include<bits/stdc++.h>
//using namespace std;
//struct student {
//	string name;
//	int age,score;
//}temp[10000];
//student ans(student &temp)
//{
//	temp.age +=1;
//	temp.score*=1.2;
//	if(temp.score >600)
//	{
//		temp.score =600;
//	}
//	return temp;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cin>>temp[i].name >>temp[i].age >>temp[i].score ;
//	}
//	for(int i=0;i<n;i++)
//	{
//		ans(temp[i]);
//		cout<<temp[i].name <<" "<<temp[i].age <<" "<<temp[i].score <<endl;
//	}
//	return 0;
//}
/*P1217 [USACO1.5] 回文质数 Prime Palindromes*/
//#include<bits/stdc++.h>
//using namespace std;
//bool isProdom(int n)
//{
//	int sum=0,k=n;
//	while(k!=0)
//	{
//		sum *= 10;
//		sum += k%10;
//		k /=10;
//	}
//	if(sum==n) return true;
//	return false;
//}
//bool isPermin(int n)
//{
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0) return false;
//	}
//	return true;
//}
//int main()
//{
//	int a,b;
//	cin>>a>>b;
//	for(int i=a;i<=b;i++)
//	{
//		if(isProdom(i)&&isPermin(i))
//		{
//			cout<<i<<endl;
//		}
//	}
//	return 0;
//}
/*P1914 小书童——凯撒密码*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int x;
//	cin>>x;
//	string a;
//	cin>>a;
//	for(int i=0;i<a.size();i++)
//	{
//		for(int j=1;j<=x;j++)
//		{
//			a[i]++;
//			if(a[i]>'z')
//		    {
//			    a[i]='a';
//		    }
//		}
//	}
//	cout<<a;
//	return 0;
// } 
/*P1177 【模板】排序*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a[n];
//	for(int i = 0; i < n; i ++)
//	{
//		cin >> a[i];
//	}
//	sort(a , a+n);
//	for(int i = 0; i < n; i ++)
//	{
//		cout << a[i] << " ";
//	}
//	return 0;
//}
/*【算法1-2】排序*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,m;
//	cin >> n >> m;
//	int a[m];
//	for(int i = 0; i< m; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a , a+m);
//	for(int i = 0; i< m; i++)
//	{
//		cout << a[i] << " ";
//	}
//	return 0;
//}
/*P1923 【深基9.例4】求第 k 小的数*/
//#include<bits/stdc++.h>
//using namespace std;
//int x[5000000] , k;
//void qsort(int l ,int r )  //快速排序 
//{
//	int i = l, j = r, mid = x[(l+r)/2];  //建立两个哨兵i，j以及中间值mid 
//	while (i <= j)
//	{
//		while (x[j] > mid) j--;
//		while (x[i] < mid) i++;
//		if(i <= j)
//		{
//			swap(x[i] , x[j]);
//			i++;
//			j--;
//		}
//	}
//	if(k <= j) qsort(l , j);
//	else if(k >= i) qsort(i , r);
//	else if(k >= j && k <= i) return; 
//}
//int main()
//{
//	int n ;
//	scanf("%d,%d",&n,&k);
//	for(int i = 0; i < n; i++)
//	{
//		scanf("%d",&x[i]);
//	}
//	qsort(0 , n-1);
//	cout << x[k];
//	return 0; 
//}
/*P1059 [NOIP2006 普及组] 明明的随机数*/
//#include<bits/stdc++.h>
//using namespace std;
//int  ans(int a[],int n)
//{
//	int count = 0;
//	sort(a,a+n);            //先排序 
//	for(int i = 0; i < n; i++)
//	{
//		if(a[i]==a[i-1])       //前一个与后一个进行对比 
//		{
//			count++;           //有重复则count++ 
//			a[i-1]=1;        //重复的标记为1 
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n,cnt = 0;
//	cin>>n;
//	int a[n];
//	for(int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	cnt = ans(a , n);
//	cout << n-cnt << endl;
//	for(int i = 0; i < n; i++)
//	{
//		if(a[i]!=1)         //跳过为一的元素 
//		cout << a[i] <<" ";
//	}
//	return 0;
//} 
/*P1093 [NOIP2007 普及组] 奖学金*/
//#include<bits/stdc++.h>
//using namespace std;
//struct student{
//	int ch, ma, en;
//	int sum, id;
//}temp[305];
//bool cmp(student x,student y)  //排序规则函数 
//{
//	if(x.sum > y.sum ) return true;   //比较总分 
//	else if(x.sum < y.sum ) return false;
//	else{
//		if(x.ch > y.ch ) return true;    //比较语文 
//		else if(x.ch < y.ch ) return false;
//		else{
//			if(x.id < y.id ) return true;   //比较学号 
//			else false;
//		}
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		temp[i].id = i;
//		cin >> temp[i].ch >> temp[i].ma >> temp[i].en ;
//		temp[i].sum = temp[i].ch + temp[i].ma + temp[i].en;
//	}
//	sort(temp+1,temp+1+n,cmp);    //加1的原因是从一开始输入 
//	for(int i = 1; i <= 5; i++)
//	{
//		cout << temp[i].id << " " << temp[i].sum << endl; 
//	}
//	return 0; 
//} 
/*P1781 宇宙总统*/
//#include<bits/stdc++.h>
//using namespace std;
//struct pop{
//	string a;            //long long 类型长度不够 ，利用字符串 
//	int id;
//}temp[25];
//bool ans(pop x, pop y)
//{
//	if(x.a.length()>y.a.length()) return true;    //比较字符串的长度 
//	if(x.a.length()==y.a.length()&&x.a>y.a) return true;    //比较大小  
//	return false;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 1; i <= n; i++)
//	{
//		temp[i].id = i;
//		cin >> temp[i].a ;
//	}
//	sort(temp+1,temp+1+n,ans);
//	cout << temp[1].id << endl << temp[1].a ;
//	return 0;
//} 
/*P2676 [USACO07DEC] Bookshelf B*/
//#include<bits/stdc++.h>
//using namespace std;
//long long B,sum;
//bool cmp(int x,int y)
//{
//	return x>y;
//}
//int main()
//{
//	int n, count = 0;
//	cin >> n >> B;
//	int a[n];
//	for(int i = 1;i <= n;i++)
//	{
//		cin >> a[i];
//	}
//	sort(a+1,a+1+n,cmp);
//	for(int i = 1;i <= n;i++)
//	{
//		sum+=a[i];
//		if(sum >= B)
//		{
//			count = i;
//			break;
//		}
//	}
//	cout << count;
//	return 0;
//}
/*P1012 [NOIP1998 提高组] 拼数*/
//#include<bits/stdc++.h>
//using namespace std;
//string s[25];
//bool cmp(string a,string b)
//{
//	return a+b > b+a;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for(int i = 1;i <= n;i++) cin>>s[i];
//	sort(s+1,s+1+n,cmp);
//	for(int i = 1;i <= n;i++) cout<<s[i];
//	return 0;
//} 
/*P2550 [AHOI2001] 彩票摇奖*/
//#include<bits/stdc++.h>
//using namespace std;
//int a[7],b[7];
//int main()
//{
//	int n,count=0;
//	cin>>n;
//	int arr[n][7];
//	for(int i = 0;i < 7; i++)
//	{
//		cin >> b[i];
//	}
//	for(int i = 0;i < n; i++)
//	{
//		for(int j = 0;j < 7;j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for(int i = 0;i < n; i++)
//	{
//		for(int j = 0;j < 7;j++)
//		{
//			for(int k = 0;k < 7;k++)
//			{
//				if(arr[i][j]==b[k])
//				  count++;
//			}
//		}
//		if(count==7) a[0]++;
//		if(count==6) a[1]++;
//		if(count==5) a[2]++;
//		if(count==4) a[3]++;
//		if(count==3) a[4]++;
//		if(count==2) a[5]++;
//		if(count==1) a[6]++;
//		count=0;
//	}
//	for(int i = 0; i < 7;i++ )
//	{
//		cout<<a[i]<<" ";
//	}
//	return 0;
//} 
/*PP1957 口算练习题*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int n,a,b;
//	char flag,s2[10000];
//	string s;
//	stringstream stream;      //stringstream类型数据  输入输出流类 
//	cin >> n;
//	for(int i = 0;i < n;i++)
//	{
//		cin >> s;            //字符串输入 
//		if(s[0] >= 'a' && s[0] <= 'c')  //判断第一个输入的数据类型 
//		{
//			flag = s[0];
//			cin >> a >> b;
//		}
//		else
//		{
//			stream.clear();     //int类型数据转换string类型 
//			stream << s;        //将string型数据放入输入流 
//			stream >> a;        //从stream中将插入的string类型数据赋值给int 
//			cin >> b;
//		}
//		if(flag == 'a') sprintf(s2,"%d+%d=%d",a,b,a+b);  //sprintf函数 
//		if(flag == 'b') sprintf(s2,"%d-%d=%d",a,b,a-b);
//		if(flag == 'c') sprintf(s2,"%d*%d=%d",a,b,a*b);
//		cout << s2 << endl << strlen(s2) << endl;
//	}
//	return 0; 
//} 
///*P5015 [NOIP2018 普及组] 标题统计*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string n;
//	getline(cin,n);
//	int count = n.length();
//	for(int i = 0;i < n.length(); i++)
//	{
//		if(n[i] == ' ')
//		count--;
//	}
//	cout << count;
//	return 0;
//} 
/*P5734 【深基6.例6】文字处理软件*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int q;
//	cin >> q;
//	string n;
//	cin >> n;
//	while(q != 0)
//	{
//		int cho;
//		cin >> cho;
//		switch(cho)
//		{
//			case 1:{
//				string str;
//				cin >> str;
//				n = n + str;
//				cout << n << endl;
//				q--;
//				break;
//			}
//			case 2:{
//				int a,b;
//				cin >> a >> b;
//				n = n.substr(a,b);
//				cout << n<< endl;
//				q--;
//				break;
//			}
//			case 3:{
//				int c;
//				string str;
//				cin >> c >> str;
//				n = n.insert(c,str);
//				cout << n<< endl;
//				q--;
//				break;
//			}
//			case 4:{
//				string str1;
//				cin >> str1;
//				size_t found = n.find(str1);
//				if(found != string::npos)
//				{
//					cout << found<<end;
//				}
//				else
//				cout << -1;
//				q--;
//				break;
//			}
//		}
//	}
//	return 0;
//}
/*P1308 [NOIP2011 普及组] 统计单词数*/
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	string str1,str2;
//	getline(cin , str1);
//	getline(cin , str2);
//	for(int i = 0;i < str1.length();i++)
//	{
//		str1[i] = tolower(str1[i]);
//	}
//	for(int i = 0;i < str2.length();i++ )
//	{
//		str2[i] = tolower(str2[i]);
//	}
//	str1=' '+str1+' ';
//    str2=' '+str2+' ';
//	if(str2.find(str1) == string::npos )
//	{
//		cout << -1 << endl;
//	}
//	else{
//		int index =str2.find(str1);
//		int m = str2.find(str1);
//		int sum = 0;
//		while(index != string::npos )
//	{
//		++sum;
//		index = str2.find(str1,index+1);
//	}
//	cout << sum  << " " << m;
//	}
//	return 0;
////	cout<<str1<<"\n"<<str2;
//}
/*P1765 手机*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int sum = 0;
	for(int i = 0;i < str.length();i++)
	{
		if(str[i]==' ')
		sum +=1;
		if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||str[i]=='m'||str[i]=='p'||str[i]=='t'||str[i]=='w')
		sum +=1;
		if (str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||str[i]=='n'||str[i]=='q'||str[i]=='u'||str[i]=='x')
		sum += 2;
		if(str[i]=='c'||str[i]=='f'||str[i]=='i'||str[i]=='l'||str[i]=='o'||str[i]=='r'||str[i]=='v'||str[i]=='y')
		sum += 3;
		if(str[i]=='s'||str[i]=='z')
		sum += 4;
	}
	cout << sum <<endl;
	return 0;
}
