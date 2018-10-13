// Triplet.cpp : 定义控制台应用程序的入口点。

#include "ds_common.h" // 要将程序中所有#include命令所包含的文件拷贝到当前目录下
#include "triplet.h" // 在此命令之前要定义ElemType的类型


void main()
{
	Triplet triplet(5, 7, 9);
	triplet.Display();

	ElemType m;
	Status i;
	i = triplet.Get(2, m);
	if (i == OK)
		cout << "triplet的第2个值为：" << m << endl;

	i = triplet.Put(2, 6);
	if (i == OK) triplet.Display();

	i = triplet.IsAscending(); // 此类函数实参与ElemType的类型无关,当ElemType的类型变化时,实参不需改变
	cout << "调用测试升序的函数后，i=%d(0:否 1:是)\n" << i << endl;

	i = triplet.IsDescending();
	cout << "调用测试降序的函数后，i=%d(0:否 1:是)\n" << i << endl;

	if ((i = triplet.Max(m)) == OK) // 先赋值再比较
		cout << "triplet中的最大值为：" << m << endl;

	if ((i = triplet.Min(m)) == OK)
		cout << "triplet中的最小值为：" << m << endl;

	system("pause");
}

