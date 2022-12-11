
#include<stdio.h>
#include<string.h>


int dfa = 0;
void state(char c){
	if(c=='a'){
	 	dfa = 1;
	}
	else if(c=='b'){
	 dfa = 3;
	}
	else{
	 dfa = -1;
	}
}
void state1(char c){
 	
 	if(c=='a'){
 		dfa=2;
 	}
 	else if(c=='b'){
 		dfa = 4;
 	}
 	else{
 	  dfa = -1;
 	}
}
void state2(char c){
	if(c == 'b'){
		dfa = 3;
	}
	else if(c == 'a'){
		dfa = 1;
	}
	else{
		dfa = -1;
	}
}
void state3(char c){
	if(c=='b'){
		dfa = 3;
	}
	else if(c=='a'){
		dfa = 4;
	}
	else{
		dfa=-1;
	}
}
void state4(char c){
	dfa = -1;
}

int isAccepted(char str[]){

	for(int i=0;i<strlen(str);i++){
 		if(dfa == 0){state(str[i]);}
 		else if(dfa == 1){state1(str[i]);}
 		else if(dfa == 2){state2(str[i]);}
 		else if(dfa == 3){state3(str[i]);}
 		else if(dfa == 4){state4(str[i]);}
 		else return 0;
 	}
 	
 	if(dfa == 3) return 1;
 	else return 0;
}
int main(){
 	
 	char str[100];
 	printf("Enter String");
 	scanf("%s",str);
 	
 	if(isAccepted(str)){
 	  printf("Accepted");
 	}else{
 		printf("Rejected");
 		
 	}
 	
 	
 	return 0;
 	
 
}
