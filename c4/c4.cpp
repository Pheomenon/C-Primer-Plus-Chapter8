// 本题跳过


#include<cstring>
#include<iostream>
using namespace std;

struct  stringy
{
	char* str;
	int ct;
};
void set(stringy& s, const char* s1);
void show(const stringy& s, int i = 1);
void show(const  char* s1, int i = 1);
int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be .";
	set(beany, testing);
	show(beany);
	cout << endl;
	show(beany, 2);
	cout << endl;
	testing[0] = 'D';
	testing[2] = 'u';
	show(testing);
	cout << endl;
	show(testing, 3);
	cout << endl;
	show("Done!");
	cin.get();
	system("pause");
	return 0;
}
void set(stringy& s, const char* s1)
{
	s.ct = strlen(s1);
	s.str = new  char[s.ct + 1];
	strcpy(s.str, s1);
}
void show(const stringy& s, int i)
{
	for (int k = 0; k < i; k++)
	{
		cout << s.str << endl;
	}
}
void show(const  char* s1, int i)
{
	for (int k = 0; k < i; k++)
	{
		for (int j = 0; j < sizeof(s1); j++)
		{
			cout << s1[j];
		}
	}
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
