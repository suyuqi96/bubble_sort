// bubble_sort.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream> 
using namespace std;



void main()
{
	//将a中整数序列重新排列成自小至大有序的整数序列。
	int i=0;
	int Q = 0;
	const int n=10;
	int acount = 0;
	int a[n] = {3,7,9,6,5,2,1,4};//数组的赋值，由a1-a10有10个数，未赋值位置默认赋0。
	bool change = true;
	for (i = n-1,change ; i >= 1&&change; --i) {
		change = false;
		for (int j = 0; j < i; ++j)
			if (a[j] > a[j + 1]) { a[Q] = a[j], a[j] = a[j + 1], a[j + 1] = a[Q]; change = true; acount++; };
	}
	for (i = 1; i < n; ++i) { cout << a[i]; };
	cout << acount;

};//bubble_sort

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
