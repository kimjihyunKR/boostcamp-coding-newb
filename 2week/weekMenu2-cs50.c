#include<cs50.h>
#include<stdio.h>
#include<string.h>
void showMenu(string);

int main(void)
{
    string week;
    printf("---exit를 입력하면 꺼집니다---\n");
    do{
        week = get_string("요일을 입력하세요: ");
        showMenu(week); 
    }while( strcmp(week, "exit") );
    printf("---end---\n");
}

void showMenu(string week){
    printf("%s : ", week);
    
    if(!strcmp(week,"월요일")){
        printf("청국장 \n");
    }else if(!strcmp(week,"화요일")){
        printf("비빔밥 \n");
    }else if(!strcmp(week,"수요일")){
        printf("된장찌개\n");
    }else if(!strcmp(week,"목요일")){
        printf("칼국수 \n");
    }else if(strcmp(week,"금요일") == 0){
        printf("냉면 \n");
    }else if(!strcmp(week,"토요일")){
        printf("소불고기 \n");
    }else if(!strcmp(week,"일요일")){
        printf("오삼불고기 \n");
    }else{
        printf("요일을 바르게 입력해 주세요. \n");
    }
}
