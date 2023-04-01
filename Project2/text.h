//#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#define M_PI   3.14159265358979323846
//#include<math.h>
//#include <map>
//#include <set>
//using namespace std;
//#include <numbers>
//
// 
// 



//int main() {
//	int a, b, c, day = 0;
//	int max = 0;
//	for (int i = 1; i <= 7; i++) {
//		cin >> a >> b;
//		if ((a + b > max) && (a + b > 8))max = a + b, day = i;
//	}
//	cout << day;
//
//	return 0;
//
//}
// 
// 
//const int N = 1001;
//int c[N];
//set<int> s;
//int main() {
// 
//	int a, b;
//	cin >> a;
//	for (int i = 0; i < a; i++) {
//		cin >> c[i];
//		s.insert(c[i]);
//	}
//	cout << s.size() << endl;
//	for (auto i : s) cout << i << " ";
//
//	return 0;
//
//}
// 
//	int a, b, cnt = 0, temp;
//	cin >> a;
//	for (int i = 0; i < a; i++) {
//		cin >> temp;
//		if (c[temp] == 0)c[temp]++, cnt++;
//	}
//	cout << cnt << endl;
//	for (int i = 1; i <= N; i++)
//		if (c[i])
//			cout << i << " ";
//
//	return 0;

//const int N = 1e4 + 7; //常量int N =  差分 前缀和
//int mark[N]; //数组
//
//int main() {
//	int n, m, u, v, cnt = 0;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> u >> v;
//		mark[u]++;
//		mark[v + 1]--;
//	}
//	int pos = 0;
//	for (int i = 0; i <= n; i++) {
//		pos += mark[i];
//		if (!pos) cnt++;
//	}
//	cout << cnt;


