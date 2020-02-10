#include<stdio.h>

//選択整列 
int main(void) {
	
	int i, j, min, index, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for(i=0; i<10; i++) {
		
		// 任意の一番小さい数字 
		min = 999;
		
		for(j=i; j<10; j++) {
			
			// 残りの数字で一番小さい 数字のindexを取得 
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		
		// 現ループの数字をtempに格納 
		temp = array[i];
		// 一番小さい数字を現ループの数字の位置に置く 
		array[i] = array[index];
		// 現ループの数字を一番小さい番号の位置に置く 
		array[index] = temp;
	}
	
	for(i=0; i<10; i++) {
		printf("%d", array[i]);
	}
	
	return 0;
}
