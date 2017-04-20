#include <stdio.h>
#include <string.h>

#define X 13

void decode(char *str){
	int i;
	int len;
	// アルファベットのみX文字ずらす
	len = strlen(str);
	for(i=0;i<len;i++)
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a' + X ) % 26 + 'a';
	return;
}
int main(void) {
	char str[256];
	// 1行づつ読み込む
	while( NULL != fgets(str, sizeof(str), stdin)) {
		decode(str);
		printf("%s",str);
	}

	return 0;
}