//void ma5() {
// int a[10000];
//	memset(a, 0, sizeof(a));
//	int l, m, u, v, num = 0;
//	cin >> l >> m;
//	for (int i = 0; i < l; i++) {
//		a[i] = 0;
//	}
//	for (int i = 1; i < m; i++)
//	{
//		cin >> u >> v;
//		for (int j = u; j <= v; j++) {
//			if (a[j] == 0)
//				a[j] = 1;
//		}
//	}
//	for (int i = 0; i < l - 1; i++) {
//		if (a[i] == 0)
//			num++;
//	}
//	cout << num;
//
//
//	return 0;
//}
// 
// 
// 
////int main()
////{
////	m4(); return 0;
////}
//
//
//map <int, int > a;
//set<string> b;
//void ma5() {
//	a[100] = 1;
//	b.insert("1");
//	a[200] = 1;
//	for (auto i : a)
//		cout << i.first << "\n";
//	for (auto i : b)
//		cout << i;
//}
//
//const int N = 2000001;
//int x[N];
//void ma4() {
//	int n, b, c;
//	double a;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a >> b;
//		for (int j = 1; j <= b; j++)
//		{
//			c = j * a;
//			x[c] ++;
//			x[c] %= 2;
//		}
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		if (x[i] == 1)
//			cout << i;
//	}
//
//	//memset(n, 0, sizeof(int) * 10); //初始化10个 int类型 
//}
//
//
//void ma3() {
//	long long n;
//	cin >> n;
//
//	if (n == 2) {
//		cout << "True";
//		return;
//	}
//
//	for (int i = 2; i <= n; i++)
//		if (n % i == 0) {
//			cout << "False";
//			break;
//		}
//		else {
//			cout << "True";
//			break;
//		}
//};
//
//void ma2() {
//
//	int b1 = 0, b2 = 0, b3 = 0, max1 = 0, max2 = 0, min1 = 0;	//判断最长边/
//	cin >> b1 >> b2 >> b3;
//	//if (b1 >= b2 && b1 >= b3) {
//	//	max1 = b1;
//	//	if (b2 >= b3) {
//	//		max2 = b2;
//	//		min1 = b3;
//	//	}
//	//	else {
//	//		max2 = b3;
//	//		min1 = b2;
//	//	}
//	//}
//
//	//if (b2 >= b1 && b2 >= b3) {
//	//	max1 = b2;
//	//	if (b1 >= b3) {
//	//		max2 = b1;
//	//		min1 = b3;
//	//	}
//	//	else {
//	//		max2 = b3;
//	//		min1 = b1;
//	//	}
//	//}
//
//	//if (b3 >= b2 && b3 >= b1) {
//	//	max1 = b3;
//	//	if (b2 >= b1) {
//	//		max2 = b2;
//	//		min1 = b1;
//	//	}
//	//	else {
//	//		max2 = b1;
//	//		min1 = b2;
//	//	}
//	//}
//	//cout << min1 << "/" << max1;
//
//
//};
//
//void ma1() {//判断三角形
//
//	int b1 = 0, b2 = 0, b3 = 0, max1 = 0, max2 = 0, min1 = 0;	//判断最长边
//	cin >> b1 >> b2 >> b3;
//	if (b1 >= b2 && b1 >= b3) {
//		max1 = b1;
//		if (b2 >= b3) {
//			max2 = b2;
//			min1 = b3;
//		}
//		else {
//			max2 = b3;
//			min1 = b2;
//		}
//	}
//
//	if (b2 >= b1 && b2 >= b3) {
//		max1 = b2;
//		if (b1 >= b3) {
//			max2 = b1;
//			min1 = b3;
//		}
//		else {
//			max2 = b3;
//			min1 = b1;
//		}
//	}
//
//	if (b3 >= b2 && b3 >= b1) {
//		max1 = b3;
//		if (b2 >= b1) {
//			max2 = b2;
//			min1 = b1;
//		}
//		else {
//			max2 = b1;
//			min1 = b2;
//		}
//	}
//
//	if (max1 + max2 > min1 && max1 + min1 > max2 && max2 + min1 > max1) {
//
//		if (min1 * min1 + max2 * max2 < max1 * max1) {
//			cout << "Obtuse triangle\n";
//			if ((max1 == max2) != min1 && (min1 == max2) != max1 && (max1 == min1) != max2)
//			{
//				cout << "Isosceles triangle\n";
//			}
//		}
//
//		if (min1 * min1 + max2 * max2 > max1 * max1) {
//			cout << "Acute triangle\n";
//			if ((max1 == max2) != min1 && (min1 == max2) != max1 && (max1 == min1) != max2)
//			{
//				if (max1 == max2 && max2 == min1)
//				{
//					cout << "Isosceles triangle\n";
//					cout << "Equilateral triangle\n";
//				}
//				else {
//					cout << "Isosceles triangle\n";
//				}
//			}
//
//		}
//
//		if (min1 * min1 + max2 * max2 == max1 * max1) {//直角
//			cout << "Right triangle\n";
//		}
//	}
//	else
//		cout << "Not triangle\n" << endl;
//
//};
//
//
//
//void m9() {//类型强转化
//	int a, b, c;
//	int s;
//	cin >> a >> b >> c;
//	s = (int)(a * 0.2 + b * 0.3 + c * 0.5);//第一次强制转化
//	printf("%.lf", (double)s);//第二、三次强制转化
//	//int a = 0, b = 0, c = 0;
//	//cin >> a >> b >> c;
//	//cout << a * 0.2 + b * 0.3 + c * 0.5 ;
//
//};
//
//
//void m8() { //
//	int c, d;
//	cin >> c >> d;
//	c = c * 10 + d;
//	c = c / 19;
//	cout << c;
//};
//
//
//void m7() {
//
//	int a = 0, b = 0, c = 0, d = 0;
//	cin >> a >> b >> c >> d;
//	if (d < b) {
//		d = d + 60 - b;
//		c = c - a - 1;
//	}
//	else {
//		d = d - b;
//		c = c - a;
//	}
//	cout << c << " " << d;
//};
//
//
//void m6() {//圆柱体体积 底面积（Π * r * r） * h
//
//	int h = 0, r = 0;
//	double c = 0, sum2 = 0;
//	int sum1 = 20 * 1000;
//	cin >> h >> r;
//	sum2 = r * r * M_PI * h;
//	c = ceil(sum1 / sum2);
//	cout << c;
//};
//
//void m4() {//
//
//	double a = 0, b = 0, c = 0,p = 0,area = 0;
//	cin >> a >> b >> c;
//	p = (a + b + c) / 2;
//	area = sqrt(p * (p - a) * (p - b ) * (p - c));
//	printf("%.1f",area);
//}; 
//
//void m3() {
//
//
//	}
//
//
//void m5() {
//
//	double s = 0, v = 0;
//	int b = 8, m = 0, c = 0;
//	cin >> s >> v;
//	m = ceil(s / v) + 10;
//	if (ceil(m * 1.0 / 60) <= 8)
//		b -= ceil(m * 1.0 / 60);
//	else
//		b -= ceil(m * 1.0 / 60) - 24;
//
//	c = 60 - m % 60;
//	if (c % 60 == 0)
//		c -= 60;
//
//	if (b < 10)
//		printf("0%d:", b);
//	else
//		printf("%d:", b);
//
//	if (c < 10)
//		printf("0%d", c);
//	else
//		printf("%d", c);
//};
//
//void m2() {
//	//洛谷-再分肥宅水;
//		//洛谷-再分肥宅水;
//	//float a = 0;
//	//int b = 0;
//	//cin >> a >> b;
//	//a = a / b;
//	//b = b * 2;
//	//printf("%.3f\n%d", a, b);
//
//	//float a;
//	//int n;
//	//cin >> a >> n;
//	//printf(" % .3f", a / n);
//	//printf("%d", n * 2);
//	//int a = 0, b = 0;
//	//cin >> a >> b;
//	//cout << "输入";
//};
//
//void m1() {
//	//反转字符串 头文件内的 string a;
//	string a;
//	cin >> a;
//	for (int i = a.size(); i >= 0; i--)
//		cout << a[i];
//};
//
//void m()
//{
//	int a = 0, pencil = 1, peisi = 3, snakes = 5, eraser = 2, book = 12;
//	printf("书本的价格为：%d块，你一共有20块\n", book);
//	printf("1,铅笔的价格为：%d块\n", pencil);
//	printf("2.橡皮的价格为：%d块，你一共有20块\n", eraser);
//	printf("3.百事可乐！！的价格为：%d块\n", peisi);
//	printf("4.零食的价格为：%d块\n", snakes);
//	cin >> a;
//	switch (a)
//	{
//	case 1:
//		printf("买完书后还可以买%d只笔,还剩%d块", (20 - book) / pencil, 8 % pencil); break;
//	case 2:
//		printf("买完书后还可以买%d块像皮,还剩%d块", (20 - book) / eraser, 8 % eraser); break;
//	case 3:
//		printf("买完书后还可以买%d听百事可乐！！！,还剩%d块", (20 - book) / peisi, 8 % peisi); break;
//	case 4:
//		printf("买完书后还可以买%d袋零食,还剩%d块", (20 - book) / snakes, 8 % snakes); break;
//
//	default:
//		printf("输入错误\n");  m();  break;
//	}
//
//};
