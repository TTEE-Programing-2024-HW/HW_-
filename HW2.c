#include<stdio.h>
#include<stdlib.h> 	
int main (void)
{	
	//�Ƶ{���ŧi
	void menu(void); //�D���e��
	void picture(void); //�ӤH����e�� 
	
	//�ܼƫŧi
	int count = 0,password = 2023 ;//�Ĥ@�D�Ϊ��p�Ƹ�K�X 
	char MENU;		//�D��檺��J�ܼ� 	
	char c,A,B;		//case A���ܼ� 
	int space;		//case A���Ů��ܼ� 
	int i,j,n;		// case B���ܼ� 
	char OPTION;	//case C���ܼ� 
	
	/*�{�����e�p�U*/ 
	picture();		//�I�s�Ƶ{���A��X�ӤH����e�� 
	
	while (count < 3) //�p�ƿ�J���� 
	{
        printf("�п�J�|�ӼƦr���K�X�G");
        scanf("%d",&password);
        count++;				//�p��+1 
        if (password==2023)		//�P�_�K�X 
		{
            printf("��J���T�I�w��~\n");
            break;
        } 
		else 
		{
	        printf("�K�X���~�A�w��J: %d ���C\n", count);
            if (count == 3) 
			{
        		printf("��J�w�s����~�T���A�n�J�����I\n");
      		  printf("%c", '\a');					//��Xĵ�i�n�T 
				return 0;
    		}
    	}
    }
//_________________________________�H�W���Ĥ@�D	
	system("CLS");               // �M���ù�

	while(1)//���ư��� 
	{
		menu();//�l��Ƶ{�� �L�X�D��� 
		printf("    �п�J�Q���檺�ﶵ: ");
		fflush(stdin);
		scanf("%c",&MENU);
//_________________________________�H�W���ĤG�D	
		
		switch(MENU)	//���(�h����� ) 
		{
			case 'a':
			case 'A':
				system("CLS"); // �M���ù�
				do //do- while�j�� 
				{
					printf("    �п�J�@�ӡ�a���졥n�����r��: ");		
					fflush(stdin); 					// ��input buffer �b�šA�`��bscanf()�e;
					scanf("%c",&c);
					if(c < 'a' || c > 'n')				 
 		  		    {
 		  		    	printf("��J���~!�Э��s��J~\n");	//�p�G�����A�N�n���@�Ӵ��ܦr�y�i����J�����C 
					}
				}
				while(c < 'a' || c > 'n');		//�P�_��J�ȬO�_�ba~n�����A�O���ܩ��U���A���O���ܦ^��do�U��A���@�� 
				for(A= c ; A>='a' ;A-- )	 	//�j��(A�s�J����J���ȡA�p�GA�j�󵥩�'a'�A��A--) 
				{
					for (space ='a' ; space <A ; space++)//����X�i�H�a�S����ƦC�A�[�W�A���Ů� 
					{
            			printf(" ");
        			}
					for( B = A ; B <= c ; B++ )//��X�ɥH�ɾ��ƦC 
					{
						printf("%c",B);			
					}
					printf("\n");		
				}
    	    	getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�			
				break;
//_________________________________�H�W���ĤT�D					
			case 'b':
			case 'B':
				system("cls"); // �M���ù�
				do//do-while�j�� 
				{				
 	  	    	 	printf("�п�J�@��1��9�����n�G");
 	 	     	 	fflush(stdin); 					// ��input buffer �b�šA�`��bscanf()�e;
 	  			    scanf("%d", &n);
 	  			    if(n < 1 || n > 9)		//�p�G�����A�N�n���@�Ӵ��ܦr�y�i����J�����C 
 	 	 		    {
 	 	 		    	printf("��J���~!�Э��s��J~\n");	
					}
    			}
    	   		while(n < 1 || n > 9);//�P�_��J�ȬO�_�b 1~9 ���� �A�S���N�����A���N���U�� 
     	  		printf("���k��G\n");
      	  		for (i = 1; i <= n; i++) 
						{
      			      	for (j = 1; j <= n; j++) 
						{
      			          printf("  %d * %d = %2d  ",i,j, i * j);//�O�d�A���Ŷ����Q�ƪ� 
      			      	}
      			     	printf("\n");
       	 		}
        		getch();						// �����N��M�� 
				system("CLS"); 					// �M���ù�
				break;
//_________________________________�H�W���ĥ|�D	
			case 'c':
			case 'C':
				do//do-while�j�� 
				{
					printf("�аݬO�_�n�~�����{��? [�O] �п�J(Y�By)�A[�_] �п�J(N�Bn) :\n"); 
					fflush(stdin);
					scanf("%c",&OPTION);
					if(OPTION=='y'||OPTION=='Y')		//�p�G��JY�άOy 
					{
						getch();						// �����N��M�� 
						system("CLS"); 					// �M���ù�
						break;							//���Xcase 
					}
					else if(OPTION=='n'||OPTION=='N')	//�p�G��JN�άOn 
					{
						return 0;//�����{�� 
					}
					else //if( (OPTION!='y'||OPTION!='Y') || (OPTION!='n'||OPTION!='N') )
					{
					 	printf("��J���~\n");//�����O�N�X�{���ܦr�y 
					}
				}
				while( (OPTION!='y'||OPTION!='Y') || (OPTION!='n'||OPTION!='N') );//���J������ { Y,y,N,n }�N�^��do�A���@�� 
		}
	}
	system("PAUSE");
	return 0;
//_________________________________�H�W���Ĥ��D	
}
/***************�H�U�O�Ƶ{��********************/ 
void picture(void)//�ӤH�ƭ������e��X 
{
	printf(" 																	      \n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *   \n");
	printf(" 																	      \n");
	printf(" 																	      \n");
	printf("    &    ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  +   &      \n");
	printf("   &     +  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++    &     \n");
	printf("  $      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     &    \n");
	printf("   &                                                                &     \n");
    printf("    $     EEEEEEE   3333        A          555555     00000        &      \n");
	printf("   &      EE            3      A A        55         00   00        &     \n");
	printf("  $       EEEEEE    3333      A   A      5555555    00   00          &    \n");
	printf("   &      EE            3    AA A AA         55    00   00          &     \n");
	printf("    $     EEEEEEE   3333    AA  �@ AA   555555      00000          &      \n");
	printf("   &                                                                &     \n");
	printf("  $      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     &    \n");
	printf("   &     ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  +    &     \n");
	printf("    &    +  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++  ++++   &      \n");
	printf("    																      \n");
	printf("   																	      \n");
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *   \n");
	printf(" 																	      \n");
	return;
}
/*____________________________________________*/ 
void menu(void)//��X�D��檺�Ϫ� 
{
	printf("\n");
	printf("\n");
	printf("          __________________________________ \n");
	printf("         |                                  |\n");
	printf("         |    *****                  *      |\n");/*�ù��X�{�D���A*/ 
	printf("         |     ***  E3A 50  ���R��  ***     |\n");
	printf("         |      *                  *****    |\n");
	printf("         |__________________________________|\n");
	printf("         |                                  |\n");
	printf("         |      *        MENU        *      |\n");
	printf("         |                                  |\n");
	printf("         |         a. �e�X�����T����        |\n");
	printf("         |         b. ��ܭ��k��            |\n");
	printf("         |         c. ����                  |\n");
	printf("         |                                  |\n");
	printf("         |                                  |\n");
	printf("         |__________________________________|\n");
	return;
}
