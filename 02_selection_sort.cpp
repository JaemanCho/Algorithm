#include<stdio.h>

//�I�𐮗� 
int main(void) {
	
	int i, j, min, index, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for(i=0; i<10; i++) {
		
		// �C�ӂ̈�ԏ��������� 
		min = 999;
		
		for(j=i; j<10; j++) {
			
			// �c��̐����ň�ԏ����� ������index���擾 
			if(min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		
		// �����[�v�̐�����temp�Ɋi�[ 
		temp = array[i];
		// ��ԏ����������������[�v�̐����̈ʒu�ɒu�� 
		array[i] = array[index];
		// �����[�v�̐�������ԏ������ԍ��̈ʒu�ɒu�� 
		array[index] = temp;
	}
	
	for(i=0; i<10; i++) {
		printf("%d", array[i]);
	}
	
	return 0;
}
