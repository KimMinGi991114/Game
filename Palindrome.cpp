#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
	char sentence[30];
	int length;
	bool ispalindrome =true;
	
	printf("문장을 입력하세요:");
	scanf("%s",sentence);
	
	length =strlen(sentence);
	
	for (int i=0;i<length/2;i++){
		if(sentence[i] != sentence[length-1-i]){
			ispalindrome =false;
			break;
		}
	}
	if(ispalindrome)printf("회문입니다.");
	else printf("회문이 아닙니다.");
	
	return 0;
} 
