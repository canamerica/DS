// Triplet.cpp : �������̨Ӧ�ó������ڵ㡣

#include "ds_common.h" // Ҫ������������#include�������������ļ���������ǰĿ¼��
#include "triplet.h" // �ڴ�����֮ǰҪ����ElemType������


void main()
{
	Triplet triplet(5, 7, 9);
	triplet.Display();

	ElemType m;
	Status i;
	i = triplet.Get(2, m);
	if (i == OK)
		cout << "triplet�ĵ�2��ֵΪ��" << m << endl;

	i = triplet.Put(2, 6);
	if (i == OK) triplet.Display();

	i = triplet.IsAscending(); // ���ຯ��ʵ����ElemType�������޹�,��ElemType�����ͱ仯ʱ,ʵ�β���ı�
	cout << "���ò�������ĺ�����i=%d(0:�� 1:��)\n" << i << endl;

	i = triplet.IsDescending();
	cout << "���ò��Խ���ĺ�����i=%d(0:�� 1:��)\n" << i << endl;

	if ((i = triplet.Max(m)) == OK) // �ȸ�ֵ�ٱȽ�
		cout << "triplet�е����ֵΪ��" << m << endl;

	if ((i = triplet.Min(m)) == OK)
		cout << "triplet�е���СֵΪ��" << m << endl;

	system("pause");
}

