#include <stdio.h>
#include <string.h>

void changeString(char* str) {
	int i = 0;

	//ASCII 값을 이용해 대문자, 소문자 변환
	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;	//대문자는 ASCII 값에 32를 더해 소문자료 변환
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;	//소문자는 ASCII 값에 32를 빼 대문자로 변환
		}
		i++;	//대문자나 소문자가 아닌 문자들은 그대로
	}
}

int main() {
	char str[100];

	printf("문자열을 입력하세요 : ");
	fgets(str, sizeof(str), stdin);

	//개행문자 제거
	if (str[strlen(str) - 1] == '\n') {
		str[strlen(str) - 1] = '\0';
	}

	int len = strlen(str);

	changeString(str);

	printf("문자열의 길이 : %d\n", len);
	printf("변환된 문자열 : %s\n", str);

	return 0;
}