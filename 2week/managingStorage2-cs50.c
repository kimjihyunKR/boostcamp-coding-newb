#include<cs50.h>
#include<stdio.h>
#include<string.h>

void showStorage(void);
void curculate(void);
void showSales(void);
void askOrder(void);

const int price = 10000; //가격
int storage = 5; //재고
int order = 0; //주문건수
int sales = 0; //매출액

int main(void){

    while(storage>0){
        showStorage(); //재고량 보여주기
        showSales(); //매출액 출력
        askOrder(); //order 입력받기
        curculate(); //재고, 매출액 계산
    }
    printf("Sold out!😍\n");//if storage ==0

}

void curculate(void){
    storage -= order; //s=s-o
    sales = price*order*1.1;
}

void showStorage(void){
    printf("--current storage--\n");
    for(int i = 0; i < storage ; i++ ){
        printf("🍉");
    }
    printf("    %i\n",storage);
}

void showSales(void){
    printf("--current sales : %i\n", sales);
}

void askOrder(void){
    do{
        order = get_int("how much do you order?");
        if(order > storage){
            printf("We don't have that much stock.");
        }
    }while(order > storage ); 
}