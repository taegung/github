#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [���°�] [2019038059] -----]\n");
int list[5];//ũ�Ⱑ 5�� list�迭
int *plist[5] = {NULL,};//list������ ���� �������� �迭�� �ʱ�ȭ
plist[0] = (int *)malloc(sizeof(int));//plist�迭�� malloc�� ���ؼ� �������� �޸� �Ҵ�
list[0] = 1;//ù��° �迭�� 1�� �ʱ�ȭ
list[1] = 100;//2��° �迭�� 100���� �ʱ�ȭ

*plist[0] = 200;//plist�� ù��° �迭�� 200���� �ʱ�ȭ 
printf("value of list[0] = %d\n", list[0]);
printf("address of list[0] =%p\n",&list[0]);
printf("value of list =%p\n",&list);
printf("address of list (&list) =%p\n",&list);

printf("---------------------------------------------------------------\n\n");
printf("value of list[1]= %d\n", list[1]);
printf("address of list[1] = %p\n", &list[1]);
printf("value of *(list+1) = %d\n", *(list + 1));
printf("address of list+1 = %p\n", list+1);

printf("---------------------------------------------------------------\n\n");

printf("value of *plist[0] = %d\n", *plist[0]);//200�� ���
printf("&plist[0]= %p\n", &plist[0]);//ù��° �ּ� ���
printf("&plist= %p\n", &plist);//plist�� �ּ� ���
printf("plist= %p\n", plist);//plist�� �ּ� ���
printf("plist[0]= %p\n", plist[0]);//plist�� ������ �ִ� �ּ����
printf("plist[1]= %p\n", plist[1]);//null��
printf("plist[2]= %p\n", plist[2]);//null��
printf("plist[3]= %p\n", plist[3]);//null��
printf("plist[4]= %p\n", plist[4]);//null��

free(plist[0]);
}