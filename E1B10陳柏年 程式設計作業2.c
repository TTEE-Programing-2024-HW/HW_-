#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	printf("                         * * *    * * *                                     \n");
	printf("                       *       * *      *                                   \n");
	printf("                     *          *        *                                  \n");
	printf("                    *                     *                                 \n");
	printf("                  *                        *                                \n");
	printf("                *                           *                               \n");
	printf("                *                            *                              \n");
	printf("                *                             *                             \n");
	printf("                 *                           *                              \n");
	printf("                  *                         *                               \n");
	printf("                   *                       *                                \n");
	printf("                    *                     *                                 \n");
	printf("                     *                   *                                  \n");
	printf("                      *                 *                                   \n");
	printf("                       *               *                                    \n");
	printf("                        *             *                                     \n");
	printf("                         *           *                                      \n");
	printf("                          *         *                                       \n");
	printf("                           *       *                                        \n");
	printf("                            *     *                                         \n");
	printf("                             *  *                                           \n");
	int z,i=0;

        while(i<3){                     //��while�j��B�]�w�j�����p��3�� 
    	    printf("��J4�ӼƦr���K�X:");
            scanf("%d",&z);
        if(z==2024){                    //�Y��J���Ʀr����2024 
    	printf("�i�J�B�J�G\n");         //�h�i�J�B�J�G 
    	system("pause");                // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N��
    	system("CLS");                  // �M���ù�
		break;}
		else {
		i++;}}
    	if(i==3&&z!=2024){              //�p�G�������Ƶ���3���B�Ʀr������2024 
    	printf("ĵ�i");                 //�h�X�{ĵ�i 
        return 0;}
        printf("--------------------\n");
        printf("||a.�e�X�����T����||\n");
        printf("||b.��ܭ��k��    ||\n");
        printf("||c.����          ||\n");
        printf("--------------------\n");
        
    char a,b,d;
        printf("��JA��a�M���ù�:");
        fflush(stdin);                  // ��input buffer�b�šA�`��bscanf()�e
        scanf("%c",&b);
        
        while(b!='A'&&b!='a'){          //��while�j��]�w��b������A��a 
           printf("��JA��a�M���ù�:");
           scanf(" %c",&b);}
        system("CLS");                  // �M���ù�   
        
        printf("��J�@��a��n���r��:");
        fflush(stdin);                  // ��input buffer�b�šA�`��bscanf()�e
        scanf("%c",&a);
        while(a<'a'||a>'n'){            //���J�ƭȤ��ba��n���d�򤧶� 
            printf("ĵ�i\n");
            printf("��J�@��a��n���r��:");
            scanf(" %c",&a);
		}
        for (char c=a; c >= 'a'; c--) {    // �q�����r���}�l�����a(�~���`��) 
        for (char ch = c; ch <=a; ch++) {  //���W��r��a(�����`��) 
            printf("%c", ch);
        }
        printf("\n");}
        system("pause");
        system("CLS");
    
        printf("--------------------\n");
        printf("||a.�e�X�����T����||\n");
        printf("||b.��ܭ��k��    ||\n");
        printf("||c.����          ||\n");
        printf("--------------------\n");
        
    char e;
        printf("��JB��b�M���ù�:");
        fflush(stdin);                      // ��input buffer�b�šA�`��bscanf()�e
        scanf("%c",&e);
        
        while(e!='B'&&e!='b'){              //��while�j��A��e������Ÿ�B��b 
        	printf("��JB��b�M���ù�:");    //���s��JB��b�M���ù� 
            scanf(" %c",&e);}
        system("CLS");                      // �M���ù� 
        fflush(stdin);                      // ��input buffer�b�šA�`��bscanf()�e 
        
    int f,j;
        printf("��J�@��1-9�����:");
        scanf("%d",&f);
        while(f<1||f>9){                    //��while�j��A���J���Ʀr���b1��9���� 
        	printf("ĵ�i\n");               //�X�{ĵ�i 
        	printf("��J�@��1-9�����:");   //���s��J�Ʀr�����J���Ʀr�b1��9���� 
            scanf(" %d",&f);}
        for(j=1;j<=f;j++)                   //��for�j����J���Ʀr,���Jn�h�|�X�{1��n�����k 
        	printf("%d*%d=%d\n",j,j,j*j);    
        system("pause");                         // �ù��e���Ȱ��A�õ��ݨϥΪ̫����N�� 
        system("CLS");                           //�M���ù� 
    
    char g,h;
        printf("��JC��c:");
        scanf(" %c",&g);
        while(g!='C'&&g!='c'){
        printf("��JC��c:");
        scanf(" %c",&g);}
        
        if(g=='C'||g=='c')                        //���J���Ʀr����C��c 
        printf("Continue?(y/n)�ݭn���s��J��\n");//�h�߰ݬO�_�n���s��J 
        printf("��JY��y��N��n:");
        scanf(" %c",&h);
        while(h!='Y'&&h!='y'&&h!='N'&&h!='n'){    //��while�j��A���J���Ʀr������Y��y��N��n 
		    printf("���~\n");                     //�h�X�{���~�T�� 
		    printf("��JY��y��N��n:");
            scanf(" %c",&h);}
        if(h=='Y'||h=='y'){                       //���J�Ʀr����Y��y 
            printf("--------------------\n");
            printf("||a.�e�X�����T����||\n");
            printf("||b.��ܭ��k��    ||\n");
            printf("||c.����          ||\n");
            printf("--------------------\n");}
        if(h=='N'||h=='n')                        //���J�Ʀr����N��n 
        return 0;                                 //�����{�� 
} 



	//�g�L�o�����g�{����A��ı�o�g�{���ݭn�D�`���ӤߥH�έ@�ߡA�]�����i����F�@�ӲŸ��άO�֤F�@
	//�ӪŮ泣���i�����{���X�{���P���˻��A�ҥH�o�����F100�檺�{���A�ڳ��O�j������5��N���{���]
	//�]�ݷ|���|�ʡA�o�ˤ~���|�X���C�b�o�����{�����A�]���Ψ�F�ܦhwhile�Bfor�j��A�H��if���Ϊk
	//�A�ӧ�ı�o�����������O��r���Ÿ��ܦ������T���Ϊ����ӨB�J�A�L�ݭn�Ψ������j��A�åB�]�n�]
	//�ܦh���P���r���A�]���b���Ӧa��ڤ]��s�F�\�[�~�����A���F�o�Ǥ��~�A�ڤ]��|�B�βM���ù��M
	//�ù��e���Ȱ����g�k�A�b�o�����g�{�������ȶ����ڧ�[�i�B�A�]���گ������mc�y���{�����g�C 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
