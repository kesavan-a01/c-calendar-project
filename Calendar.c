#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>
#include<unistd.h>
// #include"days.h"
char sun[] = {'S','u','n'};
char mon[] = {'M','o','n'};
char tue[] = {'T','u','e'};
char wed[] = {'W','e','d'};
char thu[] = {'T','h','u'};
char fri[] = {'F','r','i'};
char sat[] = {'S','a','t'};
#define N 18
#define M 42
#define TRUE 1
#define FALSE 0
int ones=0;
int dates=1;
int goal=1;
int a,store=0;
int damage;
int feblimit=28;
int Notification=0;
char numberdays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
char jan[]={'J','a','n'};
char feb[]={'F','e','b'};
char mar[]={'M','a','r'};
char apr[]={'A','p','r'};
char may[]={'M','a','y'};
char jun[]={'J','u','n'};
char jul[]={'J','u','l'};
char agu[]={'A','u','g'};
char sep[]={'S','e','p'};
char oct[]={'O','c','t'};
char nov[]={'N','o','v'};
char dec[]={'D','e','c'};
int i,j,year,num[10],point[N][M],n,n = 3,m=22,x,y,gy,head,end,def=3,temp;
int jandate,febdate,mardate,aprdate,maydate,jundate,juldate,agudate,sepdate,octdate,novdate,decdate;
int month=1,check=0;
int leap_year,Non_year,total,reminder,storeyear;
char navigate;
int Second_Digit=0,First_Digit=1;
int flag=0,flags=0;
int dates1=1,goal1=1;
int dates2=1,goal2=1,flag2=0;
int dates3=1,goal3=1,flag3=0;
int dates4=1,goal4=1,flag4=0;
int dates5=1,goal5=1,flag5=0;
int dates6=1,goal6=1,flag6=0;
int dates7=1,goal7=1,flag7=0;
int dates8=1,goal8=1,flag8=0;
int dates9=1,goal9=1,flag9=0;
int dates10=1,goal10=1,flag10=0;
int dates11=1,goal11=1,flag11=0;
int ch,samdate=1;
int getkey();
void january();
void february();
void march();
void april();
void may_month();
void june();
void july();
void augst();
void september();
void october();
void november();
void december();
void view();
void Calender_Screen();
void Input_Year();
void Print_Year();
void Month_Screen();
void Screen_clear();
void Next_Month();
void control_month();
void Days_Name();
void Day_Number();
void Dates_Allocation();
void Print_Dates();
void view();
void view(){
    Screen_clear();
    Calender_Screen();
    control_month();
}
int main(){
    for(i=1;i<=N;i++){for(j=1;j<=M;j++){point[i][j]=0;}}
    Input_Year();
    Day_Number();
    Print_Year();
    Month_Screen();
    Days_Name();
    Dates_Allocation();
    view();
    control_month();
    return 0;
}
void Next_Month(){
    if(month==1){if(point[i][j]==5){printf("%c",jan[0]);}if(point[i][j]==6){printf("%c",jan[1]);}
        if(point[i][j]==7){printf("%c",jan[2]);}
    }if(month==2){if(point[i][j]==5){printf("%c",feb[0]);}if(point[i][j]==6){printf("%c",feb[1]);}
        if(point[i][j]==7){printf("%c",feb[2]);}
    }if(month==3){if(point[i][j]==5){printf("%c",mar[0]);}if(point[i][j]==6){printf("%c",mar[1]);}
        if(point[i][j]==7){printf("%c",mar[2]);}
    }if(month==4){if(point[i][j]==5){printf("%c",apr[0]);}if(point[i][j]==6){printf("%c",apr[1]);}
        if(point[i][j]==7){printf("%c",apr[2]);}
    }if(month==5){if(point[i][j]==5){printf("%c",may[0]);}if(point[i][j]==6){printf("%c",may[1]);}
        if(point[i][j]==7){printf("%c",may[2]);}
    }if(month==6){if(point[i][j]==5){printf("%c",jun[0]);}if(point[i][j]==6){printf("%c",jun[1]);}
        if(point[i][j]==7){printf("%c",jun[2]);}
    }if(month==7){if(point[i][j]==5){printf("%c",jul[0]);}if(point[i][j]==6){printf("%c",jul[1]);}
        if(point[i][j]==7){printf("%c",jul[2]);}
    }if(month==8){if(point[i][j]==5){printf("%c",agu[0]);}if(point[i][j]==6){printf("%c",agu[1]);}
        if(point[i][j]==7){printf("%c",agu[2]);}
    }if(month==9){if(point[i][j]==5){printf("%c",sep[0]);}if(point[i][j]==6){printf("%c",sep[1]);}
        if(point[i][j]==7){printf("%c",sep[2]);}
    }if(month==10){if(point[i][j]==5){printf("%c",oct[0]);}if(point[i][j]==6){printf("%c",oct[1]);}
        if(point[i][j]==7){printf("%c",oct[2]);}
    }if(month==11){if(point[i][j]==5){printf("%c",nov[0]);}if(point[i][j]==6){printf("%c",nov[1]);}
        if(point[i][j]==7){printf("%c",nov[2]);}
    }if(month==12){if(point[i][j]==5){printf("%c",dec[0]);}if(point[i][j]==6){printf("%c",dec[1]);}
        if(point[i][j]==7){printf("%c",dec[2]);}
    }
}
void Calender_Screen(){

    for(i=1;i<M;i++){
        printf("%c",220);
    }
    printf("\n");
    for(i=1;i<N;i++){
        for(j=1;j<M;j++){

            if(j==1){
                printf("%c",221);
            }else if(point[i][j]>0 && point[i][j]<5){
                if(point[i][j]==1){printf("%d",num[3]);}
                if(point[i][j]==2){printf("%d",num[2]);}
                if(point[i][j]==3){printf("%d",num[1]);}
                if(point[i][j]==4){printf("%d",num[0]);}
            }else if(point[i][j]>=5 && point[i][j]<=7){Next_Month();}
            else if(i==4 && j!=M-1){printf("%c",220);}
            else if(i==6 && j!=M-1){printf("%c",220);}
            else if(i==8 && j!=M-1){printf("%c",220);}
            else if(i==10 && j!=M-1){printf("%c",220);}
            else if(i==12 && j!=M-1){printf("%c",220);}
            else if(i==14 && j!=M-1){printf("%c",220);}
            else if(i==16 && j!=M-1){printf("%c",220);}
            else if(j==6 && i>=5){printf("%c",222);}
            else if(j==12 && i>=5){printf("%c",222);}
            else if(j==18 && i>=5){printf("%c",222);}
            else if(j==24 && i>=5){printf("%c",222);}
            else if(j==30 && i>=5){printf("%c",222);}
            else if(j==36 && i>=5){ printf("%c",222);}
            else if(j==42 && i>=5){ printf("%c",222);}

            else if(j==M-1)
                printf("%c",222);
            else if(i==5 &&(( j>=3 && j<=5)||(j>=8 && j<=10)||(j>=14 && j<=16)||(j>=20 && j<=22)||(j>=26 && j<=28)||(j>=32 && j<=34)||(j>=38 && j<=40)) ){
                if(point[i][j]==100){printf("%c",sun[0]);}if(point[i][j]==101){printf("%c",sun[1]);}if(point[i][j]==102){printf("%c",sun[2]);}
                if(point[i][j]==200){printf("%c",mon[0]);}if(point[i][j]==201){printf("%c",mon[1]);}if(point[i][j]==202){printf("%c",mon[2]);}
                if(point[i][j]==300){printf("%c",tue[0]);}if(point[i][j]==301){printf("%c",tue[1]);}if(point[i][j]==302){printf("%c",tue[2]);}
                if(point[i][j]==400){printf("%c",wed[0]);}if(point[i][j]==401){printf("%c",wed[1]);}if(point[i][j]==402){printf("%c",wed[2]);}
                if(point[i][j]==500){printf("%c",thu[0]);}if(point[i][j]==501){printf("%c",thu[1]);}if(point[i][j]==502){printf("%c",thu[2]);}
                if(point[i][j]==600){printf("%c",fri[0]);}if(point[i][j]==601){printf("%c",fri[1]);}if(point[i][j]==602){printf("%c",fri[2]);}
                if(point[i][j]==700){printf("%c",sat[0]);}if(point[i][j]==701){printf("%c",sat[1]);}if(point[i][j]==702){printf("%c",sat[2]);}
            }
            else if((i==7 && j==4) || (i==7 && j==9) || (i==7 && j==15) || (i==7 && j==21) || (i==7 && j==27) || (i==7 && j==33) || (i==7 && j==39)
            || (i==9 && j==4) || (i==9 && j==9) || (i==9 && j==15) || (i==9 && j==16) || (i==9 && j==21) || (i==9 && j==22) || (i==9 && j==27) ||
            (i==9 && j==28) || (i==9 && j==33) || (i==9 && j==34) || (i==9 && j==38) || (i==9 && j==39) || (i==11 && j==3) || (i==11 && j==4) ||
            (i==11 && j==9) || (i==11 && j==10) || (i==11 && j==15) ||(i==11 && j==16) || (i==11 && j==21) ||(i==11 && j==22) || (i==11 && j==27) ||(i==11 && j==28) ||
            (i==11 && j==33) ||(i==11 && j==34) || (i==11 && j==38) ||(i==11 && j==39) || (i==13 && j==3) || (i==13 && j==4) ||
            (i==13 && j==9) || (i==13 && j==10) || (i==13 && j==15) ||(i==13 && j==16) || (i==13 && j==21) ||(i==13 && j==22) || (i==13 && j==27) ||(i==13 && j==28) ||
            (i==13 && j==33) ||(i==13 && j==34) || (i==13 && j==38) ||(i==13 && j==39) || (i==15 && j==3) || (i==15 && j==4) ||
            (i==15 && j==9) || (i==15 && j==10) || (i==15 && j==15) ||(i==15 && j==16) || (i==15 && j==21) ||(i==15 && j==22) || (i==15 && j==27) ||(i==15 && j==28) ||
            (i==15 && j==33) ||(i==15 && j==34) || (i==15 && j==38) ||(i==15 && j==39) ||  (i==17 && j==3) || (i==17 && j==4) ||
            (i==17 && j==9) || (i==17 && j==10) || (i==17 && j==15) ||(i==17 && j==16) || (i==17 && j==21) ||(i==17 && j==22) || (i==17 && j==27) ||(i==17 && j==28) ||
            (i==17 && j==33) ||(i==17 && j==34) || (i==17 && j==38) ||(i==17 && j==39)){
                if(month==1){
                    dates1=1;flags=0;goal1=1;dates2=1;goal2=1;flag2=0;dates3=1;goal3=1;flag3=0;dates4=1;goal4=1;flag4=0;dates5=1;goal5=1;flag5=0;
                    dates6=1;goal6=1;flag6=0;dates7=1;goal7=1;flag7=0;dates8=1;goal8=1;flag8=0;dates9=1;goal9=1;flag9=0;dates10=1;goal10=1;flag10=0;dates11=1;goal11=1;flag11=0;
                    january();
                }if(month==2){
                    dates=1;goal=1;flag=0;dates2=1;goal2=1;flag2=0;dates3=1;goal3=1;flag3=0;dates4=1;goal4=1;flag4=0;
                    dates5=1;goal5=1;flag5=0;dates6=1;goal6=1;flag6=0;dates7=1;goal7=1;flag7=0;dates8=1;goal8=1;flag8=0;dates9=1;goal9=1;flag9=0;dates10=1;goal10=1;flag10=0;dates11=1;goal11=1;flag11=0;
                    february();
                }if(month==3){
                    dates=1;goal=1;flag=0;dates1=1;flags=0;goal1=1;dates3=1;goal3=1;flag3=0;dates4=1;goal4=1;flag4=0;
                    dates5=1;goal5=1;flag5=0;dates6=1;goal6=1;flag6=0;dates7=1;goal7=1;flag7=0;dates8=1;goal8=1;flag8=0;
                    dates9=1;goal9=1;flag9=0;dates10=1;goal10=1;flag10=0;dates11=1;goal11=1;flag11=0;
                    march();
                }if(month==4){
                    dates=1;goal=1;flag=0;dates1=1;flags=0;goal1=1;dates2=1;goal2=1;flag2=0;dates4=1;goal4=1;flag4=0;
                    dates5=1;goal5=1;flag5=0;dates6=1;goal6=1;flag6=0;dates7=1;goal7=1;flag7=0;dates8=1;goal8=1;flag8=0;
                    dates9=1;goal9=1;flag9=0;dates10=1;goal10=1;flag10=0;dates11=1;goal11=1;flag11=0;
                    april();
                }if(month==5){
                    dates=1;goal=1;flag=0;dates1=1;flags=0;goal1=1;dates2=1;goal2=1;flag2=0;dates3=1;goal3=1;flag3=0;
                    dates5=1;goal5=1;flag5=0;dates6=1;goal6=1;flag6=0;dates7=1;goal7=1;flag7=0;dates8=1;goal8=1;flag8=0;
                    dates9=1;goal9=1;flag9=0;dates10=1;goal10=1;flag10=0;dates11=1;goal11=1;flag11=0;
                    may_month();
                }if(month==6){
                    dates=1;goal=1;flag=0;dates1=1;flags=0;goal1=1;dates2=1;goal2=1;flag2=0;dates3=1;goal3=1;flag3=0;
                    dates4=1;goal4=1;flag4=0;dates6=1;goal6=1;flag6=0;dates7=1;goal7=1;flag7=0;dates8=1;goal8=1;flag8=0;dates9=1;goal9=1;flag9=0;
                    dates10=1;goal10=1;flag10=0;dates11=1;goal11=1;flag11=0;
                    june();
                }if(month==7){
                    dates=1;goal=1;flag=0;dates1=1;flags=0;goal1=1;dates2=1;goal2=1;flag2=0;dates3=1;goal3=1;flag3=0;
                    dates4=1;goal4=1;flag4=0;dates5=1;goal5=1;flag5=0;dates7=1;goal7=1;flag7=0;dates8=1;goal8=1;flag8=0;
                    dates9=1;goal9=1;flag9=0;dates10=1;goal10=1;flag10=0;dates11=1;goal11=1;flag11=0;
                    july();
                }if(month==8){
                    dates=1;goal=1;flag=0;dates1=1;flags=0;goal1=1;dates2=1;goal2=1;flag2=0;dates3=1;goal3=1;flag3=0;
                    dates4=1;goal4=1;flag4=0;dates5=1;goal5=1;flag5=0;dates6=1;goal6=1;flag6=0;dates8=1;goal8=1;flag8=0;
                    dates9=1;goal9=1;flag9=0;dates10=1;goal10=1;flag10=0;dates11=1;goal11=1;flag11=0;
                    augst();
                }if(month==9){
                    dates=1;goal=1;flag=0;dates1=1;flags=0;goal1=1;dates2=1;goal2=1;flag2=0;dates3=1;goal3=1;flag3=0;dates4=1;goal4=1;flag4=0;
                    dates5=1;goal5=1;flag5=0;dates6=1;goal6=1;flag6=0;dates7=1;goal7=1;flag7=0;dates9=1;goal9=1;flag9=0;
                    dates10=1;goal10=1;flag10=0;dates11=1;goal11=1;flag11=0;
                    september();
                }if(month==10){
                    dates=1;goal=1;flag=0;dates1=1;flags=0;goal1=1;dates2=1;goal2=1;flag2=0;dates3=1;goal3=1;flag3=0;
                    dates4=1;goal4=1;flag4=0;dates5=1;goal5=1;flag5=0;dates6=1;goal6=1;flag6=0;dates7=1;goal7=1;flag7=0;
                    dates8=1;goal8=1;flag8=0;dates10=1;goal10=1;flag10=0;dates11=1;goal11=1;flag11=0;
                    october();
                }if(month==11){
                    dates=1;goal=1;flag=0;dates1=1;flags=0;goal1=1;dates2=1;goal2=1;flag2=0;dates3=1;goal3=1;flag3=0;
                    dates4=1;goal4=1;flag4=0;dates5=1;goal5=1;flag5=0;dates6=1;goal6=1;flag6=0;dates7=1;goal7=1;flag7=0;dates8=1;goal8=1;flag8=0;
                    dates9=1;goal9=1;flag9=0;dates11=1;goal11=1;flag11=0;
                    november();
                }if(month==12){
                    dates=1;goal=1;flag=0;dates1=1;flags=0;goal1=1;dates2=1;goal2=1;flag2=0;dates3=1;goal3=1;flag3=0;
                    dates4=1;goal4=1;flag4=0;dates5=1;goal5=1;flag5=0;dates6=1;goal6=1;flag6=0;dates7=1;goal7=1;flag7=0;
                    dates8=1;goal8=1;flag8=0;dates9=1;goal9=1;flag9=0;dates10=1;goal10=1;flag10=0;
                    december();
                }
            }
            else{printf(" ");}
        }
        printf("\n");
    }
    for(i=1;i<=M-1;i++){
        printf("%c",223);
    }

}
void Input_Year(){
    printf("\n Enter the Year : ");
    scanf("%d",&year);
    storeyear=year;//2022
    for(i=0;i<4;i++){n = year;year = year/10;num[i] = n%10;}
}void Print_Year(){
    x = 2;y = 26;gy = y;head = 4;end = 1;
    for(i=0;i<head;i++){gy++;point[x][gy-head] = i+1;}
}void Month_Screen(){
    x=2 ;y = 20;gy=y;head = 3;
    for(i=0;i<head;i++){gy++;point[x][gy-head] = i+5;}
}void Screen_clear(){
    HANDLE out;
    COORD position;
    out = GetStdHandle(STD_OUTPUT_HANDLE);
    position.X = 0;
    position.Y = 0;
    SetConsoleCursorPosition(out,position);
}
void control_month(){
    lable:
    ch = getch();
    if(ch==77){month++;if(month==13){month=1;}view();}
    if(ch==75){month--;if(month==0){month=12;}view();}
    goto lable;
}void Days_Name(){
    x = 5; y = 5;gy=y;head=3;
    for(i=0;i<head;i++){gy++;point[x][gy-head]=i+100;}
    y = 10;gy=y;head=3;
    for(i=0;i<head;i++){gy++;point[x][gy-head]=i+200;}
    y=16;gy=y;head=3;
    for(i=0;i<head;i++){gy++;point[x][gy-head] = i+300;}
    y = 22;gy=y;head=3;
    for(i=0;i<head;i++){gy++;point[x][gy-head] = i+400;}
    y = 28;gy=y;head=3;
    for(i=0;i<head;i++){gy++;point[x][gy-head] = i+500;}
    y = 34;gy=y;head=3;
    for(i=0;i<head;i++){gy++;point[x][gy-head] = i+600;}
    y = 40;gy=y;head=3;
    for(i=0;i<head;i++){gy++;point[x][gy-head] = i+700;}
}
void Day_Number(){
    if(storeyear%100==0){
        if(storeyear%400==0){Notification=1;feblimit=29;}else{Notification=0;}
    }
    else{
        if(storeyear%4==0){Notification=1;feblimit=29;}else{Notification=0;}
    }
    for(i=1;i<=12;i++){
        store = storeyear-1;
        leap_year= store/4;
        Non_year = store-leap_year;
        leap_year = leap_year*2;
        if(i==1){total = Non_year+leap_year+1;}
        if(i==2){total = Non_year+leap_year+31+1;}
        if(i==3){
            if(Notification==1){total = Non_year+leap_year+31+29+1;}
            else{total = Non_year+leap_year+31+28+1;}
        }
        if(i==4){if(Notification==1){total = Non_year+leap_year+31+29+31+1;}else{total = Non_year+leap_year+31+28+31+1;}
        }
        if(i==5){
            if(Notification==1){total = Non_year+leap_year+31+29+31+30+1;}
            else{total = Non_year+leap_year+31+28+31+30+1;}
        }
        if(i==6){if(Notification==1){total = Non_year+leap_year+31+29+31+30+31+1;}
            else{total = Non_year+leap_year+31+28+31+30+31+1;}
        }
        if(i==7){
            if(Notification==1){total = Non_year+leap_year+31+29+31+30+31+30+1;}
            else{total = Non_year+leap_year+31+28+31+30+31+30+1;}
        }
        if(i==8){if(Notification==1){total = Non_year+leap_year+31+29+31+30+31+30+31+1;}
            else{total = Non_year+leap_year+31+28+31+30+31+30+31+1;}
        }
        if(i==9){
            if(Notification==1){total = Non_year+leap_year+31+29+31+30+31+30+31+31+1;}
            else{total = Non_year+leap_year+31+28+31+30+31+30+31+31+1;}
        }
        if(i==10){if(Notification==1){total = Non_year+leap_year+31+29+31+30+31+30+31+31+30+1;}
            else{total = Non_year+leap_year+31+28+31+30+31+30+31+31+30+1;}
        }
        if(i==11){
            if(Notification==1){total = Non_year+leap_year+31+29+31+30+31+30+31+31+30+31+1;}
            else{total = Non_year+leap_year+31+28+31+30+31+30+31+31+30+31+1;}
        }
        if(i==12){if(Notification==1){total = Non_year+leap_year+31+29+31+30+31+30+31+31+30+31+30+1;}
            else{total = Non_year+leap_year+31+28+31+30+31+30+31+31+30+31+30+1;}
        }
        reminder = total%7;
        if(reminder==0){reminder=6;}
        else{reminder=reminder-1;}
        if(i==1){jandate=reminder;}if(i==2){febdate=reminder;}if(i==3){mardate=reminder;}if(i==4){
        aprdate=reminder;}if(i==5){maydate=reminder;}if(i==6){jundate=reminder;}if(i==7){juldate=reminder;}
        if(i==8){agudate=reminder;}if(i==9){sepdate=reminder;}if(i==10){octdate=reminder;}if(i==11){
        novdate=reminder;}if(i==12){decdate=reminder;}
    }
}
void Dates_Allocation(){
    x = 7;y = 4;gy=y;head=1;
    for(i=0;i<head;i++){
        gy++;point[x][gy-head]=i+1000;}
    y=9;gy=y;head=1;
    for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1001;}
    y=15;gy=y;head=1;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1002;}
    y=21;gy=y;head=1;for(i=0;i<head;i++){
        gy++;point[x][gy-head]=i+1003;}
    y=27;gy=y;head=1;
    for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1004;}
    y=33;gy=y;head=1;for(i=0;i<head;i++){
        gy++;point[x][gy-head]=i+1005;}
    y=39;gy=y;head=1;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1006;}

    x =9;y=4;gy=y;head=1;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1007;}y=9;gy=y;head=1;
    for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1008;}y=16;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1009;}y=22;gy=y;head=2;for(i=0;i<head;i++){
    gy++;point[x][gy-head]=i+1011;}y=28;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1013;}y=34;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1015;}
    y=39;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1017;}

    x=11;y=4;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1019;}y=10;gy=y;head=2;
    for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1021;}y=16;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1023;}y=22;gy=y;head=2;for(i=0;i<head;i++){
    gy++;point[x][gy-head]=i+1025;} y=28;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1027;}y=34;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1029;}
    y=39;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1031;}

    x=13;y=4;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1033;}y=10;gy=y;head=2;
    for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1035;}y=16;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1037;}y=22;gy=y;head=2;for(i=0;i<head;i++){
    gy++;point[x][gy-head]=i+1039;} y=28;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1041;}y=34;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1043;}
    y=39;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1045;}

    x=15;y=4;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1047;}y=10;gy=y;head=2;
    for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1049;}y=16;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1051;}y=22;gy=y;head=2;for(i=0;i<head;i++){
    gy++;point[x][gy-head]=i+1053;} y=28;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1055;}y=34;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1057;}
    y=39;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1059;}


    x=17;y=4;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1061;}y=10;gy=y;head=2;
    for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1063;}y=16;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1065;}y=22;gy=y;head=2;for(i=0;i<head;i++){
    gy++;point[x][gy-head]=i+1067;} y=28;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1069;}y=34;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1071;}
    y=39;gy=y;head=2;for(i=0;i<head;i++){gy++;point[x][gy-head]=i+1073;}
}
void january(){
    if(point[i][j]==1000){if(jandate==0){printf("%d",dates);flag = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flag!=1){if(jandate==1){printf("%d",dates);flag = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flag!=1){
        if(jandate==2){printf("%d",dates);flag = 1;}else{printf("-");}
    }
    if(point[i][j]==1003 && flag!=1){if(jandate==3){printf("%d",dates);flag =1;}
        else{printf("-");}
    }if(point[i][j]==1004 && flag!=1){if(jandate==4){printf("%d",dates);flag =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flag!=1){
        if(jandate==5){printf("%d",dates);flag = 1;}else{printf("-");}
    }
    if(point[i][j]==1006 && flag!=1){if(jandate==6){printf("%d",dates);flag = 1;}else{printf("-");}}

    if(point[i][j]==jandate+goal+1000){
        if(point[i][j]<=1008){printf("%d",dates+1);dates=dates+1;goal=goal+1;}
        else{
            if(dates<9){
                if(point[i][j]==1009){printf("%d ",dates+1);dates=dates+1;goal=goal+1;}
                if(point[i][j]==1011){printf("%d ",dates+1);dates=dates+1;}
                if(point[i][j]==1013){
                    printf("%d ",dates+1);dates=dates+1;}
                if(point[i][j]==1015){printf("%d ",dates+1);dates=dates+1;}
                if(point[i][j]==1017){printf("%d ",dates+1);
                    dates=dates+1;
                }
                if(point[i][j]==1019){printf("%d ",dates+1);dates=dates+1;}
                goal=goal+1;
            }
            else if(dates<=31){
                if(dates==9){dates=dates+1;}
                if(dates>9){First_Digit = dates/10;Second_Digit=dates%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates=dates+1;goal=goal+1;}
                }
                goal=goal+1;
            }
            else if(dates>31){
                for(a=1053;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates=dates+1;goal=goal+1;}
                }
                goal=goal+1;
            }
        }
    }
}
void february(){
    if(point[i][j]==1000){if(febdate==0){printf("%d",dates1);flags = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flags!=1){
        if(febdate==1){printf("%d",dates1);flags = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flags!=1){if(febdate==2){printf("%d",dates1);flags = 1;}else{printf("-");}}
    if(point[i][j]==1003 && flags!=1){
        if(febdate==3){printf("%d",dates1);flags =1;}else{printf("-");}
    }
    if(point[i][j]==1004 && flags!=1){
        if(febdate==4){printf("%d",dates1);flags =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flags!=1){if(febdate==5){printf("%d",dates1);flags = 1;}else{printf("-");}}
    if(point[i][j]==1006 && flags!=1){
        if(febdate==6){printf("%d",dates1);flags = 1;}
        else{printf("-");}
    }
    if(point[i][j]==febdate+goal1+1000){
        if(point[i][j]<=1008){printf("%d",dates1+1);dates1=dates1+1;goal1=goal1+1;}
        else{
            if(dates1<9){
                if(point[i][j]==1009){printf("%d ",dates1+1);dates1=dates1+1;goal1=goal1+1;}
                if(point[i][j]==1011){
                    printf("%d ",dates1+1);dates1=dates1+1;
                }
                if(point[i][j]==1013){printf("%d ",dates1+1);dates1=dates1+1;}
                if(point[i][j]==1015){printf("%d ",dates1+1);dates1=dates1+1;}
                if(point[i][j]==1017){
                    printf("%d ",dates1+1);dates1=dates1+1;
                }
                if(point[i][j]==1019){printf("%d ",dates1+1);dates1=dates1+1;}
                goal1=goal1+1;
            }
            else if(dates1<=feblimit){
                if(dates1==9){dates1=dates1+1;}
                if(dates1>9){First_Digit = dates1/10;Second_Digit=dates1%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates1=dates1+1;goal1=goal1+1;}
                }
                goal1=goal1+1;
            }
            else if(dates1>28){
                for(a=1047;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates1=dates1+1;goal1=goal1+1;}
                }
                goal1=goal1+1;
            }
        }
    }
}
void march(){
    //dates2  goal2   flag2
    if(point[i][j]==1000){if(mardate==0){printf("%d",dates2);flag2 = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flag2!=1){if(mardate==1){printf("%d",dates2);flag2 = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flag2!=1){
        if(mardate==2){printf("%d",dates2);flag2 = 1;}else{printf("-");}
    }
    if(point[i][j]==1003 && flag2!=1){if(mardate==3){printf("%d",dates2);flag2 =1;}
        else{printf("-");}
    }if(point[i][j]==1004 && flag2!=1){if(mardate==4){printf("%d",dates2);flag2 =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flag2!=1){
        if(mardate==5){printf("%d",dates2);flag2 = 1;}else{printf("-");}
    }
    if(point[i][j]==1006 && flag2!=1){if(mardate==6){printf("%d",dates2);flag2 = 1;}else{printf("-");}}

    if(point[i][j]==mardate+goal2+1000){
        if(point[i][j]<=1008){printf("%d",dates2+1);dates2=dates2+1;goal2=goal2+1;}
        else{
            if(dates2<9){
                if(point[i][j]==1009){printf("%d ",dates2+1);dates2=dates2+1;goal2=goal2+1;}
                if(point[i][j]==1011){printf("%d ",dates2+1);dates2=dates2+1;}
                if(point[i][j]==1013){
                    printf("%d ",dates2+1);dates2=dates2+1;}
                if(point[i][j]==1015){printf("%d ",dates2+1);dates2=dates2+1;}
                if(point[i][j]==1017){printf("%d ",dates2+1);
                    dates2=dates2+1;
                }
                if(point[i][j]==1019){printf("%d ",dates2+1);dates2=dates2+1;}
                goal2=goal2+1;
            }
            else if(dates2<=31){
                if(dates2==9){dates2=dates2+1;}
                if(dates2>9){First_Digit = dates2/10;Second_Digit=dates2%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates2=dates2+1;goal2=goal2+1;}
                }
                goal2=goal2+1;
            }
            else if(dates2>31){
                for(a=1053;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates2=dates2+1;goal2=goal2+1;}
                }
                goal2=goal2+1;
            }
        }
    }
}
void april(){
//int dates3=1,goal3=1,flag3=0;
    if(point[i][j]==1000){if(aprdate==0){printf("%d",dates3);flag3 = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flag3!=1){if(aprdate==1){printf("%d",dates3);flag3 = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flag3!=1){
        if(aprdate==2){printf("%d",dates3);flag3 = 1;}else{printf("-");}
    }
    if(point[i][j]==1003 && flag3!=1){if(aprdate==3){printf("%d",dates3);flag3 =1;}
        else{printf("-");}
    }if(point[i][j]==1004 && flag3!=1){if(aprdate==4){printf("%d",dates3);flag3 =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flag3!=1){
        if(aprdate==5){printf("%d",dates3);flag3 = 1;}else{printf("-");}
    }
    if(point[i][j]==1006 && flag3!=1){if(aprdate==6){printf("%d",dates3);flag3 = 1;}else{printf("-");}}

    if(point[i][j]==aprdate+goal3+1000){
        if(point[i][j]<=1008){printf("%d",dates3+1);dates3=dates3+1;goal3=goal3+1;}
        else{
            if(dates3<9){
                if(point[i][j]==1009){printf("%d ",dates3+1);dates3=dates3+1;goal3=goal3+1;}
                if(point[i][j]==1011){printf("%d ",dates3+1);dates3=dates3+1;}
                if(point[i][j]==1013){
                    printf("%d ",dates3+1);dates3=dates3+1;}
                if(point[i][j]==1015){printf("%d ",dates3+1);dates3=dates3+1;}
                if(point[i][j]==1017){printf("%d ",dates3+1);
                    dates3=dates3+1;
                }
                if(point[i][j]==1019){printf("%d ",dates3+1);dates3=dates3+1;}
                goal3=goal3+1;
            }
            else if(dates3<=30){
                if(dates3==9){dates3=dates3+1;}
                if(dates3>9){First_Digit = dates3/10;Second_Digit=dates3%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates3=dates3+1;goal3=goal3+1;}
                }
                goal3=goal3+1;
            }
            else if(dates3>30){
                for(a=1053;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates3=dates3+1;goal3=goal3+1;}
                }
                goal3=goal3+1;
            }
        }
    }
}
void may_month(){
 //int dates4=1,goal4=1,flag4=0;

    if(point[i][j]==1000){if(maydate==0){printf("%d",dates4);flag4 = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flag4!=1){if(maydate==1){printf("%d",dates4);flag4 = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flag4!=1){
        if(maydate==2){printf("%d",dates4);flag4 = 1;}else{printf("-");}
    }
    if(point[i][j]==1003 && flag4!=1){if(maydate==3){printf("%d",dates4);flag4 =1;}
        else{printf("-");}
    }if(point[i][j]==1004 && flag4!=1){if(maydate==4){printf("%d",dates4);flag4 =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flag4!=1){
        if(maydate==5){printf("%d",dates4);flag4 = 1;}else{printf("-");}
    }
    if(point[i][j]==1006 && flag4!=1){if(maydate==6){printf("%d",dates4);flag4 = 1;}else{printf("-");}}

    if(point[i][j]==maydate+goal4+1000){
        if(point[i][j]<=1008){printf("%d",dates4+1);dates4=dates4+1;goal4=goal4+1;}
        else{
            if(dates4<9){
                if(point[i][j]==1009){printf("%d ",dates4+1);dates4=dates4+1;goal4=goal4+1;}
                if(point[i][j]==1011){printf("%d ",dates4+1);dates4=dates4+1;}
                if(point[i][j]==1013){
                    printf("%d ",dates4+1);dates4=dates4+1;}
                if(point[i][j]==1015){printf("%d ",dates4+1);dates4=dates4+1;}
                if(point[i][j]==1017){printf("%d ",dates4+1);
                    dates4=dates4+1;
                }
                if(point[i][j]==1019){printf("%d ",dates4+1);dates4=dates4+1;}
                goal4=goal4+1;
            }
            else if(dates4<=31){
                if(dates4==9){dates4=dates4+1;}
                if(dates4>9){First_Digit = dates4/10;Second_Digit=dates4%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates4=dates4+1;goal4=goal4+1;}
                }
                goal4=goal4+1;
            }
            else if(dates4>31){
                for(a=1053;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates4=dates4+1;goal4=goal4+1;}
                }
                goal4=goal4+1;
            }
        }
    }
}
void june(){
    //int dates5=1,goal5=1,flag5=0;
    if(point[i][j]==1000){if(jundate==0){printf("%d",dates5);flag5 = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flag5!=1){if(jundate==1){printf("%d",dates5);flag5 = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flag5!=1){
        if(jundate==2){printf("%d",dates5);flag5 = 1;}else{printf("-");}
    }
    if(point[i][j]==1003 && flag5!=1){if(jundate==3){printf("%d",dates5);flag5 =1;}
        else{printf("-");}
    }if(point[i][j]==1004 && flag5!=1){if(jundate==4){printf("%d",dates5);flag5 =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flag5!=1){
        if(jundate==5){printf("%d",dates5);flag5 = 1;}else{printf("-");}
    }
    if(point[i][j]==1006 && flag5!=1){if(jundate==6){printf("%d",dates5);flag5 = 1;}else{printf("-");}}

    if(point[i][j]==jundate+goal5+1000){
        if(point[i][j]<=1008){printf("%d",dates5+1);dates5=dates5+1;goal5=goal5+1;}
        else{
            if(dates5<9){
                if(point[i][j]==1009){printf("%d ",dates5+1);dates5=dates5+1;goal5=goal5+1;}
                if(point[i][j]==1011){printf("%d ",dates5+1);dates5=dates5+1;}
                if(point[i][j]==1013){
                    printf("%d ",dates5+1);dates5=dates5+1;}
                if(point[i][j]==1015){printf("%d ",dates5+1);dates5=dates5+1;}
                if(point[i][j]==1017){printf("%d ",dates5+1);
                    dates5=dates5+1;
                }
                if(point[i][j]==1019){printf("%d ",dates5+1);dates5=dates5+1;}
                goal5=goal5+1;
            }
            else if(dates5<=30){
                if(dates5==9){dates5=dates5+1;}
                if(dates5>9){First_Digit = dates5/10;Second_Digit=dates5%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates5=dates5+1;goal5=goal5+1;}
                }
                goal5=goal5+1;
            }
            else if(dates5>30){
                for(a=1053;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates5=dates5+1;goal5=goal5+1;}
                }
                goal5=goal5+1;
            }
        }
    }
}
void july(){
    //int dates6=1,goal6=1,flag6=0;

    if(point[i][j]==1000){if(juldate==0){printf("%d",dates6);flag6 = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flag6!=1){if(juldate==1){printf("%d",dates6);flag6 = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flag6!=1){
        if(juldate==2){printf("%d",dates6);flag6 = 1;}else{printf("-");}
    }
    if(point[i][j]==1003 && flag6!=1){if(juldate==3){printf("%d",dates6);flag6 =1;}
        else{printf("-");}
    }if(point[i][j]==1004 && flag6!=1){if(juldate==4){printf("%d",dates6);flag6 =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flag6!=1){
        if(juldate==5){printf("%d",dates6);flag6 = 1;}else{printf("-");}
    }
    if(point[i][j]==1006 && flag6!=1){if(juldate==6){printf("%d",dates6);flag6 = 1;}else{printf("-");}}

    if(point[i][j]==juldate+goal6+1000){
        if(point[i][j]<=1008){printf("%d",dates6+1);dates6=dates6+1;goal6=goal6+1;}
        else{
            if(dates6<9){
                if(point[i][j]==1009){printf("%d ",dates6+1);dates6=dates6+1;goal6=goal6+1;}
                if(point[i][j]==1011){printf("%d ",dates6+1);dates6=dates6+1;}
                if(point[i][j]==1013){
                    printf("%d ",dates6+1);dates6=dates6+1;}
                if(point[i][j]==1015){printf("%d ",dates6+1);dates6=dates6+1;}
                if(point[i][j]==1017){printf("%d ",dates6+1);
                    dates6=dates6+1;
                }
                if(point[i][j]==1019){printf("%d ",dates6+1);dates6=dates6+1;}
                goal6=goal6+1;
            }
            else if(dates6<=31){
                if(dates6==9){dates6=dates6+1;}
                if(dates6>9){First_Digit = dates6/10;Second_Digit=dates6%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates6=dates6+1;goal6=goal6+1;}
                }
                goal6=goal6+1;
            }
            else if(dates6>31){
                for(a=1053;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates6=dates6+1;goal6=goal6+1;}
                }
                goal6=goal6+1;
            }
        }
    }
}
void augst(){
    //int dates7=1,goal7=1,flag7=0;

    if(point[i][j]==1000){if(agudate==0){printf("%d",dates7);flag7 = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flag7!=1){if(agudate==1){printf("%d",dates7);flag7 = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flag7!=1){
        if(agudate==2){printf("%d",dates7);flag7 = 1;}else{printf("-");}
    }
    if(point[i][j]==1003 && flag7!=1){if(agudate==3){printf("%d",dates7);flag7 =1;}
        else{printf("-");}
    }if(point[i][j]==1004 && flag7!=1){if(agudate==4){printf("%d",dates7);flag7 =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flag7!=1){
        if(agudate==5){printf("%d",dates7);flag7 = 1;}else{printf("-");}
    }
    if(point[i][j]==1006 && flag7!=1){if(agudate==6){printf("%d",dates7);flag7 = 1;}else{printf("-");}}

    if(point[i][j]==agudate+goal7+1000){
        if(point[i][j]<=1008){printf("%d",dates7+1);dates7=dates7+1;goal7=goal7+1;}
        else{
            if(dates7<9){
                if(point[i][j]==1009){printf("%d ",dates7+1);dates7=dates7+1;goal7=goal7+1;}
                if(point[i][j]==1011){printf("%d ",dates7+1);dates7=dates7+1;}
                if(point[i][j]==1013){
                    printf("%d ",dates7+1);dates7=dates7+1;}
                if(point[i][j]==1015){printf("%d ",dates7+1);dates7=dates7+1;}
                if(point[i][j]==1017){printf("%d ",dates7+1);
                    dates7=dates7+1;
                }
                if(point[i][j]==1019){printf("%d ",dates7+1);dates7=dates7+1;}
                goal7=goal7+1;
            }
            else if(dates7<=31){
                if(dates7==9){dates7=dates7+1;}
                if(dates7>9){First_Digit = dates7/10;Second_Digit=dates7%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates7=dates7+1;goal7=goal7+1;}
                }
                goal7=goal7+1;
            }
            else if(dates7>31){
                for(a=1053;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates7=dates7+1;goal7=goal7+1;}
                }
                goal7=goal7+1;
            }
        }
    }
}
void september(){
  //int dates8=1,goal8=1,flag8=0;

    if(point[i][j]==1000){if(sepdate==0){printf("%d",dates8);flag8 = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flag8!=1){if(sepdate==1){printf("%d",dates8);flag8 = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flag8!=1){
        if(sepdate==2){printf("%d",dates8);flag8 = 1;}else{printf("-");}
    }
    if(point[i][j]==1003 && flag8!=1){if(sepdate==3){printf("%d",dates8);flag8 =1;}
        else{printf("-");}
    }if(point[i][j]==1004 && flag8!=1){if(sepdate==4){printf("%d",dates8);flag8 =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flag8!=1){
        if(sepdate==5){printf("%d",dates8);flag8 = 1;}else{printf("-");}
    }
    if(point[i][j]==1006 && flag8!=1){if(sepdate==6){printf("%d",dates8);flag8 = 1;}else{printf("-");}}

    if(point[i][j]==sepdate+goal8+1000){
        if(point[i][j]<=1008){printf("%d",dates8+1);dates8=dates8+1;goal8=goal8+1;}
        else{
            if(dates8<9){
                if(point[i][j]==1009){printf("%d ",dates8+1);dates8=dates8+1;goal8=goal8+1;}
                if(point[i][j]==1011){printf("%d ",dates8+1);dates8=dates8+1;}
                if(point[i][j]==1013){
                    printf("%d ",dates8+1);dates8=dates8+1;}
                if(point[i][j]==1015){printf("%d ",dates8+1);dates8=dates8+1;}
                if(point[i][j]==1017){printf("%d ",dates8+1);
                    dates8=dates8+1;
                }
                if(point[i][j]==1019){printf("%d ",dates8+1);dates8=dates8+1;}
                goal8=goal8+1;
            }
            else if(dates8<=30){
                if(dates8==9){dates8=dates8+1;}
                if(dates8>9){First_Digit = dates8/10;Second_Digit=dates8%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates8=dates8+1;goal8=goal8+1;}
                }
                goal8=goal8+1;
            }
            else if(dates8>30){
                for(a=1053;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates8=dates8+1;goal8=goal8+1;}
                }
                goal8=goal8+1;
            }
        }
    }
}
void october(){
//int dates9=1,goal9=1,flag9=0;


    if(point[i][j]==1000){if(octdate==0){printf("%d",dates9);flag9 = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flag9!=1){if(octdate==1){printf("%d",dates9);flag9 = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flag9!=1){
        if(octdate==2){printf("%d",dates9);flag9 = 1;}else{printf("-");}
    }
    if(point[i][j]==1003 && flag9!=1){if(octdate==3){printf("%d",dates9);flag9 =1;}
        else{printf("-");}
    }if(point[i][j]==1004 && flag9!=1){if(octdate==4){printf("%d",dates9);flag9 =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flag9!=1){
        if(octdate==5){printf("%d",dates9);flag9 = 1;}else{printf("-");}
    }
    if(point[i][j]==1006 && flag9!=1){if(octdate==6){printf("%d",dates9);flag9 = 1;}else{printf("-");}}

    if(point[i][j]==octdate+goal9+1000){
        if(point[i][j]<=1008){printf("%d",dates9+1);dates9=dates9+1;goal9=goal9+1;}
        else{
            if(dates9<9){
                if(point[i][j]==1009){printf("%d ",dates9+1);dates9=dates9+1;goal9=goal9+1;}
                if(point[i][j]==1011){printf("%d ",dates9+1);dates9=dates9+1;}
                if(point[i][j]==1013){
                    printf("%d ",dates9+1);dates9=dates9+1;}
                if(point[i][j]==1015){printf("%d ",dates9+1);dates9=dates9+1;}
                if(point[i][j]==1017){printf("%d ",dates9+1);
                    dates9=dates9+1;
                }
                if(point[i][j]==1019){printf("%d ",dates9+1);dates9=dates9+1;}
                goal9=goal9+1;
            }
            else if(dates9<=31){
                if(dates9==9){dates9=dates9+1;}
                if(dates9>9){First_Digit = dates9/10;Second_Digit=dates9%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates9=dates9+1;goal9=goal9+1;}
                }
                goal9=goal9+1;
            }
            else if(dates9>31){
                for(a=1053;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates9=dates9+1;goal9=goal9+1;}
                }
                goal9=goal9+1;
            }
        }
    }
}
void november(){
//int dates10=1,goal10=1,flag10=0;

    if(point[i][j]==1000){if(novdate==0){printf("%d",dates10);flag10 = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flag10!=1){if(novdate==1){printf("%d",dates10);flag10 = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flag10!=1){
        if(novdate==2){printf("%d",dates10);flag10 = 1;}else{printf("-");}
    }
    if(point[i][j]==1003 && flag10!=1){if(novdate==3){printf("%d",dates10);flag10 =1;}
        else{printf("-");}
    }if(point[i][j]==1004 && flag10!=1){if(novdate==4){printf("%d",dates10);flag10 =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flag10!=1){
        if(novdate==5){printf("%d",dates10);flag10 = 1;}else{printf("-");}
    }
    if(point[i][j]==1006 && flag10!=1){if(novdate==6){printf("%d",dates10);flag10 = 1;}else{printf("-");}}

    if(point[i][j]==novdate+goal10+1000){
        if(point[i][j]<=1008){printf("%d",dates10+1);dates10=dates10+1;goal10=goal10+1;}
        else{
            if(dates10<9){
                if(point[i][j]==1009){printf("%d ",dates10+1);dates10=dates10+1;goal10=goal10+1;}
                if(point[i][j]==1011){printf("%d ",dates10+1);dates10=dates10+1;}
                if(point[i][j]==1013){
                    printf("%d ",dates10+1);dates10=dates10+1;}
                if(point[i][j]==1015){printf("%d ",dates10+1);dates10=dates10+1;}
                if(point[i][j]==1017){printf("%d ",dates10+1);
                    dates10=dates10+1;
                }
                if(point[i][j]==1019){printf("%d ",dates10+1);dates10=dates10+1;}
                goal10=goal10+1;
            }
            else if(dates10<=30){
                if(dates10==9){dates10=dates10+1;}
                if(dates10>9){First_Digit = dates10/10;Second_Digit=dates10%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates10=dates10+1;goal10=goal10+1;}
                }
                goal10=goal10+1;
            }
            else if(dates10>30){
                for(a=1053;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates10=dates10+1;goal10=goal10+1;}
                }
                goal10=goal10+1;
            }
        }
    }
}
void december(){
    //int dates11=1,goal11=1,flag11=0;

    if(point[i][j]==1000){if(decdate==0){printf("%d",dates11);flag11 = 1;}else{printf("-");}}
    if(point[i][j]==1001 && flag11!=1){if(decdate==1){printf("%d",dates11);flag11 = 1;}
        else{printf("-");}
    }if(point[i][j]==1002 && flag11!=1){
        if(decdate==2){printf("%d",dates11);flag11 = 1;}else{printf("-");}
    }
    if(point[i][j]==1003 && flag11!=1){if(decdate==3){printf("%d",dates11);flag11 =1;}
        else{printf("-");}
    }if(point[i][j]==1004 && flag11!=1){if(decdate==4){printf("%d",dates11);flag11 =1;}else{printf("-");}
    }
    if(point[i][j]==1005 && flag11!=1){
        if(decdate==5){printf("%d",dates11);flag11 = 1;}else{printf("-");}
    }
    if(point[i][j]==1006 && flag11!=1){if(decdate==6){printf("%d",dates11);flag11 = 1;}else{printf("-");}}

    if(point[i][j]==decdate+goal11+1000){
        if(point[i][j]<=1008){printf("%d",dates11+1);dates11=dates11+1;goal11=goal11+1;}
        else{
            if(dates11<9){
                if(point[i][j]==1009){printf("%d ",dates11+1);dates11=dates11+1;goal11=goal11+1;}
                if(point[i][j]==1011){printf("%d ",dates11+1);dates11=dates11+1;}
                if(point[i][j]==1013){
                    printf("%d ",dates11+1);dates11=dates11+1;}
                if(point[i][j]==1015){printf("%d ",dates11+1);dates11=dates11+1;}
                if(point[i][j]==1017){printf("%d ",dates11+1);
                    dates11=dates11+1;
                }
                if(point[i][j]==1019){printf("%d ",dates11+1);dates11=dates11+1;}
                goal11=goal11+1;
            }
            else if(dates11<=31){
                if(dates11==9){dates11=dates11+1;}
                if(dates11>9){First_Digit = dates11/10;Second_Digit=dates11%10;}
                for(a=1009;a<=1063;a+=2){
                    if(point[i][j]==a){printf("%d%d",First_Digit,Second_Digit);dates11=dates11+1;goal11=goal11+1;}
                }
                goal11=goal11+1;
            }
            else if(dates11>31){
                for(a=1053;a<=1074;a+=2){
                    if(point[i][j]==a){printf("- ");dates11=dates11+1;goal11=goal11+1;}
                }
                goal11=goal11+1;
            }
        }
    }
}
