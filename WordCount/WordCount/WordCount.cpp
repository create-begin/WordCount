#include <bits/stdc++.h>
using namespace std;

int main()
{
	char a[100000];//用于读取文本的内容
	int cnt_1 = 0;//单词数
	int cnt_2 = 0;//字符数
	ifstream input;
	input.open("test.txt");//打开文件	
	input.getline(a, 100);
	int l = strlen(a);
	for (int i = 0; i < l; i++) {
		if (a[i] == ' '||a[i]==',') cnt_1++;//记录单词数
		else cnt_2++;//记录字符数
	}
	cout << "单词数为：" << cnt_1 << endl;

	cout << "字符数为：" << cnt_2 << endl;
	input.close();//关闭文件
    return 0;
}


