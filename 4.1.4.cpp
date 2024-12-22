#include<iostream>
#include<vector>
using namespace std;
//��д���º������ϲ��������кõ����飬�γ�һ���µ����кõ����顣
//void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
//ʹ��size1 + size2�αȽ�ʵ�ֺ�������д���Գ�����ʾ�û������������кõ����飬����ʾ�ϲ��Ժ�����顣
//������һ������������ע�⣬�������ݵĵ�һ�������������Ԫ�����������������һ���֡��ٶ������С������80��
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	while (i<size1&&j<size2)
	{
		if (list1[i] <= list2[j])
		{
			list3[k] = list1[i];
			i++;
			k++;
		}
		if (list2[j] <= list1[i])
		{
			list3[k] = list2[j];
			j++;
			k++;
		}
	}

		while (j<size2)
		{
			list3[k] = list2[j];
			j++;
			k++;
		}

		while (i < size1)
		{
			list3[k] = list2[i];
			i++;
			k++;
		}
	}


int main()
{
	int size1, size2;
	cout << "����һ�ĸ���";
	cin >> size1;
	int* list1 = new int[size1];
	cout << "��������"<<endl;
	for (int i = 0;i < size1;i++) 
	{
		cin >> list1[i];
	}
	cout << "������ĸ���";
	cin >> size2;
	int* list2 = new int[size2];
	cout << "��������"<<endl;
	for (int i = 0;i < size2;i++)
	{
		cin >> list2[i];
	}
	int* list3 = new int[size1 + size2];
	merge(list1, size1, list2, size2, list3);
	for (int i = 0;i < size1 + size2;i++)
	{
		cout << list3[i]<<' ';
	}
	delete[] list1;
	delete[] list2;
	delete[] list3;
}