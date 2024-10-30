#include <bits/stdc++.h>
##1:
int main()
{
	vector<int>v;
	for (int i = 0; i < 9; ++i)
	{
		int x; cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for (auto& i : v)
	{
		cout << i << ' ';
	}
	return 0;
}


##2:
int main()
{
	int a, b, c; cin >> a >> b >> c;
	int ans = 0;
	if (a > b)ans = a;
	else ans = b;
	if (ans < c)ans = c;
	cout << ans;
	return 0;
}


##3:
int main()
{
	int score; cin >> score;
	if (score >= 90)cout << 'A';
	if (80 <= score && score <= 89)cout << 'B';
	if (70 <= score && score <= 79)cout << 'C';
	if (60 <= score && score <= 69)cout << 'D';
	if (score < 60)cout << 'E';
	return 0;
}


##4:
int gy(int a, int b)
{
	if (a % b == 0)return b;
	else return gy(b, a % b);
}
int main()
{
	int m, n; cin >> m >> n;
	int x = gy(m, n);
	int y = m * n / x;
	cout << x << y;
	return 0;
}


##5:
int sn(int n)
{
	if (n == 1)return 1;
	else return n * sn(n - 1);
}
int main()
{
	int Sn = 0;
	int n; cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		Sn += sn(i);
	}
	cout << Sn;
	return 0;
}


##6:
int main()
{
	for (int i = 100; i < 1000; ++i)
	{
		int a = i % 10;
		int b = (i/10) % 10;
		int c = (i / 100) % 10;
		if (i == a * a * a + b * b * b + c * c * c)cout << i << '\n';
	}
	return 0;
}


##7:
int main()
{
	int n; cin >> n;
	for (int i = 1; i <n; ++i)
	{
		int ans = 0;
		if (i == 2)
		{
			cout << 2 << '\n';
			continue;
		}
		if (i == 3)
		{
			cout << 3 << '\n';
			continue;
		}
		for (int j = 2; j <= sqrt(i); ++j)
		{
			
			if (i % j == 0)
			{
				ans = 0;
				break;
			}
			else ans = i;
		}
		if (ans)cout << ans << '\n';
	}
	return 0;
}


##8:
int main()
{
	vector<int>arr;
	for (int i = 1; i <= 9; ++i)
	{
		int x; cin >> x;
		arr.push_back(x);
	}
	int y; cin >> y;
	arr.insert(arr.end(),y);
	sort(arr.begin(), arr.end());
	for (auto &a:arr)
	{
		cout << a << '\n';
	}
	return 0;
}


##9:
int main()
{
	int arr[4][4];
	for (int i = 1; i <= 3; ++i)
	{
		for (int j = 1; j <= 3; ++j)
		{
			cin >> arr[i][j];
		}
	}
	int brr[4][4];
	for (int i = 1; i <= 3; ++i)
	{
		for (int j = 1; j <= 3; ++j)
		{
			brr[i][j] = arr[j][i];
		}
	}
	for (int i = 1; i <= 3; ++i)
	{
		for (int j = 1; j <= 3; ++j)
		{
			cout << brr[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}


##10:
string s(string& a, string& b)
{
	return a + b;
}
int main()
{
	string a, b;
	cin >> a >> b;
	string c = s(a, b);
	cout << c;
	return 0;
}


##11:
void change(int* a)
{
	for (int i = 0; i < 5; ++i)
	{
		int temp = a[i];
		a[i] = a[9 - i];
		a[9 - i] = temp;
	}
}
int main()
{
	int a[10];
	for (int i = 0; i < 10; ++i)
	{
		cin >> a[i];
	}
	change(a);
	for (int i = 0; i < 10; ++i)
	{
		cout << a[i] << '\n';
	}
	return 0;
}
