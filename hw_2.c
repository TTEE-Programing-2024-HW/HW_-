#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	/*1. �ù��W�X�{�ӤH���檺�e��(�ܤ�20��)�A�ín�D�ϥΪ̿�J4�ӼƦr���K�X(�K�X�ȹw�]��2024)�C
	�Y��J���T�A�h�i�J�B�J2�C�Y�s����T���A�h���ĵ�i�T���õ����{���C�Цb�e���W��ܱK�X�ȥH�K�ˬd�C*/ 
	puts("GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG");  /*�L�X�a���ӤH���檺�e��*/ 
	puts("GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG");
	
	puts("UUU                                                                                   AAA");
	puts("UUU                                                                                   AAA");
	puts("UUU                                                                                   AAA");
	puts("UUU                                                                                   AAA");
	puts("UUU     eeeeeeeee        1111       bbbbbbbb          5555555         00000000        AAA");
	puts("UUU     ee              11111       b       b         55              0      0        AAA");
	puts("UUU     ee             111111       b        b        55              0      0        AAA");
	puts("UUU     ee            1111111       b       b         55              0      0        AAA");
	puts("UUU     eeeeeeeee         111       bbbbbbbb          5555555         0      0        AAA");
	puts("UUU     ee                111       b       b              55         0      0        AAA");
	puts("UUU     ee                111       b        b             55         0      0        AAA");
	puts("UUU     ee                111       b       b              55         0      0        AAA");
	puts("UUU     eeeeeeeee      11111111     bbbbbbbb          5555555         00000000        AAA");
	puts("UUU                                                                                   AAA");
	puts("UUU                                                                                   AAA");
	puts("UUU                                                                                   AAA");
	
	puts("NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
	puts("NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN");
	system("PAUSE");  /*�Ȱ��e�� ���ϥΪ̫����N��*/ 
	system("CLS");  /*�M���ù�*/ 
	 
	int password,i; /*�ŧi�ܼ�*/ 
	for(i=0;i<=3;i++)
	{
		printf("�п�J�K�X:");
		scanf("%d",&password); /*Ū����J�K�X*/ 
		if(password==2024)     /*if-else����ԭz*/ 
		{
			printf("�K�X���T\n");
			break;    /*���X�j��*/ 
		}
		else
		{
			printf("���~,�Э��s��J\n");
			if(i==2){
				printf("���~�L�h,�����{��\n");
				return 0;
			}
		}
	}
	system("pause");     /*�Ȱ��e�� ���ϥΪ̫����N��*/ 
	system("CLS");        /*�M���ù�*/ 
	
	/*2.�M���ù��A�ù��X�{�D���A�p�U�ҥ�:(�i�ۦ�]�p�ӤH���檺���) */
	while(1){
	puts("----E----1----B----50----");     /*�L�X�D���*/ 
	puts(" |  a.+-*�e�X�����T���� *-+ | ");
	puts(" |  b.+-*��ܭ��k��  *-+ | ");
	puts(" |  c.+-*����           *-+ | ");
	puts(" --G--U--A--N--C--H--E--N--   ");
	fflush(stdin);    
	
	/*3. �ϥΪ̭Y��J��A���Ρ�a���A�h�M���ù��A�ín�D��J�@�ӡ�a���졥n�����r���C
	���ۮھڿ�J�r����{�@�����T���ΡA�Ҧp��J����c���A�h�X�{�k�ϡC�ϥΪ̫��U������(�i��getch()���)�h�M���ù��A�æ^��D���C
	�Y��J�r�����b��a���ܡ�n���϶��A�ݥX�{ĵ�i�T���ín�D���s��J�C*/
	
	int w,z,n,num,g,h;     /*�ŧi�ܼ�*/ 
	char ch,i,j,b;        /*�ŧi�ܼ�*/
	printf("��J�@�Ӧr��:");
	fflush(stdin);    /*��input�b�šA�`��bscanf()�e��*/ 
	scanf("%c",&b);
	switch(b)         /*switch����P�_*/ 
	{
		case'A':
		case'a': 
		
			system("CLS");
			printf("��J�@��a��n���r��:");
			scanf("%c",&w);  /*Ū����J���r��*/ 
			if(w<'a'||w>'n'){
				printf("��J���~,�ЦA��J�@��:\n");
				scanf("%c",&w);
				system("CLS");
				
			}
			else{
				for(i=b;i>='a';i--){   /*�qi�v�������a*/ 
					for(j=i-'a';j>0;j--)
					printf(" "); /*�椤�����J�Ů�*/ 
				}
				for(j=i;j<=b;j++)
				{
					printf("%c",j);
				}
				printf("\n");
			}
			system("CLS");  /*�M���ù�*/ 
			break;
			
			/*4.�ϥΪ̭Y��J��B���Ρ�b���A�n�D�ϥΪ̿�J�@��1��9�����n�A���۲���1*1��n*n�����k��C
			���ɨϥΪ̫��U������(�i��getch()���)�h�M���ù��A�æ^��D���C�Yn���b1��9�A�ݥX�{ĵ�i�T���ín�D���s��J�C
			�Ъ`�N��X���ƪ��ȥ�����C*/
			
			case'B':
			case'b':
			
			system("CLS");
			printf("��J�@��1��9�����:");
			scanf("%d",&num);  /*Ū����J�����*/ 
			while(num<1|| num>9){
			printf("��J���~,�ЦA��J�@��\n");
			printf("��J�@��1��9�����:");	
			scanf("%d",&num); 
			}
			for(g=1;g<=num;g++)
			{
				for(h=1;h<=g;h++){    /*�L�X���k��*/ 
					printf("%d*%d=%d",g,h,g*h);
					printf("\n");
				}
			}
			getch();
			system("CLS");
			break;
			
			/*5.�ϥΪ̭Y��J��C���Ρ�c���A�b�ù��W��X��Continue? (y/n)���߰ݬO�n���s��J�H
			�p�G�ϥΪ̿�J��Y���Ρ�y��,�h�^��2;�p�G�ϥΪ̿�J���O��N���Ρ�n���C
			�h�����{���^��@�~�t�ΡC�Y�O��L��A�h�X�{���~�T���ín�D���s��J�C*/
			
			case'C':
			case'c':
			
			system("CLS");
			printf("Continue?(y/n)\n");
			while(1){
					fflush(stdin);  /*��input�b�šA�`��bscanf()�e��*/
			scanf("%c",&ch);
			if(ch=='Y'||ch=='y')   /*if-else����P�_*/ 
			{
				break ;      /*�^��D���*/ 
			}
		if(ch=='N'||ch=='n')
			{
				printf("�{������\n");
				return 0 ;   /*�����{��*/ 
			}
			else 
			{
				printf("���~\n");
				printf("�Э��s��J:");
				continue ;
			}
			}
		    
			
		}
	}
	}
	
	/*�o���������_�W���ӻ��x���\�h�A �A�[�W�S�n�ϥ�githubú��A�Τ@�ӧ������ͪ��F���ڨӻ��]�O�@�j�D�ԡC*/
	/*�n�b���U�е����v�����ѥH�ΦP�Ǫ����U�A�o���~����j�j�����o���@�~�C*/ 
	/* ���L�׬O�{���άOgithub�A���O���U��ڭ̥��ӧ�u�@���n�٦�A�ڤ]�Ʊ�b�o�X�����@�~��������x���A�B��T��x���C 
	/*�g�L�o���p���}�����D�ԫ�A�ڧƱ椧���g�{�������o������C*/ 
  
	
