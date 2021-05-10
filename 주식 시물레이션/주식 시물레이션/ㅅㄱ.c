/*주식 시물레이션 */
 
//할일:뉴스 제작* ,정보*,주식판 제작*,개인 자산과 주식 출력*, 매도 매입 시스템, 공매도 시스템*, 전일 비교 시스템,세이브,도움,수수료
// 기본키 :0.도움,1.주식판(매도 매입) , 2.뉴스 , 3.정보 ,4. 공매도,5.내 자산 , 6. 다음날 (자동 세이브)
//간락한 시스템: Day별로 시장이 바뀜, 일 없으면 최대 5% 갑소 증가,
//종목 기복정보: 이름 , 기업크기 , 사원수 , 기업 자산(주식*1000~10000)
//뉴스: %50 확율로 뉴스 나옴, 큰 일이 진행시 과정 보기.
//개인 자산:돈, 주식 , 공매도로 인한 빚
//도움 : 공매도의 정의, 쓸 수있는 단어와 기능
// 수수료 : 1% ~ 0.00168449%
//다음날: 랜덤으로 더하고 빼기.
// 공매도: 공매도로 인한 빚은 단점생각하기.


//변수:종목이름{a},정보{a1},가격{a2},뉴스[28개]{a3}, 내 돈(1개){b1},주식(28개){b2}, 공매도(28개(각각) or 1개(모으는 것)){b3}
//수수료 (1개)[s],뉴스 목록(뉴스 개수 *2){1}[n], 기본키(1)[j], 매도 매수(1){m} [이름 매도 매입 수량], 도움 (1)[i] 상승값[ss],하락 [ss1];
#include<stdio.h>
#include<time.h>
#include<Windows.h>
int main(void) {
	srand(time(NULL));
	int j;//메뉴 이동키
	int i;//도움
	char i1;//도움에서 메뉴로 이동하는 키
	int b1 = 120000;//내 돈
	int ss;//주식 상습값소
	int ss1;//주식 하락값
	int helphelp = 0;//주식 이름 출력 도움
	int helphelp2 = 0;//주식 가격 출력 도움
	char name[20], riqos[20];//주식 매도 매입 도움용 변수//이름 ,개수 ,매도 매입
	int gagag = 0;//개수
	int b2[28] = {0,};//개수
	int day = 0;//날
	int a2[28] = { 54383,55886,17777,81915,72793,83335,50386,5492,41649,46421,7362,15027,13690,45059,22763,78926,65540,68426,14172,20736,50211,80368,67567,81429,70782,66530,7862,70123 };//주식 각각 가격
	char a[28][20] = { {"모아제약"},{"로아전력"},{"중추공학"},{"소마고교"},{"아리란화"},{"손화제약"},{"일클루전"},{"남화 건설"},{"사살라루"},{"일락트로"},{"남화마트"},{"일루건설"},{"화호라사"},{"수면협회"},{"삼상협회"},{"타이거즈"},{"유토피아"},{"아티아리"},{"시호이아"},{"테레콘트"},{"블마넷잡"},{"언이라화"},{"드자리블"},{"화환마트"},{"지니리아"},{"로디아블"},{"오브리그"},{"개인협회"} };//주식 각각 이름
	printf("\t\t\t***********주식 시물레이션에 오신걸 환명합니다**********\n\n\n\n\n해당 프로그램은 개발중이니 오류와 버그가 있습니다.\n\n\n엔딩 만들어라.\t 도움 2번 만들기 \n 도움 돌아가지 버그\n 아 존나 쉬고 싶다.\n 죈 졸립네, 오늘 자습에서 마늗것 게속 만들고, 노기다도 히고시ㅏㄹ\n공매도로 인한 빚은 단점생각하기.");
	//Sleep(5000);
메뉴:
	system("cls");
	printf("메뉴\t\tday %d\n\n",day);
	printf("0.도움\n1.주식판\n2.뉴스\n3.정보\n4.공매도\n5.내 자산\n6.다음날\n7.세이브\n\n이동 한 곳을 누르시오:");
	scanf_s("%d", &j);
	switch (j) {
	case 0: goto 도움; break;
	case 1: goto 주식판; break;
	case 5: goto 내_자산; break;
	case 6: goto 다음날; break;
	}
도움:
	system("cls");
	printf("도움\n\n\n1.기본 사용법\n2.키입력\n3.공매도란?\n\n이동할 곳을 입력하시오:");
	scanf_s("%d", &i);
	system("cls");
	switch (i) {
	case 1: printf("기본 사용법 \n\n\n이 게임은 정보 바탕으로 하는 주식 시뮬레이션 입니다.\n 자산을 관리하여 자본을 만드세요\n이 게임은 메뉴의 bay로 인해 가격이 달라집니다.\n수수료가 날마다 달라지지며 수수료를 주위하세요\n"); break;
	case 2: printf("키입력\n\n\n주식판 만들고 합시다.\n");
	case 3: printf("공매도란?\n\n\n공매도란 주식을 먼저 판매를 한 후 판매한 주식을 일정 기간안에 갚는 것을 말합니다.\n예)gsm주식을 3만원에 1를 팔고 다음날 gsm주식을 1를 갚는 것이다.\n");
	}
		printf("\n\n메뉴로 돌아가시겠습니까? (y,n): \n");
		scanf_s("%c",&i1);
		if (i1 == 'y') {
			goto 메뉴;
		}
		else if (i1 == 'n') {
			goto 도움;
		}
		else {
			printf("다시 입력해 주세요.\n");
		}
주식판:
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
	printf("\n구매할 주식을 입력하시오 (매입or매도 이름 개수 ):");
	scanf_s("%p %p %d",&riqos,&name,&gagag);
	if (riqos == "매도") {
		printf("gka");
		for (int a11 = 0; a11 < 28; a11++) {
			if (a[a11] == name) {
				if (b2[a11] < gagag) {
					printf("개수가 적습니다.\n 확인 후 다시 매도해 주시기 바랍니다.");
					Sleep(2000);
					goto 주식판;
				}
				b2[a11] -= gagag;
				b1 += gagag * a2[a11];
			}
		}
	}
	else if (riqos == "매입") {
		printf("gka");
		for (int a11 = 0; a11 < 28; a11++) {
			if (a[a11] == name) {
				if (b1 < gagag * a2[a11]) {
					printf("돈이 적습니다.\n 확인 후 다시 매수해 주시기 바랍니다.");
					Sleep(2000);
					goto 주식판;
				}
				b2[a11] += gagag;
				b1 -= gagag * a2[a11];
			}
		}
	}
		goto 주식판;
내_자산:
	system("cls");
	printf("내 자산\n\n\n\n현제 내 자산(돈):%d \n\n공매도 인한 빚: %d \n\n\n***내 주식***\n\n",b1,0000);
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
		printf("\n\n메뉴로 돌아가시겠습니까? (y,n): ");
		scanf_s("%c", &i1);
		if (i1 == 'y') {
			goto 메뉴;
		}
		else if (i1 == 'n') {
			goto 내_자산;
		}
		else {
			printf("다시 입력해 주세요.\n");
			Sleep(1);
			goto 내_자산;
		}
	
다음날:

	for (int change = 0; change < 28;change++ ) {
		ss = rand() % 5000;
		ss1 = rand() % 5000;
		a2[change] += ss;
		a2[change] -= ss1;
	}
	day++;
	for (int lkkke = 0; lkkke < 5; lkkke++) {
		system("cls");
		printf("다음날로 이동중입니다.\n\n%d초 뒤에 메뉴로 이동됩니다.",5-lkkke);
		Sleep(1000);
	}

	goto 메뉴;




	return 0;
}
