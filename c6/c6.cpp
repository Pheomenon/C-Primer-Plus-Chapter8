// c6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
template <typename T>
T maxn(T a[], int length);
template<> char* maxn(char* p[], int length);
int main()
{
	int intArray[6] = { 3,42,543,65,34,2 };
	double doubleArray[4] = { 65,43,7,3 };
	char* charArrayPt[5];
	char charArray0[] = { "rkopew" };
	char charArray1[] = { "rkop5435r4rew" };
	char charArray2[] = { "rkop23ew" };
	char charArray3[] = { "rkopee32w" };
	char charArray4[] = { "rkop43ew" };
	for (int i = 0; i < 5; i++) {
		charArrayPt[0] = charArray0;
		charArrayPt[1] = charArray0;
		charArrayPt[2] = charArray0;
		charArrayPt[3] = charArray0;
		charArrayPt[4] = charArray0;
	}
	cout<<"Int: "<<maxn(intArray, 6)<<endl;
	cout<<"Double: "<<maxn(doubleArray, 4) << endl;
	cout << "Char: " << maxn(charArrayPt, 5) << endl;
}
template <typename T>
T maxn(T a[], int length) {
	T max = a[0];
	for (int i = 0; i < length; i++) {
		if (a[i] < a[i + 1] && max < a[i + 1])
			max = a[i + 1];
	}
	return max;
}
template<> char* maxn(char* p[], int length) {
	int max = 0;
	char* temp = p[0];
	for (int i = 0; i < length; i++)
	{
		if ((int)strlen(p[i]) > max)//注意比较地址长度 
		{
			max = strlen(p[i]);
			temp = p[i];
		}
	}
	return temp;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
