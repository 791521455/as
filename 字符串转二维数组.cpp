/*
*kaifa_date
*1.格式 0304
*2.输入 
*3.处理 
*4.输出 
*/ 

#include <stdio.h>
#include <Windows.h>

char zc_ab (char k)
{
	char result[]="NULLS";
	//a-chinese,b-math,c-english,d-physics,f-chemistry
	if(k=='a')
		 char result[] = "chinese";
		//char site[] = "RUNOOB"
	//if(k==b)
	
	
	return result[0];
 } 





int main(void)
{
	char sclass[7][8];//sclass[day][num]
	int issd;
	for (int i=0;i<1;i++)
	{
		for (int j=0;j<8;j++)
		{
			printf("class_%d_%d\n",i,j);
		//	printf("     %d--%d\n",i,j);
			scanf("%c",&sclass[i][j]);
			issd++;
		}
	}
	//*************************
	
		for (int i=0;i<1;i++)
	{
		for (int j=0;j<8;j++)
		{
			printf("class[%d][%d]=%s\n",i,j,zc_ab(sclass[i][j])/*sclass[i][j]*/);
				
		}
	}
	printf("*********************************\n     time=%d",issd);
	Sleep(5000);
	scanf("i%d",&issd);
	return 0;
 } 

