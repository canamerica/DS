#include "ds_common.h"
#include "triplet.h"


// triplet.cpp ������������Triplet��ElemType(��triplet.h����)�Ļ�������(8��)
Triplet::Triplet(ElemType v1,ElemType v2,ElemType v3)
{ // �������:������Ԫ��T,������T������Ԫ�صĳ�ֵΪv1,v2��v3
	T = new ElemType[3];
   //if(!(T = (ElemType *)malloc(3*sizeof(ElemType))))
   //  exit(OVERFLOW);
	T[0] = v1,T[1] = v2, T[2] = v3;
}

Triplet::~Triplet()
{ // �����������Ԫ��T������
	delete[] T;
	//free(T);
}

Status Triplet::Get(int i, ElemType &e)
{ // ��ʼ��������Ԫ��T�Ѵ��ڣ�1��i��3�������������e����T�ĵ�iԪ��ֵ
   if(i < 1|| i > 3)
     return ERROR;
   e = T[i-1];
   return OK;
}

Status Triplet::Put(int i, ElemType e)
{ // ��ʼ��������Ԫ��T�Ѵ��ڣ�1��i��3������������ı�T�ĵ�iԪ��ֵΪe
   if(i < 1|| i > 3)
     return ERROR;
   T[i-1] = e;
   return OK;
}

Status Triplet::IsAscending()
 { // ��ʼ��������Ԫ��T�Ѵ��ڡ�������������T������Ԫ�ذ��������У�����1�����򷵻�0
   return(T[0] <= T[1] && T[1] <= T[2]);
 }

Status Triplet::IsDescending()
 { // ��ʼ��������Ԫ��T�Ѵ��ڡ�������������T������Ԫ�ذ��������У�����1�����򷵻�0
   return(T[0] >= T[1] && T[1] >= T[2]);
 }

Status Triplet::Max(ElemType &e)
{ // ��ʼ��������Ԫ��T�Ѵ��ڡ������������e����T������Ԫ���е����ֵ
   e = T[0] >= T[1] ? T[0] >= T[2] ? T[0] : T[2] : T[1] >= T[2] ? T[1]:T[2];
   return OK;
}

Status Triplet::Min(ElemType &e)
{ // ��ʼ��������Ԫ��T�Ѵ��ڡ������������e����T������Ԫ���е���Сֵ
   e = T[0] <= T[1] ? T[0] <= T[2] ? T[0] : T[2] : T[1] <= T[2] ? T[1]:T[2];
   return OK;
}

void Triplet::Display()
{
	cout << "Triplet��" << T[0] << ' ' << T[1] << ' ' << T[2] << endl;
}