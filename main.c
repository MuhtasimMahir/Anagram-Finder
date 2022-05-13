#include<stdio.h>
#include<string.h>
int main() {
    int counter1[4] = {0, 0, 0, 0};
    int counter2[4] = {0, 0, 0, 0};
    char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
    char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
    for(int i = 0; i < strlen(s1); i++){
        if(s1[i] == 'a'){
            counter1[0] += 1;
        }
        if(s1[i] == 'b'){
            counter1[1] += 1;
        }
        if(s1[i] == 'c'){
            counter1[2] += 1;
        }
        if(s1[i] == 'd'){
            counter1[3] += 1;
        }
        else
            continue;
    }
    for(int j = 0; j < strlen(s1); j++){
        if(s2[j] == 'a'){
            counter2[0] += 1;
        }
        if(s2[j] == 'b'){
            counter2[1] += 1;
        }
        if(s2[j] == 'c'){
            counter2[2] += 1;
        }
        if(s2[j] == 'd'){
            counter2[3] += 1;
        }
        else
            continue;
    }
    int flag = 0;
    for(int x = 0; x < 4; x++){
        if(counter1[x] == counter2[x]){

        }
        else if(counter1[x] != counter2[x]){
            flag = 1;
        }
    }
    if(flag == 0){
        printf("Anagram!");
    }
    else
        printf("Not Anagram!");
}