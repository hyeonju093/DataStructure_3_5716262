#include <stdio.h>
#include <string.h>

void changeString(char* str) {
	int i = 0;

	//ASCII ���� �̿��� �빮��, �ҹ��� ��ȯ
	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;	//�빮�ڴ� ASCII ���� 32�� ���� �ҹ��ڷ� ��ȯ
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;	//�ҹ��ڴ� ASCII ���� 32�� �� �빮�ڷ� ��ȯ
		}
		i++;	//�빮�ڳ� �ҹ��ڰ� �ƴ� ���ڵ��� �״��
	}
}

int main() {
	char str[100];

	printf("���ڿ��� �Է��ϼ��� : ");
	fgets(str, sizeof(str), stdin);

	//���๮�� ����
	if (str[strlen(str) - 1] == '\n') {
		str[strlen(str) - 1] = '\0';
	}

	int len = strlen(str);

	changeString(str);

	printf("���ڿ��� ���� : %d\n", len);
	printf("��ȯ�� ���ڿ� : %s\n", str);

	return 0;
}