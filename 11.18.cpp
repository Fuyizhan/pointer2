//ʹ��ָ�������ʾ����ַ���
//ָ��������һ�����飬�����ÿһ��Ԫ�ض���ָ��
//����ָ����һ��ָ�룬ָ��ָ��һ������
#include<stdio.h>
#include<string.h>
/*int main()
{
	char *p1,*p2,*p3;
	p1="C";p2="C++";p3="Java";
	char *p[]={p1,p2,p3};
	char**pa=p;
	int n;
	for(n=0;n<3;n++)
	printf("%s",*(pa+n));
 } */
 //����һ��ʮ�����������뷴������ӣ��ظ��ò������յõ�һ��������
/* int reverse(int n,int *p)
 {
 	int s=n;
 	int sum=0;
 	while(s)
 	{
	sum*=10;
 	sum+=s%10;
 	s/=10;}
 	*p=sum;
 	if(n==*p) return 1;
 	else      return 0;
 }
 int main()
 {
 	int x,a,*p=&a;
 	printf("������������");
 	scanf("%d",&x);
 	while(!reverse(x,p))
 	{
 		x+=*p;
	 }
	 printf("\n����%d�ǻ�����",x);
 }*/
 
//ʹ��ָ��ʵ�ֳ��������㷨--ѡ������ֱ�Ӳ��������ð������
/*void mune()
{
	printf("******1.ѡ������****\n");
	printf("******2.ֱ�Ӳ�������\n");
	printf("******3.ð������****\n");
}
void selectsort(int *p,int n)
{
	int i,j,tmp,*pa;
	for(i=0;i<10;i++)
	{
		pa=p+i;
	for(j=1+i;j<10;j++)
	{
	if(*(p+j)<*pa)
		pa=p+j;//��¼��Сֵ���±� 
}
		tmp=*pa; *pa=*(p+i); *(p+i)=tmp;	
	}
}
void insretsort(int* p,int n)
{
 int i,j,tmp;
 for(i=1;i<n;i++)
 {
 tmp=*(p+i);
 for(j=i-1;j>=0&&*(p+j)>tmp;j--)
 *(p+j+1)=*(p+j);
 *(p+j+1)=tmp;	
}
}
void bubblesort(int* p,int n)
{
	int i,j,tmp;
	for(i=0;i<10;i++)
	for(j=1+i;j<10;j++)
	if(*(p+i)>*(p+j))
	{tmp=*(p+i);*(p+i)=*(p+j);*(p+j)=tmp;}
	
}
int main()
{
	int a[10]={10,23,45,6,90,26,67,3,66,78},i,n;
	printf("����ǰ��\n");
	for(i=0;i<10;i++) printf("%d ",a[i]);
	mune();
	printf("\nѡ�����򷽷���");
	scanf("%d",&n) ;
	switch(n)
	{
		case 1: selectsort(a,10);break;
		case 2: insretsort(a,10);break;
		case 3: bubblesort(a,10);break;
	}
	printf("�����\n");
	for(i=0;i<10;i++) printf("%d ",a[i]);
	return 0;
 } */
 /*void sort(char*p[],int n)
 {
 	int i,j,k;
 	char* tmp;
 	for(i=0;i<n;i++)
 	{
 		k=i;
 		for(j=1+i;j<n;j++)
 		{
		if(strcmp(p[k],p[j])>0)
 		k=j;}
 		tmp=p[k];p[k]=p[i];p[i]=tmp;
	 }
 	
 }
 int main()
 {
 	char*p[]={"one","two","three","four","five"};
 	int i,n=sizeof(p)/sizeof(char*);
 	sort(p,n);
 	for(i=0;i<n;i++)
 	printf("%s",p[i]);
 }*/
 //����3���ַ���������С����˳�����
 /*swap(char*p1,char*p2)
 {
 	char p[50];
 	strcpy(p,p1);
 	strcpy(p1,p2);
 	strcpy(p2,p);
 }
 int main()
 {
 	char str1[50],str2[50],str3[50];
 	gets(str1);
 	gets(str2);
 	gets(str3);
 	if(strcmp(str1,str2)>0) swap(str1,str2);
 	if(strcmp(str1,str3)>0) swap(str1,str3);
 	if(strcmp(str2,str3)>0) swap(str2,str3);
 	puts(str1);
 	puts(str2);
 	puts(str3);
  } */
  //����2���ַ����������Ĺ����Ӵ� 
/*void getcommon(char str1[50],char str2[50],char*str3)
{
	int len1=strlen(str1);
	int len2=strlen(str2);
	int i,j,k,max=0;
	int start=-1;
	for(i=0;i<len1;i++)
	{
		for(j=0;j<len2;j++)
		{
		if(str1[i]==str2[j])
		{
		for(k=0;str1[i+k]==str2[j+k];k++)
		if(max<k){max=k;start=i;}
	}
	 } 
}
   if(start==-1)str3="\0";
   else {memcpy(str3,&str1[start],max);
   str3[max]='\0';
   }}
int main()
{
 char str1[50],str2[50],str3[50];
 gets(str1);
 gets(str2);
 getcommon(str1,str2,str3);
 printf("%s",str3);
	
}*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
