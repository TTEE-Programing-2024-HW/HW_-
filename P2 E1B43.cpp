#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b=0,c,d,f,i,j,k;
	char g,e,h;
	printf("�]�p�A�ۤv���ʭ�\n");
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
	//��ܭӤH����e��
	while(1)//�j�� (����)1=true 
{
	printf("��J�|��Ʀr");
	scanf("%d",&a);
	if (a==2022)
{
	break;
} 
    else
{
 	printf("���~\n");
 	b++;	
}
	if(b==3)
	return 0;
}
system("PAUSE"); //�Ȱ��{��
	while(1) 
{
	system("CLS"); //�M���e��
	printf("| a.�e�Xn�������T���� |\n");
	printf("| b.��ܤE�E���k��    |\n");
	printf("| c.����              |\n");
	printf("�п�J�@�Ӧr��\n");
	fflush(stdin);
		scanf("%s",&c);
		switch(c)
		{
			case 'a'://n�������T���� 
			case 'A':
		 	   while(1)
				{
					system("CLS");
				    printf("�п�J�@��'a'��'n'���r��\n");	
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
						printf("���~\n");
						system("pause"); 
				  	  	break;
				    }
				    break;
				}
				break;
			case 'b'://�E�E���k��
			case 'B':
				system("CLS");
				while(1)
				{
					starts:
					system("CLS");
					printf("�п�J�@��1��9�����\n");	
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
						printf("���~\n");
						system("pause");
						goto starts;	
					}
					
				}
				break;
			case 'c'://���� 
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
							printf("���~\n");
							system("pause");
							goto start;	
					}
					break;	
				} 
				break;
		}
	}
}
//�߱o:�o�����@�~�j��۸��󤧫e����[�����A�ڤ]��|��ƪ������n�ʡA�]�����Ʋߨ�e�X�������e�C 
