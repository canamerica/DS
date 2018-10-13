#ifndef TRIPLET
#define TRIPLET

typedef int ElemType; // ���������������ElemType�ڱ�������Ϊ����

class Triplet {
public:
	Triplet(ElemType v1, ElemType v2, ElemType v3);
	~Triplet();

	Status Get(int i, ElemType &e);

	Status Put(int i, ElemType e);

	Status IsAscending();

	Status IsDescending();

	Status Max(ElemType &e);

	Status Min(ElemType &e);

	void Display();
private:
	ElemType *T;
};

#endif