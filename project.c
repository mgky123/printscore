// project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int count = 0,i,j; //���Ƚ��
	int *num; //�����ȣ
	srand((unsigned)time(NULL));
	printf("get count : ");
	scanf_s("%d", &count);
	
	num = (int*)malloc(sizeof(int)*count); // numũ���� �迭����

	for(i = 0; i < count; i++){
		num[i] = (rand() % 1000) * 100 + rand() % 100; // 0 ~ 99999 �������� ����
		for (j = 0; j < i; j++){                       // �ߺ��˻�
			if(num[j] == num[i]){
				i--;
			}
		}
	}
	
	for (i = 0; i < count; i++){
		printf("NT%05d %d\n", num[i], rand() % 101);
	}
	free(num);
	return 0;
}

