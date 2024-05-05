#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  // �ޤJ���Y�ɥH�ϥ� getch() ��ơA��{����Y���T��

// ��ƫŧi
void showTriangle(char c);
void printMultiplicationTable(int n);
int handleExitOption();
void handleTriangleOption();
void handleMultiplicationTableOption();

int main()
{
    int password = 2024; // �w�]���K�X
    int input;           // �Τ��J���K�X
    int attempt = 0;     // ���տ�J�K�X������
    int choice;
    const int max_attempts = 3; // �̤j���զ���

    // ��ܭӤH���檺�e��
    system("cls");
    printf("**************************************************\n");
    printf("*                �w��ϥΦw���t��                *\n");
    printf("*                 �Ш̷Ӵ��ܾާ@                 *\n");
    printf("*                                                *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
    printf("*                                                *\n");
	printf("+       H   H  EEEEE   L      L       OOO        *\n");
    printf("*       H   H  E       L      L      O   O       *\n");
    printf("*       HHHHH  EEEEE   L      L      O   O       *\n");
    printf("*       H   H  E       L      L      O   O       *\n");
    printf("*       H   H  EEEEE   LLLLL  LLLLL   OOO        *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
	printf("*                                                *\n");
	printf("**************************************************\n");
	
	while (attempt < max_attempts)
    {
        printf("�п�J�|��Ʀr���K�X�G");
        fflush(stdin);
        scanf("%d", &input);
        
        if (input == password)
        {
            while (1)
            {
                system("cls");
                printf(" -----------------------------------------\n");
                printf("|            a. �e�X�����T����            |\n");
                printf("|                                         |\n");
				printf("|             b. ��ܭ��k��               |\n");
                printf("|                                         |\n");
				printf("|                c. ����                  |\n");
                printf(" -----------------------------------------\n");
                
                printf("��JA�BB�BC�H�~��A�����j�p�g�G");
                choice = getche();

                switch (choice)
                {
                    case 'a':
                    case 'A':
                        handleTriangleOption();
                        break;
                        
                    case 'b':
                    case 'B':
                        handleMultiplicationTableOption();
                        break;
                        
                    case 'c':
                    case 'C':
                        if (handleExitOption() == 1)
                        {
                            return 0;  // �p�G��ܵ����A�h�X�{��
                        }
                        break;
                        
                    default:
                    	printf("\n");
                        printf("\n�L�Ī��ﶵ�I");
                        getch();
                        break;
                }
            }
        }
        else
        {
            attempt++;
            printf("\n�K�X���~�I�o�O�� %d �����աA�ٳ� %d �����|�C\n", attempt, max_attempts - attempt);
            
            if (attempt == max_attempts)
            {
                printf("\n�s��T���K�X���~�A�{���Y�N�����C");
                
                return 1; // �����{��
            }
        }
    }
    
    return 0;
}

void handleTriangleOption()
{
    char character;
    
    printf("\n");
    printf("\n�п�J�@�Ӧr���]a �� n�^�G");
    fflush(stdin);
    scanf(" %c", &character);
    
    if (character < 'a' || character > 'n')
    {
        printf("\n���~����J�I�Э��s��J�C");
        getch();  // ���ݥ��N��A����J
    }
    else
    {
        system("cls");
        showTriangle(character);
    }
    
    getch();  // ���ݥ��N��^��D���
}

void showTriangle(char c)
{
    int height = c - 'a' + 1;  // �p��T���Ϊ�����
    
    for (int row = 1; row <= height; row++)
    {
        // ���L�Ů�A����T���Ϊ��k��
        for (int space = 1; space <= height - row; space++)
        {
            printf(" ");
        }
        // ���L�q�r���}�l���J�r�����r��
        for (char col = c - row + 1; col <= c; col++)
        {
            printf("%c", col);
        }
        printf("\n");
    }
}

void handleMultiplicationTableOption()
{
    int n;
    
    printf("\n");
    printf("\n�п�J�@�Ӿ�ơ]1��9�^�G");
    fflush(stdin);
    scanf("%d", &n);
    
    if (n < 1 || n > 9)
    {
        printf("\n���~����J�I�п�J1��9��������ơC");
        getch();  // ���ݥ��N��A����J
    }
    else
    {
        system("cls");
        printMultiplicationTable(n);
    }
    
    getch();  // ���ݥ��N��^��D���
}

void printMultiplicationTable(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d��%d��%2d  ", i, j, i * j);
        }
        printf("\n");
    }
}

int handleExitOption()
{
    char choice;
    
    printf("\n");
    printf("\nContinue�H�]y/n�^");
    choice = getch();
    
    if (choice == 'y' || choice == 'Y')
    {
    	return 0;
    }
    else if (choice == 'n' || choice == 'N')
    {
    	printf("\n");
        printf("\n�{�������A�^��@�~�t�ΡC");
        
        return 1;
    }
    else
    {
    	printf("\n");
        printf("\n���~����J�I�п�J y �� n�A���s��J�C");
        getch();
        
        return 0;
    }
}

//�߱o�G

//�b�}�o�o�ӵ{�����L�{���A
//�ھǨ�p��Q�ΰ򥻪�����x��J/��X�A��{�P�Τ᤬�ʡC
//�z�L�ϥ� getch() �M getche() ��ơA
//�گ�������Τ᪺�Y�ɿ�J�A
//���إߥ椬�����ε{�Ǩӻ��O�D�`��Ϊ��ޯ�C

//���F���ɵ{�����w���ʡA
//�ڹ�{�F�@��²�檺�K�X�O�@����C
//�o���ڤF�Ѧb��j�����νd�򤤡A
//�p��B�z�M�O�@�ӷP��T�����n�ʡC
//���M�o�Ӿ����٫ܰ򥻡A
//�������ѤF�@�ӫܦn���ǲ߰�¦�C

//�b�o�ӵ{�����A
//�ڽm�ߤF�N���P���\��Ҷ��ơA
//�Ҧp�e�T���ΩM��ܭ��k���\��C
//�o���Ȩϵ{�����c��M���A
//�]�ϱo�C�ӳ�����e�����@�M�X�i�C
//�ǲߦp�󦳮Ħa��´�N�X�A
//�O�i���j�W�Ҷ}�o���@�ӭ��n�B�J�C

//�ڷN�Ѩ�A
//�}�n�����~�B�z�O����{�������i�֪��@�����C
//�b�o�ӵ{�����A
//�ڳB�z�F�@�ǰ򥻿�J���~�A
//�o���U��O�@�{���K�������T��J���z�Z�C
//�o���ڧ�[���x�p��b�Τ��J���~�ɵ������X�A
//�ëP�ϥΤ᭫�s��J�C

//�ϥ�conio.h�o�ӫD�зǮw���ڤF�Ѹ󥭥x�ݮe�ʪ����n�ʡC
//�o�O�@�Ӿǲ߾��|�A
//���ڷN�Ѩ쬰�F�ϵ{����[�q�ΡA
//�M��ζ}�o�i�󥭥x���ѨM��׬O���n���C
//�`���A
//�o�ӵ{�����ȴ����F�ڪ�C�y���s�{��O�A
//�]�[�`�F�ڹ�n��}�o���@�����䷧�����z�ѡA
//�p�Τ�椬�B�w���ʡB�Ҷ��Ƴ]�p�M���~�B�z�C
//�ڴ��ݱN�o�Ǹg�����Ψ쥼�ӧ���������ؤ��C
