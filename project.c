// project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int count = 0,i,j; //출력횟수
	int *num; //사원번호
	srand((unsigned)time(NULL));
	printf("get count : ");
	scanf_s("%d", &count);
	
	num = (int*)malloc(sizeof(int)*count); // num크기의 배열생성

	for(i = 0; i < count; i++){
		num[i] = (rand() % 1000) * 100 + rand() % 100; // 0 ~ 99999 랜덤난수 생성
		for (j = 0; j < i; j++){                       // 중복검사
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

