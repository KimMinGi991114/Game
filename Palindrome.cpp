#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
	char sentence[30];
	int length;
	bool ispalindrome =true;
	
	printf("������ �Է��ϼ���:");
	scanf("%s",sentence);
	
	length =strlen(sentence);
	
	for (int i=0;i<length/2;i++){
		if(sentence[i] != sentence[length-1-i]){
			ispalindrome =false;
			break;
		}
	}
	if(ispalindrome)printf("ȸ���Դϴ�.");
	else printf("ȸ���� �ƴմϴ�.");
	
	return 0;
} 
