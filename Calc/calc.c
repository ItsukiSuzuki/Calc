/* 2013.1.14　鈴木斎幹 */
/* 計算プログラム */

#include <stdio.h>
int add(int, int);
int sub(int, int);
int mult(int, int);
int divi(int, int);

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
			r = sub(x, y);	/* 減算処理へ */
			break;
		}else if (i == 3) {
			r = mult(x, y);	/* 乗算処理へ */
			break;
		}else if (i == 4) {
			r = divi(x, y);  /* 除算処理へ */
			break;
		}else {
			printf("エラー:指定された値が間違っています もう一度入力して下さい\n");	/* エラー:1～4以外が入力された */
		}																			/* もう一度入力をさせる */
	}
	printf("\n");
	printf("処理結果：\n");			/* 結果出力 */
	printf("%d %s %d ＝ %dです\n", x, keisan[i-1], y, r);	
}

int add(int x, int y) {				/* 加算処理 */
	int result;
	result = x + y;
	return result;
}

int sub(int x, int y) {				/* 減算処理 */
	int result;
	result = x - y;
	return result;
}

int mult(int x, int y) {			/* 乗算処理 */
	int result;
	result = x * y;
	return result;
}

int divi(int x, int y) {			/* 除算処理 */
	int result;
	result = x / y;
	return result;
}