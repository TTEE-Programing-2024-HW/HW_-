#include <stdio.h>
#include <conio.h>

int main() {
    int password = 2024;
    int input;
    int spaces;
    int i,j;
    int attempts = 0;
    char charInput;
    char c;
    char ch;

    
    printf("*                  \n");
    printf("**                 \n");
    printf("***                \n");
    printf("****               \n");
    printf("*****              \n");
    printf(" *****             \n");
    printf("  *****            \n");
    printf("   *****           \n");
    printf("    *****          \n");
    printf("     *****         \n");
    printf("      *****        \n");
    printf("       *****       \n");
    printf("        *****      \n");
    printf("         *****     \n");
    printf("          *****    \n");
    printf("           *****   \n");
    printf("            *****  \n");
    printf("             ***** \n");
    printf("              *****\n");
    printf("               ****\n");
    printf("                ***\n");
    printf("                 **\n");
    printf("                  *\n");
    printf("�п�J�K�X: \n");// �B�J1�G��J�K�X

    do {
        scanf("%d", &input);
        attempts++;

        if (input == password) {
            printf("�K�X���T!\n");
            break;
        } else {
            printf("�K�X���~,�٦�%d�����|\n",attempts);
        }

        if (attempts == 3) {
            printf("���ƥκ�,�{���Y�N����\n");
            return 0;
        }
    } while (1);

    while (1) {
        // �B�J2�G��ܥD���
        system("cls");
        // system("cls"); // Windows

        printf("--------------------------\n");
        printf("->  a. �e�X�����T����     \n");
        printf("->  b. ��ܭ��k��         \n");
        printf("->  c. ����               \n");
        printf("--------------------------\n");

        char choice;
        scanf(" %c", &choice);

        if (choice == 'a' || choice == 'A') {
            // �B�J3�G��J�r����ܪ����T����
            system("cls");
            // system("cls"); // Windows

            printf("�п�Ja��n�������r��:\n");
            scanf(" %c", &charInput);

            if (charInput < 'a' || charInput > 'n') {
                printf("��J���~,�п�Ja��n�������r��\n");
                getch();
                scanf(" %c", &charInput);
            }

            for ( i = 0; i < charInput - 'a' + 1; i++) {
                for ( j = charInput - 'a'; j > i; j--) {
                    printf(" ");
                }
                for ( ch = charInput -i; ch <= charInput; ch++) {
                    printf("%c", ch);
                }
                printf("\n");
            }

            printf("\n���U������H��^�D���\n");
            getch(); // ���ݨϥΪ̫��U���N��
        } else if (choice == 'b' || choice == 'B') {
            // �B�J4�G��J���n��ܭ��k��
            system("cls");
            // system("cls"); // Windows

            int n;
            printf("�п�J1��9���������:\n");
            scanf("%d", &n);

            if (n < 1 || n > 9) {
                printf("��J���~,�п�J1��9���������\n");
                getch();
                scanf("%d", &n);
            }

            
            for ( i = 1; i <= n; i++) {
                for ( j = 1; j <= n; j++) {
                    printf("%d*%d=%3d ",i,j, i * j);
                }
                printf("\n");
            }

            printf("\n���U������H��^�D���\n");
            getch(); // ���ݨϥΪ̫��U���N��
        } else if (choice == 'c' || choice == 'C') {
            // �B�J5�G�߰ݬO�_�~��
            system("cls");
            // system("cls"); // Windows

            printf("�O�_�n�~��{��? (y/n)\n");
            scanf(" %c", &charInput);

            if (charInput == 'y' || charInput == 'Y') {
                continue; // �^��D���
            } else if (charInput == 'n' || charInput == 'N') {
                printf("�����{��\n");
                break; // �����{��
            } else {
                printf("��J���~,�п�Jy��n\n");
                getch();
                continue;
            }
        } else {
            printf("��J���~,�п�Ja��b��c\n");
            getch();
        }
    }

    return 0;
}
