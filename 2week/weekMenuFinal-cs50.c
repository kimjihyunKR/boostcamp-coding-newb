#include<cs50.h>
#include<stdio.h>
#include<string.h>

string selectMenu(string);

int main(void)
{
    //팀 회의 최종 코드
    //요일 입력받기
    while(1){
        string day = get_string("요일을 입력하세요: "); 
        string menu = selectMenu(day);

        if(strcmp(menu, "")){ //menuName !=""
            printf("%s : %s\n", day, menu);
            break;
        }else{
            printf("요일을 바르게 입력해 주세요. \n");
        }
    }
}

string selectMenu(string day) 
{
    string menu = "";

    if(!strcmp(day, "월요일")) {
        menu = "청국장";
    }
    else if(!strcmp(day, "화요일")) {
        menu = "비빔밥";
    }
    else if(!strcmp(day, "수요일")) {
        menu = "된장찌개";
    }
    else if(!strcmp(day, "목요일")) {
        menu = "칼국수";
    }
    else if(!strcmp(day, "금요일")) {
        menu = "냉면";
    }
    else if(!strcmp(day, "토요일")) {
        menu = "소불고기";
    }
    else if(!strcmp(day, "일요일")) {
        menu = "오삼불고기";
    }
    return menu;
}