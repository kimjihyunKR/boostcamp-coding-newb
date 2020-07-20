#include<cs50.h>
#include<stdio.h>
#include<string.h>

void showMenu(string);

int main(void)
{
    //요일 입력받기
    string week = get_string("요일을 입력하세요: "); 
    showMenu(week);
}

void showMenu(string week){
    printf("%s : ", week);
    
    if(strcmp(week,"월요일") == 0){
        printf("청국장 \n");
    }else if(strcmp(week,"화요일") == 0){
        printf("비빔밥 \n");
    }else if(strcmp(week,"수요일") == 0){
        printf("된장찌개 \n");
    }else if(strcmp(week,"목요일") == 0){
        printf("칼국수 \n");
    }else if(strcmp(week,"금요일") == 0){
        printf("냉면 \n");
    }else if(strcmp(week,"토요일") == 0){
        printf("소불고기 \n");
    }else if(strcmp(week,"일요일") == 0){
        printf("오삼불고기 \n");
    }else{
        printf("요일을 바르게 입력해 주세요. \n");
    }
}
