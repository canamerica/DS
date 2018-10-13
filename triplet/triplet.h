#ifndef TRIPLET
#define TRIPLET

typedef int ElemType; // 定义抽象数据类型ElemType在本程序中为整型

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