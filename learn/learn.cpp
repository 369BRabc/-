// 求最大公共子串

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char s1[100],s2[100],max[100];
	int i,j,k;
	int lens1,lens2;
	int maxlen=0;
	int maxpos=-1;
	printf("请输入字符串s1:");
	scanf("%s",&s1);
	//gets(s1);
	printf("请输入字符串s2:");
	scanf("%s",&s2);
	//gets(s2);
	lens1=strlen(s1);
	lens2=strlen(s2);
	for(i=0;i<lens1;i++)
	{
		for(j=0;j<lens2;j++)
		{
			if(s1[i]==s2[j])
			{//出现字符相同的情况
				for(k=1;(s1[i+k]==s2[j+k])&&(s1[i+k]!='\0');k++)
				{
					if(k>maxlen)
					{	maxlen=k;
						maxpos=i;
					}
				}
			}
		}
	}
	//千万注意等号和赋值号的区别
	if(maxpos==-1)
	{ //说明没有公共字符串
		max[0]='\0';
	}
	else
	{
		for(i=0;i<=maxlen;i++){
			max[i]=s1[maxpos+i];
		}
		max[maxlen+1]='\0';
	}
	printf("s1和s2最长公共子串为:%s\n",max);
	//puts(max);
  system("pause");
  return 0;
}