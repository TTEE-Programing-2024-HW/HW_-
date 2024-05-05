#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b=0,c,d,f,i,j,k;
	char g,e,h;
	printf("設計你自己的封面\n");
	printf("--------/ \__--\n");
	printf("-------(    @\___--\n");
	printf("-------/         O--\n");
	printf("------/   (_____/--\n");
	printf("-----/_____/   U--\n");
	printf("----/        \  /--\n");
	printf("---/__________\--\n");
	printf("I'm E1B 43 Wang You Yu\n");
	printf("-I'm E1B 43 Wang You Yu-\n");
	printf("--I'm E1B 43 Wang You Yu--\n");
	printf("---I'm E1B 43 Wang You Yu---\n");
	printf("----/\_/\----------------\n");
	printf("---( o.o )-----------------\n");
	printf("----> ^ <------------------\n");
	printf("---Wang You Yu-----\n");
	printf("----Wang You Yu-----\n");
	printf("-----Wang You Yu-----\n");
	printf("-----------------/\_/\-------\n");
	printf("----------------( o.o )------\n");
	printf("-----------------> ^ <-------\n");
	//顯示個人風格畫面
	while(1)//迴圈 (重複)1=true 
{
	printf("輸入四位數字");
	scanf("%d",&a);
	if (a==2022)
{
	break;
} 
    else
{
 	printf("錯誤\n");
 	b++;	
}
	if(b==3)
	return 0;
}
system("PAUSE"); //暫停程式
	while(1) 
{
	system("CLS"); //清除畫面
	printf("| a.畫出n階直角三角形 |\n");
	printf("| b.顯示九九乘法表    |\n");
	printf("| c.結束              |\n");
	printf("請輸入一個字元\n");
	fflush(stdin);
		scanf("%s",&c);
		switch(c)
		{
			case 'a'://n階直角三角形 
			case 'A':
		 	   while(1)
				{
					system("CLS");
				    printf("請輸入一個'a'到'n'的字元\n");	
				    fflush(stdin);
				    scanf("%c",&e);
					system("CLS");
				    while(1)
					{
						if(e>='a'&&e<='n')
						{
							for(i=e;i>='a';i--)
							{
								for(j=i;j>='a'+1;j--)
								{
									printf(" ");
								}
								for(k=i;k<=e;k++)
								printf("%c",k);
								printf("\n");
							}
							system("pause"); 
							break;
					    }
		         		else
						printf("錯誤\n");
						system("pause"); 
				  	  	break;
				    }
				    break;
				}
				break;
			case 'b'://九九乘法表
			case 'B':
				system("CLS");
				while(1)
				{
					starts:
					system("CLS");
					printf("請輸入一個1至9的整數\n");	
					fflush(stdin);
					scanf("%d",&d);
					if(d>=1&&d<=9)
					{
						for(f=1;f<=d;f++)
						{
							for(g=1;g<=d;g++)
							{
							printf("%d*%d=%2d ",f,g,f*g );
							}
							printf("\n");
						}
						system("pause"); 
					    break;
					}
					else
					{
						printf("錯誤\n");
						system("pause");
						goto starts;	
					}
					
				}
				break;
			case 'c'://結束 
			case 'C':
				system("CLS");
				while(1)
				{
					start:
					system("CLS");
					printf("Continue? (y/n)\n");	
					fflush(stdin);
					scanf("%c",&h);
					switch(h)
					{
						case 'y':
						case 'Y':
							system("pause");
							break;
						case 'n':
						case 'N':
							system("pause");
							return 0;
						default:
							printf("錯誤\n");
							system("pause");
							goto start;	
					}
					break;	
				} 
				break;
		}
	}
}
//心得:這次的作業迴圈相較於之前的更加複雜，我也體會到排版的重要性，也間接複習到前幾章的內容。 
