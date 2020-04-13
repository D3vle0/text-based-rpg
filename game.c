#pragma warning (disable:4996)
#pragma warning (disable:4244)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#define P printf
#define S scanf
#define CLS system("cls");
#define PAUSE system("pause>nul");
#define WHITE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
#define YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
#define CYAN SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
#define GRAY SetConsoleTextAttribute(GetStdHandle( STD_OUTPUT_HANDLE ), 8 );
//#define CTRL(x) (#x[0]-'a'+1)

int main()
{
	int main_choice = 0, buy_choice = 0, random = 0, atk_choice = 0, currentWeaponDamage = 5, currentWeaponId = 0, money = 0, slimeHealth_1 = 3, atkPer = 0;
	int random1 = 0, slimekill = 0, goblinkill = 0, quest1 = 0, bossHealth = 10000, golemkill = 0, health = 0, boss_choice = 0;
	int bossClearStatus = 0;

	srand(time(NULL));
	while (1) {

		CLS
			WHITE
			P("1. 상점\n2. 야생\n3. 강화\n4. 도움말\n5. 퀘스트\n\n\n");
		P("현재 무기: ");
		YELLOW
			if (currentWeaponId == 0) {
				P("주먹");
			}
		if (currentWeaponId == 1) {
			P("나무 검");
		}
		if (currentWeaponId == 2) {
			P("돌 검");
		}
		if (currentWeaponId == 3) {
			P("대리석 검");
		}
		if (currentWeaponId == 4) {
			P("철 검");
		}
		if (currentWeaponId == 5) {
			P("아연 검");
		}
		if (currentWeaponId == 6) {
			P("금 검");
		}
		if (currentWeaponId == 7) {
			P("루비 검");
		}
		if (currentWeaponId == 8) {
			P("다이아 검");
		}
		if (currentWeaponId == 9) {
			P("백금 검");
		}
		if (currentWeaponId == 10) {
			P("티타늄 검");
		}
		if (currentWeaponId == 11) {
			P("타이탄 검");
		}
		WHITE
			P("\n현재 공격력: ");
		YELLOW
			P("%d\n", currentWeaponDamage);
		WHITE
			P("현재 돈: ");
		YELLOW
			P("%d\n\n", money);
		if (money >= 50000)
		{
			quest1 = 1;
		}
		if (quest1 == 1)
		{
			YELLOW
				P("1번 퀘스트 클리어!");
		}
		if (slimekill >= 70)
		{
			YELLOW
				P("2번 퀘스트 클리어!\n");
		}

		if (goblinkill >= 50)
		{
			YELLOW
				P("3번 퀘스트 클리어!\n");
		}

		if (golemkill >= 30)
		{
			YELLOW
				P("4번 퀘스트 클리어!\n");
		}
		CYAN
			P(">");
		WHITE
			S("%d", &main_choice);
		WHITE
			switch (main_choice)
		{
			case 1:
				CLS
					P("상점에 오신것을 환영합니다.\n\n현재돈: %d\n\n\n", money);
				P("1. 나무 검: %d\n2. 돌 검(나무 검 대미지 10이상 구매 가능): %d\n3. 대리석 검(돌 검 대미지 20이상 구매 가능): %d\n4. 철 검(대리석 검 대미지 50이상 구매 가능): %d\n5. 아연 검(철 검 대미지 65이상 구매 가능): %d\n6. 금 검(아연 검 대미지 90이상 구매 가능): %d\n7. 루비 검(금 검 대미지 100이상 구매 가능): %d\n8. 다이아 검(루비 검 대미지 140이상 구매 가능): %d\n9. 백금 검(돌 검 대미지 160이상 구매 가능): %d\n10. 티타늄 검(백금 검 대미지 200이상 구매 가능): %d\n11. 타이탄 검(돌 검 대미지 270이상 구매 가능): %d\n", 50, 200, 500, 2000, 5000, 7000, 15000, 30000, 40000, 70000, 100000);
				P("\n어떤 무기를 구매하시겠습니까?\n");
				CYAN
					P(">");
				WHITE
					S("%d", &buy_choice);
				WHITE
					if (buy_choice == 1) {
						if (money < 50) {
							P("돈이 부족합니다.\n");
							PAUSE
						}
						else if (currentWeaponId != 0) {
							P("구입 실패");
							PAUSE
						}
						else {
							money -= 50;
							currentWeaponId = 1;
							currentWeaponDamage = 7;
							P("구입 성공\n");
							PAUSE
						}
					}
				if (buy_choice == 2) {
					if (money < 200) {
						P("돈이 부족합니다.\n");
						PAUSE
					}
					else {
						if (currentWeaponId == 1 && currentWeaponDamage >= 10) {
							money -= 200;
							currentWeaponId = 2;
							currentWeaponDamage = 15;
							P("구입 성공\n");
							PAUSE
						}
						else if (currentWeaponId != 1) {
							P("구입 실패");
							PAUSE
						}
						else {
							P("구입 실패");
							PAUSE
						}
					}
				}
				if (buy_choice == 3) {
					if (money < 500) {
						P("돈이 부족합니다.\n");
						PAUSE
					}
					else {
						if (currentWeaponId == 2 && currentWeaponDamage >= 20) {
							money -= 500;
							currentWeaponId = 3;
							currentWeaponDamage = 40;
							P("구입 성공\n");
							PAUSE
						}
						else if (currentWeaponId != 2) {
							P("구입 실패");
							PAUSE
						}
						else {
							P("구입 실패");
							PAUSE
						}
					}
				}
				if (buy_choice == 4) {
					if (money < 2000) {
						P("돈이 부족합니다.\n");
						PAUSE
					}
					else {
						if (currentWeaponId == 3 && currentWeaponDamage >= 50) {
							money -= 2000;
							currentWeaponId = 4;
							currentWeaponDamage = 50;
							P("구입 성공\n");
							PAUSE
						}
						else if (currentWeaponId != 3) {
							P("구입 실패");
							PAUSE
						}
						else {
							P("구입 실패");
							PAUSE
						}
					}
				}
				if (buy_choice == 5) {
					if (money < 5000) {
						P("돈이 부족합니다.\n");
						PAUSE
					}
					else {
						if (currentWeaponId == 4 && currentWeaponDamage >= 65) {
							money -= 5000;
							currentWeaponId = 5;
							currentWeaponDamage = 70;
							P("구입 성공\n");
							PAUSE
						}
						else if (currentWeaponId != 4) {
							P("구입 실패");
							PAUSE
						}
						else {
							P("구입 실패");
							PAUSE
						}
					}
				}
				if (buy_choice == 6) {
					if (money < 7000) {
						P("돈이 부족합니다.\n");
						PAUSE
					}
					else {
						if (currentWeaponId == 5 && currentWeaponDamage >= 90) {
							money -= 7000;
							currentWeaponId = 6;
							currentWeaponDamage = 80;
							P("구입 성공\n");
							PAUSE
						}
						else if (currentWeaponId != 5) {
							P("구입 실패");
							PAUSE
						}
						else {
							P("구입 실패");
							PAUSE
						}
					}
				}
				if (buy_choice == 7) {
					if (money < 15000) {
						P("돈이 부족합니다.\n");
						PAUSE
					}
					else {
						if (currentWeaponId == 6 && currentWeaponDamage >= 100) {
							money -= 15000;
							currentWeaponId = 7;
							currentWeaponDamage = 100;
							P("구입 성공\n");
							PAUSE
						}
						else if (currentWeaponId != 6) {
							P("구입 실패");
							PAUSE
						}
						else {
							P("구입 실패");
							PAUSE
						}
					}
				}
				if (buy_choice == 8) {
					if (money < 30000) {
						P("돈이 부족합니다.\n");
						PAUSE
					}
					else {
						if (currentWeaponId == 7 && currentWeaponDamage >= 140) {
							money -= 30000;
							currentWeaponId = 8;
							currentWeaponDamage = 120;
							P("구입 성공\n");
							PAUSE
						}
						else if (currentWeaponId != 7) {
							P("구입 실패");
							PAUSE
						}
						else {
							P("구입 실패");
							PAUSE
						}
					}
				}
				if (buy_choice == 9) {
					if (money < 40000) {
						P("돈이 부족합니다.\n");
						PAUSE
					}
					else {
						if (currentWeaponId == 8 && currentWeaponDamage >= 160) {
							money -= 40000;
							currentWeaponId = 9;
							currentWeaponDamage = 150;
							P("구입 성공\n");
							PAUSE
						}
						else if (currentWeaponId != 8) {
							P("구입 실패");
							PAUSE
						}
						else {
							P("구입 실패");
							PAUSE
						}
					}
				}
				if (buy_choice == 10) {
					if (money < 70000) {
						P("돈이 부족합니다.\n");
						PAUSE
					}
					else {
						if (currentWeaponId == 9 && currentWeaponDamage >= 200) {
							money -= 70000;
							currentWeaponId = 10;
							currentWeaponDamage = 200;
							P("구입 성공\n");
							PAUSE
						}
						else if (currentWeaponId != 9) {
							P("구입 실패");
							PAUSE
						}
						else {
							P("구입 실패");
							PAUSE
						}
					}
				}
				if (buy_choice == 11) {
					if (money < 100000) {
						P("돈이 부족합니다.\n");
						PAUSE
					}
					else {
						if (currentWeaponId == 10 && currentWeaponDamage >= 270) {
							money -= 100000;
							currentWeaponId = 11;
							currentWeaponDamage = 300;
							P("구입 성공\n");
							PAUSE
								CLS
								WHITE
								P("모든 무기를 구매하였습니다! 축하합니다!\n이제 보스를 잡으러 갈 시간입니다.\n");
							PAUSE
								CLS
								YELLOW
								P("나: 어라? 여긴 어디지?");
							Sleep(2000);
							WHITE
								P("???: 이곳은 암흑의 세계. 너와 싸울 보스... 오늘날을 기다려 왔지.");
							Sleep(2000);
							YELLOW
								P("나: 보스? 그래봤자 얼마나 강하겠어 ㅋ");
							Sleep(2000);
							WHITE
								P("???: 안되겠군... 어서 처리하고 와라");
							Sleep(1000);
							P("이제 보스를 잡으러 갑니다.");
							CYAN
								P("파티원: 거기 잠깐!\n");
							Sleep(2000);
							P("파티원: 나랑 같이 보스 잡자.\n\n");
							Sleep(2000);
							WHITE
								P("사실 현재 무기 [타이탄 검] 에는 특별 능력이 있다.\n바로 [어둠의 혈흔] !\n");
							Sleep(2000);
							P("동작 입력창에서 키보드 3번을 누르면 1턴 동안 공격력을 10배로 증가시켜 30%% 확률로 크리티컬 대미지를 준다.\n\n");
							Sleep(2000);
							CYAN
								P("파티원: 내가 너 뒤에서 버프를 줄게.\n");
							WHITE
								P("아무 키나 눌러 전장에 진입합니다.");
							PAUSE
								while (bossClearStatus = 0) {
									CLS
										YELLOW
										P("내 체력: %d\n보스 체력: %d\n\n", health, bossHealth);
									WHITE
										P("1. 공격\n2. 치유\n3. [어둠의 혈흔]\n4. 상점");
									CYAN
										P(">");
									scanf("%d", &boss_choice);
									WHITE
										if (boss_choice == 1) {
											CLS
												P("보스에게 ");
											YELLOW
												P("%d", currentWeaponDamage);
											P("대미지를 주었습니다.\n");
											bossHealth -= currentWeaponDamage;
											random = (rand() % 8) + 1;
											P("%d코인 획득!", currentWeaponDamage*random);
											money = money + (currentWeaponDamage*random);
											random = (rand() % 100) + 1;
											if (random <= 95) {
												P("보스에게 공격을 받았습니다. 체력 10 감소!");
												health -= 5;
											}
											if (bossHealth == 0) {
												//여기부터
											}

										}
								}


						}
						else if (currentWeaponId != 10) {
							P("구입 실패");
							PAUSE
						}
						else {
							P("구입 실패");
							PAUSE
						}
					}
				}
				if (buy_choice < 1 || buy_choice > 11) {
					P("잘못된 값입니다.\n");
					PAUSE
				}
				break;
			case 2:
				CLS
					if (currentWeaponId == 0) {
						P("현재 무기: 주먹\n");
					}
					else if (currentWeaponId == 1) {
						P("현재 무기: 나무 검\n");
					}
					else if (currentWeaponId == 2) {
						P("현재 무기: 돌 검\n");
					}
					else if (currentWeaponId == 3) {
						P("현재 무기: 대리석 검\n");
					}
					else if (currentWeaponId == 4) {
						P("현재 무기: 철 검\n");
					}
					else if (currentWeaponId == 5) {
						P("현재 무기: 아연 검\n");
					}
					else if (currentWeaponId == 6) {
						P("현재 무기: 금 검\n");
					}
					else if (currentWeaponId == 7) {
						P("현재 무기: 루비 검\n");
					}
					else if (currentWeaponId == 8) {
						P("현재 무기: 다이아 검\n");
					}
					else if (currentWeaponId == 9) {
						P("현재 무기: 백금 검\n");
					}
					else if (currentWeaponId == 10) {
						P("현재 무기: 티타늄 검\n");
					}
					else if (currentWeaponId == 11) {
						P("현재 무기: 타이탄 검\n");
					}
					if (money >= 0) {
						if (currentWeaponId == 0) {
							P("슬라임이 나타났다(체력 3)!\n");
							P("슬라임을 죽였다! 10코인 획득!\n");
							money += 10;
							slimekill += 1;
							PAUSE
						}
						if (currentWeaponId == 1) {
							P("슬라임이 나타났다(체력 7)!\n");
							P("슬라임을 죽였다! 100코인 획득!\n");
							money += 100;
							slimekill += 1;
							PAUSE
						}
						if (currentWeaponId == 2) {
							P("슬라임이 나타났다(체력 15)!\n");
							P("슬라임을 죽였다! 150코인 획득!\n");
							money += 150;
							slimekill += 1;
							PAUSE
						}
						if (currentWeaponId == 3) {
							P("슬라임이 나타났다(체력 40)!\n");
							P("슬라임을 죽였다! 300코인 획득!\n");
							money += 300;
							slimekill += 1;
							PAUSE
						}
						if (currentWeaponId == 4) {
							P("슬라임이 나타났다(체력 50)!\n");
							P("슬라임을 죽였다! 500코인 획득!\n");
							money += 500;
							slimekill += 1;
							PAUSE
						}
						if (currentWeaponId == 5) {
							P("고블린이 나타났다!\n");
							random = (rand() % 10) + 1;
							if (random <= 9) {
								P("고블린을 죽였다! 800코인 획득!\n");
								money += 800;
								goblinkill += 1;
							}
							else {
								P("공격에 실패했습니다.\n");
								P("고블린의 개인 특성 발동!\n");
								P("100코인을 뺏겼습니다.\n");
								money -= 100;
							}
							PAUSE
						}
						if (currentWeaponId == 6) {
							P("고블린이 나타났다!\n");
							random = (rand() % 10) + 1;
							if (random <= 9) {
								P("고블린을 죽였다! 1000코인 획득!\n");
								money += 1000;
								goblinkill += 1;
							}
							else {
								P("공격에 실패했습니다.\n");
								P("고블린의 개인 특성 발동!\n");
								P("300코인을 뺏겼습니다.\n");
								money -= 300;
							}
							PAUSE
						}
						if (currentWeaponId == 7) {
							P("고블린이 나타났다!\n");
							random = (rand() % 10) + 1;
							if (random <= 8) {
								P("고블린을 죽였다! 1500코인 획득!\n");
								money += 1500;
								goblinkill += 1;
							}
							else {
								P("공격에 실패했습니다.\n");
								P("고블린의 개인 특성 발동!\n");
								P("500코인을 뺏겼습니다.\n");
								money -= 500;
							}
							PAUSE
						}
						if (currentWeaponId == 8) {
							P("골렘이 나타났다!\n");
							random = (rand() % 10) + 1;
							if (random <= 8) {
								P("골렘을 죽였다! 3000코인 획득!\n");
								money += 3000;
							}
							else {
								P("공격에 실패했습니다.\n");
								P("골렘의 개인 특성 발동!\n");
								P("700 코인을 뺏겼습니다.\n");
								money -= 700;
							}
							PAUSE
						}
						if (currentWeaponId == 9) {
							P("골렘이 나타났다!\n");
							random = (rand() % 10) + 1;
							if (random <= 7) {
								P("골렘을 죽였다! 5000코인 획득!\n");
								money += 5000;
							}
							else {
								P("공격에 실패했습니다.\n");
								P("골렘의 개인 특성 발동!\n");
								P("1000코인을 뺏겼습니다.\n");
								money -= 1000;
							}
							PAUSE
						}
						if (currentWeaponId == 10) {
							P("골렘이 나타났다!\n");
							random = (rand() % 10) + 1;
							if (random <= 7) {
								P("골렘이 죽였다! 8000코인 획득!\n");
								money += 8000;
							}
							else {
								P("공격에 실패했습니다.\n");
								P("골렘의 개인 특성 발동!\n");
								P("3000코인을 뺏겼습니다.\n");
								money -= 3000;
							}
							PAUSE
						}
					}
					if (money < 0)
					{
						printf("돈이 0원 미만입니다. 파산!!\n");
						PAUSE
							goto bye;
					}
					break;

			case 3:
				CLS
					if (currentWeaponId == 0) {
						P("주먹은 강화할 수 없습니다.\n");
						PAUSE
					}
					else {
						if (money < 500) {
							P("돈이 부족합니다.\n");
							PAUSE
						}
						else {
							random = rand() % 100;
							if (random < 60) {
								P("강화 성공. 500코인 소모.\n");
								money -= 500;
								currentWeaponDamage += 1;
								PAUSE
							}
							else {
								P("강화 실패. 500코인 소모.\n");
								money -= 500;
								PAUSE
							}
						}
					}
					break;

			case 4:
				CLS
					P("제작자: 중학생 개발자 리오\n");
				P("제작 기간: 2018.2.27~\n");
				P("===============\n");
				PAUSE
					P("플레이 해주셔서 감사합니다.");
				PAUSE
					break;

			case 5:
				CLS
					YELLOW
					P("퀘스트 목록\n\n");
				WHITE
					P("1. 5만 코인 모으기\n");
				P("2. 슬라임 70킬하기 (현재 %d킬)\n", slimekill);
				P("3. 고블린 50킬하기 (현재 %d킬)\n", goblinkill);
				P("4. 골렘 30킬하기 (현재 %d킬)\n", golemkill);
				PAUSE
					break;





			default:
				break;
		}
	}
bye:
	return 0;
}
