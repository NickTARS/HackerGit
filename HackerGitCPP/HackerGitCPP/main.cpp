#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Person.h"
using namespace std;

//	�� ������ �ذ����� ������, �ش� �������� commit �� ��.
//	commit �޽����� �����Ӱ� �ص� �˴ϴ�.

int main()
{
	//	1��
	//	0~99 ������ ������ ���� 100���� �����ϰ�, ������������ �����Ͽ� ����Ͻÿ�.
	//	��, ��� ������ int�� �����͸� ����� ��.
    int n=100;
    int* arr= new int[n], temp;
    srand((unsigned)time(NULL));
    
    for(int i=0; i<100; i++)
    {
        arr[i]=rand()% 100;
        for(int j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=rand()% 100;
                j=0;
            }
        }
    }
    
    for(int i=0; i<99; i++)
    {
        for(int j=i+1; j<100; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    
    for(int i=0; i<100; i++)
    {
        cout << arr[i] << endl;
    }

	//	2��
	//	���(Person)�� ��Ÿ�� Ŭ������ �ۼ��Ͻÿ�. Person.h, Person.cpp ������ ����� ������ ��.
	//	��� ����, �Լ��� public���� �����ϰ� �� ��.
	//	�������
	//		�̸�(name)			: string
	//		����(age)			: int
	//		���翩��(isAlive)	: bool
	//	����Լ�
	//		���ϱ�(talk)			: "Hello, world!"�� ����Ѵ�.
	//		���ڱ�(sleep)		: "zzz"�� ����Ѵ�.
    
    
	//  3��
	//	�� ���� ���� �ý���
    //  �л�(student)�� ���� ����ü�� ���ð���(item)�� ���� ����ü�� �����.
    //
    //  list.txt ������ �о�鿩 main���� student* �����͸� �̿��Ͽ� �ο����� �����Ҵ�
    //  ���� ���ð��񺰷� subject�� ���� �����Ҵ��� �����Ѵ�.
    //  ���Ͽ��� ��� �����͸� �о��ٸ�
    //  �� ������ "�� �����ο�: 00��" �� ǥ���ϰ�,
    //  �л��̸�: �̸� / ���ð����: 0�� / ����1: 00, ����2: 00, ����3: 00 ...
    //  �� ���� �÷� ����Ѵ�.
    //
    //  �߰��� ���� �����Ϳ� �Ѹ� ���� �ֿܼ��� �߰��Ͽ�
    //  �� �����ο��� ���ο� �л��� ���� ������ ����ϴ� �ڵ带 ������ ��!
    //
    //  struct subject {
    //      string itemName;
    //      int score;
    //  };
    //  struct student {
    //      string name;		// �л��̸�
    //      int subjectCount;	// ���ð����
    //      subject* pItem;		// ���� ���
    //  };


	
	//	4��
	//	�����ڿ��� �ϰ���� ���� �����ÿ�.
	//	: ����մϴ�
	return 0;
}