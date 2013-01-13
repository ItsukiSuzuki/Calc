﻿/* 2013.1.14　鈴木斎幹 */
/* 計算プログラム */

#include <stdio.h>
#include <stdlib.h>
int add(int, int);

void main(void){
	int x, y, i, r;
	char keisan[4][4] ={"＋","－","×","÷"};

	printf("1つ目の値を入力してください：");	/* 値を入力 */
	scanf("%d", &x);
	printf("2つ目の値を入力してください：");
	scanf("%d", &y);

	while (1) {			/* 1～4のときは処理を抜け出す */
		printf("番号を指定してください：(1.加算 2.減算 3.乗算 4.除算)");
		scanf("%d", &i);
		if (i == 1) {						
			r = add(x, y);	/* 加算処理へ */
			break;
		}else if (i == 2) {
			printf("減算処理は作られていません\n");
			exit(1);
		}else if (i == 3) {
			printf("乗算処理は作られていません\n");
			exit(1);
		}else if (i == 4) {
			printf("除算処理は作られていません\n");
			exit(1);
		}else {
			printf("エラー:指定された値が間違っています もう一度入力して下さい\n");	/* エラー:1～4以外が入力された */
		}																			/* もう一度入力をさせる */
	}
	printf("\n");
	printf("処理結果：\n");			/* 結果出力 */
	printf("%d %s %d ＝ %dです\n", x, keisan[i-1], y, r);	
}

int add(int x, int y) {				/* 加算処理 */
	int sum;
	sum = x + y;
	return sum;
}