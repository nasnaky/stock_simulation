//#define _CRT_SECURE_NO_WARNINGS
/*�ֽ� �ù����̼� */
 
//����:���� ����* ,����*,�ֽ��� ����*,���� �ڻ�� �ֽ� ���*, �ŵ� ���� �ý���, ���ŵ� �ý���*, ���� �� �ý���,���̺�,����,������
// �⺻Ű :0.����,1.�ֽ���(�ŵ� ����) , 2.���� , 3.���� ,4. ���ŵ�,5.�� �ڻ� , 6. ������ (�ڵ� ���̺�)
//������ �ý���: Day���� ������ �ٲ�, �� ������ �ִ� 5% ���� ����,
//���� �⺹����: �̸� , ���ũ�� , ����� , ��� �ڻ�(�ֽ�*1000~10000)
//����: %50 Ȯ���� ���� ����, ū ���� ����� ���� ����.
//���� �ڻ�:��, �ֽ� , ���ŵ��� ���� ��
//���� : ���ŵ��� ����, �� ���ִ� �ܾ�� ���
// ������ : 1% ~ 0.00168449%
//������: �������� ���ϰ� ����.
// ���ŵ�: ���ŵ��� ���� ���� ���������ϱ�.�ſ� �Ҷ�(��� ��,�� ������ ����),
//����: ���赵 ���� ����(��ü 1�� �� ���� �󸶿� ���� ����,�������� �� 12%~19%,), ���� �����(�Ѵޱ��� 0.1%) , ����(�޸��� �ڵ����� ����) ,�⺻ �Ա� ��� , 


//���� == �� �������� ��� �ִ� �ֽ��� ������;

//����:�����̸�{a},����{a1},����{a2},����[28��]{a3}, �� ��(1��){b1},�ֽ�(28��){b2}, ���ŵ�(28��(����) or 1��(������ ��)){b3}
//������ (1��)[s],���� ���(���� ���� *2){1}[n],n1[28], �⺻Ű(1)[j], �ŵ� �ż�(1){m} [�̸� �ŵ� ���� ����], ���� (1)[i] ��°�[ss],�϶� [ss1];
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS


int main(void) {
	srand(time(NULL));
	char aoeh = "�ŵ�";
	char aodlq = "����";
	int j;//�޴� �̵�Ű
	int i;//����
	char i1;//���򿡼� �޴��� �̵��ϴ� Ű
	int b1 = 120000;//�� ��
	int ss;//�ֽ� �������
	int ss1;//�ֽ� �϶���
	int helphelp = 0;//�ֽ� �̸� ��� ����
	int helphelp2 = 0;//�ֽ� ���� ��� ����
	char name[20] , riqos[20];//�ֽ� �ŵ� ���� ����� ����//�̸� ,���� ,�ŵ� ����
	int gagag = 0;//����
	int b2[28] = {0,};//����
	int day = 0;//��
	int g = 0;//���ŵ�
	int n;//���� ����???
	int n1[28] = { 0, };//���� ����
	int a2[28] = { 54383,55886,17777,81915,72793,83335,50386,5492,41649,46421,7362,15027,13690,45059,22763,78926,65540,68426,14172,20736,50211,80368,67567,81429,70782,66530,7862,70123 };//�ֽ� ���� ����
	char a[28][20] = { {"�������"},{"�ξ�����"},{"���߰���"},{"�Ҹ���"},{"�Ƹ���ȭ"},{"��ȭ����"},{"��Ŭ����"},{"��ȭ �Ǽ�"},{"�����"},{"�϶�Ʈ��"},{"��ȭ��Ʈ"},{"�Ϸ�Ǽ�"},{"ȭȣ���"},{"������ȸ"},{"�����ȸ"},{"Ÿ�̰���"},{"�����Ǿ�"},{"��Ƽ�Ƹ�"},{"��ȣ�̾�"},{"�׷���Ʈ"},{"������"},{"���̶�ȭ"},{"���ڸ���"},{"ȭȯ��Ʈ"},{"���ϸ���"},{"�ε�ƺ�"},{"���긮��"},{"������ȸ"} };//�ֽ� ���� �̸�
	printf("\t\t\t***********�ֽ� �ù����̼ǿ� ���Ű� ȯ���մϴ�**********\n\n\n\n\n�ش� ���α׷��� �������̴� ������ ���װ� �ֽ��ϴ�.\n\n\n���� ������.\t ���� 2�� ����� \n ���� ���ư��� ����\n �� ���� ���� �ʹ�.\n �� ������, ���� �ڽ����� ���f�� �Լ� �����, ���ٵ� ����ä���\n���ŵ��� ���� ���� ���������ϱ�.\t�ֽ� �ż� ���� ��Ȯ�� �����\n���� �����");
	//Sleep(5000);
�޴�:
	system("cls");
	printf("�޴�\t\tday %d\n\n",day);
	printf("0.����\n1.�ֽ���\n2.����\n3.���ŵ�\n4.����\n5.�� �ڻ�\n6.������\n7.���̺�\n\n�̵� �� ���� �����ÿ�:");
	scanf("%d", &j);
	switch (j) {
	case 0: goto ����; break;//
	case 1: goto �ֽ���; break;
	case 2: goto ����; break;
	case 3: goto ���ŵ�; break;
	case 4: goto ����; break;
	case 5: goto ��_�ڻ�; break;//
	case 6: goto ������; break;//
	}
����:
	system("cls");
	printf("����\n\n\n1.�⺻ ����\n2.Ű�Է�\n3.���ŵ���?\n\n�̵��� ���� �Է��Ͻÿ�:");
	scanf("%d", &i);
	system("cls");
	switch (i) {
	case 1: printf("�⺻ ���� \n\n\n�� ������ ���� �������� �ϴ� �ֽ� �ùķ��̼� �Դϴ�.\n �ڻ��� �����Ͽ� �ں��� ���弼��\n�� ������ �޴��� bay�� ���� ������ �޶����ϴ�.\n�����ᰡ ������ �޶������� �����Ḧ �����ϼ���\n"); break;
	case 2: printf("Ű�Է�\n\n\n�ŵ�(�Ǹ�)����(����)�� �Էµ�\n��ĭ �پ ���� �Ǵ� �Ǹ� �Ұ��� �̸��� �Է��� ��\n��ĭ ���� ������ �ۼ��մϴ�.(�� ���α׷��� ������ �Ǹ����� �ʽ��ϴ�)\n");
	case 3: printf("���ŵ���?\n\n\n���ŵ��� �ֽ��� ���� �ǸŸ� �� �� �Ǹ��� �ֽ��� ���� �Ⱓ�ȿ� ���� ���� ���մϴ�.\n��)gsm�ֽ��� 3������ 1�� �Ȱ� ������ gsm�ֽ��� 1�� ���� ���̴�.\n");
	}
		printf("\n\n�޴��� ���ư��ðڽ��ϱ�? (y,n): ");
		scanf("%c", &i1);
		if (i1 == 'y') {
			goto �޴�;
		}
		else if (i1 == 'n') {
			goto ����;
		}
		else {
			printf("�ٽ� �Է��� �ּ���.\n");
			Sleep(0);
			goto ����;
		}
�ֽ���:
	system("cls");
	helphelp = 0;
	helphelp2 = 0;
	for (int nas = 0; nas < 5; nas++) {
		for (int nai = 0; nai < 6; nai++) {
			if (helphelp == 28) {
				continue;
			}
			for (int naky = 0; naky < 20; naky++) {
				printf("%c", a[helphelp][naky]);
			}
			printf("\t");
			helphelp++;
		}
		printf("\n\n");
		for (int sna = 0; sna < 6; sna++) {
			if (helphelp2 == 28) {
				continue;
			}
			printf("%d\t\t", a2[helphelp2]);
			helphelp2++;
		}
		printf("\n\n");
	}
	printf("\n������ �ֽ��� �Է��Ͻÿ� (����or�ŵ� �̸� ���� ):");
	scanf("%p %p %d",&riqos,&name,&gagag);
	if (riqos == "�ŵ�") {
		printf("gka");
		for (int a11 = 0; a11 < 28; a11++) {
			if (a[a11] == name[a11]) {
				if (b2[a11] < gagag) {
					printf("������ �����ϴ�.\n Ȯ�� �� �ٽ� �ŵ��� �ֽñ� �ٶ��ϴ�.");
					Sleep(2000);
					goto �ֽ���;
				}
				b2[a11] -= gagag;
				b1 += gagag * a2[a11];
			}
		}
	}
	else if (riqos == "����") {
		printf("gka");
		for (int a11 = 0; a11 < 28; a11++) {
			if (a[a11] == name) {
				if (b1 < gagag * a2[a11]) {
					printf("���� �����ϴ�.\n Ȯ�� �� �ٽ� �ż��� �ֽñ� �ٶ��ϴ�.");
					Sleep(2000);
					goto �ֽ���;
				}
				b2[a11] += gagag;
				b1 -= gagag * a2[a11];
			}
		}
	}
	printf("\n\n�޴��� ���ư��ðڽ��ϱ�? (y,n): ");
	scanf("%c", &i1);
	if (i1 == 'y') {
		goto �޴�;
	}
	else if (i1 == 'n') {
		goto �ֽ���;
	}
	else {
		printf("�ٽ� �Է��� �ּ���.\n");
		Sleep(1);
		goto �ֽ���;
	}
����:
	system("cls");
	helphelp = 0;
	for (int nas = 0; nas < 5; nas++) {
		for (int nai = 0; nai < 6; nai++) {
			if (helphelp == 28) {
				continue;
			}
			for (int naky = 0; naky < 20; naky++) {
				printf("%c", a[helphelp][naky]);
			}
			printf("\t");
			helphelp++;
		}
		printf("\n\n");
	}
	printf("\n�˰� ���� ������ �̸��� ���ÿ�.(�ٺ��� ���� ���� all�� �Է��Ͻÿ�):");
	scanf("%p", &name);
	if (name == "all") {
	
	}
	for (int a11 = 0; a11 < 28; a11++) {
		if (a[a11] == name) {

		}
	}
	printf("\n\n�޴��� ���ư��ðڽ��ϱ�? (y,n): ");
	scanf("%c", &i1);
	if (i1 == 'y') {
		goto �޴�;
	}
	else if (i1 == 'n') {
		goto ����;
	}
	else {
		printf("�ٽ� �Է��� �ּ���.\n");
		Sleep(1);
		goto ����;
	}
���ŵ�:
	system("cls");
	helphelp = 0;
	helphelp2 = 0;
	for (int nas = 0; nas < 5; nas++) {
		for (int nai = 0; nai < 6; nai++) {
			if (helphelp == 28) {
				continue;
			}
			for (int naky = 0; naky < 20; naky++) {
				printf("%c", a[helphelp][naky]);
			}
			printf("\t");
			helphelp++;
		}
		printf("\n\n");
		for (int sna = 0; sna < 6; sna++) {
			if (helphelp2 == 28) {
				continue;
			}
			printf("%d\t\t", a2[helphelp2]);
			helphelp2++;
		}
		printf("\n\n");
	}
	printf("\n�Ǹ��� �ֽ��� �Է��Ͻÿ�(�̸� ����):");
	scanf("%s %d", name, &gagag);
		for (int a11 = 0; a11 < 28; a11++) {
			if (a[a11] == name) {
				b1 += a2[a11] * gagag;
				g += a2[a11] * gagag;
				printf(" ���������� ���ŵ� �Ǿ����ϴ�.\n");
				for (int a9 = 0; a9 < 3; a9++) {
					printf("%d�� �� ���ŵ��� �̵��˴ϴ�.",3-a9);
				}
			}
		}
	printf("\n\n�޴��� ���ư��ðڽ��ϱ�? (y,n): ");
	scanf("%c", &i1);
	if (i1 == 'y') {
		goto �޴�;
	}
	else if (i1 == 'n') {
		goto ���ŵ�;
	}
	else {
		printf("�ٽ� �Է��� �ּ���.\n");
		Sleep(1);
		goto ���ŵ�;
	}
����:
	printf("�� : %d\n", b1);
	printf("\n\n�޴��� ���ư��ðڽ��ϱ�? (y,n): ");
	scanf("%c", &i1);
	if (i1 == 'y') {
		goto �޴�;
	}
	else if (i1 == 'n') {
		goto ����;
	}
	else {
		printf("�ٽ� �Է��� �ּ���.\n");
		Sleep(1);
		goto ����;
	}
��_�ڻ�:
	system("cls");
	printf("�� �ڻ�\n\n\n\n���� �� �ڻ�(��):%d \n\n���ŵ� ���� ��: %d \n\n\n***�� �ֽ�***\n\n",b1,g);
	helphelp = 0;
	helphelp2 = 0;
	for (int nas = 0; nas < 6; nas++) {
		for (int nai = 0; nai < 5; nai++) {
			if (helphelp == 28) {
				continue;
			}
			for (int naky = 0; naky < 20; naky++) {
				printf("%c", a[helphelp][naky]);
			}
			printf("\t%d\t",b2[helphelp]);
			helphelp++;
		}
		printf("\n\n");
	}
		printf("\n\n�޴��� ���ư��ðڽ��ϱ�? (y,n): ");
		scanf("%c", &i1);
		if (i1 == 'y') {
			goto �޴�;
		}
		else if (i1 == 'n') {
			goto ��_�ڻ�;
		}
		else {
			printf("\n\n�ٽ� �Է��� �ּ���.\n");
			Sleep(1);
			goto ��_�ڻ�;
		}
	
������:

	for (int change = 0; change < 28;change++ ) {
		ss = rand() % 5000;
		ss1 = rand() % 5000;
		a2[change] += ss;
		a2[change] -= ss1;
	}
	day++;
	for (int a12 = 0; a12 < 28; a12++) {
		n1[a12] = rand() % 225;
	}
	for (int a12 = 0; a12 < 28; a12++) {
		if (n1[a12] < 0 && n1[a12]> 150) {//����

		}
		else if (n1[a12] < 151 && n1[a12] >= 170) {//�ҷ� �϶�
			a2[a12] -= a2[a12] / 100 * 1;
		}
		else if (n1[a12] < 171 && n1[a12] >= 180) {//�ҷ� ���
			a2[a12] += a2[a12] / 100 * 1;
		}
		else if (n1[a12] < 181 && n1[a12]> 185) {// �߷� ���
			a2[a12] += a2[a12] / 100 * 10;
		}
		else if (n1[a12] < 186 && n1[a12] >= 200) {// �߷� ���
			a2[a12] += a2[a12] / 100 * 20;
		}
		else if (n1[a12] < 186 && n1[a12] >= 200) {//�߷� �϶�
			a2[a12] -= a2[a12] / 100 * 20;
		}
		else if (n1[a12] < 200 && n1[a12] >= 210) {//�뷮 ���
			a2[a12] += a2[a12] / 100 * 50;
		}
		else if (n1[a12] < 210 && n1[a12] >= 214) {//�뷮 �϶�
			a2[a12] -= a2[a12] / 100 * 50;
		}
		else if (n1[a12] < 214 && n1[a12] >= 215) {//�ʴ뷮 ���
			a2[a12] *= 2;
		}
	}
	for (int lkkke = 0; lkkke < 5; lkkke++) {
		system("cls");
		printf("�������� �̵����Դϴ�.\n\n%d�� �ڿ� �޴��� �̵��˴ϴ�.",5-lkkke);
		Sleep(1000);
	}

	goto �޴�;




	return 0;
}
