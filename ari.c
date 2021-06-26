 #include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int chars=0,words=0,sent=0;

int formula(){
	float char_word=(float)chars/words;
	float word_sent=(float)words/sent;
	float r=(4.71*char_word)+(0.5*word_sent)-21.43+1;
	chars=0;
	words=0;
	sent=0;
	return (int)r ;
	
}

string ari(string para){
	
	int value=0;
	for(int i=0; i<strlen(para); i++){
		if(para[i]==' '){
			words++;	
		}else if(para[i]=='.' || para[i]=='!' || para[i]=='?'){
			sent++;
		}else if(isalnum(para[i])){
			chars++;		
		}
	}	
	
	value=formula();
	
	string grade_level[15]={"nil","Kindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"};
	
	return grade_level[value];
	
}
