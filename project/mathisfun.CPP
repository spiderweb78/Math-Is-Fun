
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>//for srand and rand
#include<string.h>//for strlen
#include<math.h>
#include<time.h>//for clock_t
#include<iomanip.h>//for setw
#include<iostream.h>
#include<process.h>//for exit
#include<ctype.h>

//function declaration
void mainMenu(),helpgame(),helpsci(),helpgeo(),helpcrypto(),about(),animation();
void standardCal(),scientificCal(),titlesci(char til[30]),cryptoGraphy(),gaMe(),geometricFormula(),titlegeo(char til[30]);
void fract(),Trigo_Calculate(),quadratic(),power(),sqroot(),asmdr();
void failareag(),matrixans(int,int,int,int[4][4],int[4][4],int[4][4]);
void Matrix_Add(),Matrix_Choice(),Matrix_Multi(),Matrix_Sub(),Matrix_Tran(),failmatrix();
float degRad(float deg);
void encrypt(),decrypt();void process(int),processd(int);
void areag(),volumeg(),perimeterg();
void puzzle(),fastMathgame2(),fastMathgame1(),fifteenTic1(),fifteenTic2();
void gridline(),textbox(),firstshow(),playgame(),fastmathtitle();
void addGame(),mulGame(),divGame(),randomg(),remainder(),subGame();
void Question(),AnswerPaper(),Key();
void playgame(),numleft1(int),numleft2(int),playag(),shownum1(),shownum2();
int GetVarible(),GetNum();
void Fifteen(),Puzzle(),Fast();
void F(int,int),I(int,int),T(int,int),E(int,int),N(int,int),C(int,int),A(int,int),O(int,int),P(int,int),U(int,int);
void Z(int,int),L(int,int),S(int,int),M(int,int),H(int,int);
//global variable
char a,choice2,numc[3][3];
float tri,ftri,i,o,c;
const float pi=3.142;char str[50],num[10];
int choice,code,flag,score,num1,num2,d1;
char f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f11,f12,f13,f14,f15,f16,f17,f18;
struct fraction{int num;int deno;};
clock_t start,endd;
void main(){
    animation();
    mainMenu();
}
void animation(){
int dd=DETECT,m;
 initgraph(&dd,&m,"c:\\turboC3\\bgi");
 cleardevice();
 int i;
 setcolor(13);
 for(i=0;i<70;i++)
 {
   circle(50,100+i,3);delay(2);
 }
 for(i=0;i<5;i++)
 {
   line(47+i,100-i,80+i,146-i);
 } delay(60);
 for(i=0;i<5;i++)
 {
   line(113-i,100-i,80-i,146-i);
 } delay(60);
 for(i=0;i<70;i++)
 {
   circle(110,100+i,3);delay(2);
 }  //finish M

 for(i=0;i<70;i++)
 {
   circle(125,100+i,3);delay(2);
 }
 for(i=0;i<40;i++)
 {
   circle(125+i,100,3);
   circle(125+i,130,3);delay(10);
 }
 for(i=0;i<70;i++)
 {
   circle(165,100+i,3);delay(2);
 }  //finish A

 for(i=0;i<19;i++)
 {
   circle(180+i,100,3);delay(10);
 }
 for(i=0;i<70;i++)
 {
   circle(200,100+i,3);delay(2);
 }
 for(i=0;i<19;i++)
 {
   circle(201+i,100,3);delay(10);
 }  //finish T

 for(i=0;i<70;i++)
 {
    circle(235,100+i,3);delay(2);
 }
 for(i=0;i<40;i++)
 {
   circle(235+i,130,3);delay(10);
 }
 for(i=0;i<70;i++)
 {
    circle(275,100+i,3);delay(2);
 }  //finish H

 for(i=0;i<30;i++)
 {
   circle(290,100+i,3);delay(2);
 }
 for(i=0;i<40;i++)
 {
   circle(290+i,100,3);
   circle(290+i,130,3);
   circle(290+i,170,3);delay(10);
 }
 for(i=0;i<40;i++)
 {
   circle(330,130+i,3);delay(2);
 }  //finish S

 setcolor(14);
 for(i=0;i<19;i++)
 {
   circle(380+i,100,3);
   circle(380+i,170,3);delay(10);
 }
 for(i=0;i<70;i++)
 {
   setcolor(14);
   circle(400,100+i,3);
   setcolor(9);
   circle(400,220+i,3);delay(2);
 }
 for(i=0;i<19;i++)
 {
    setcolor(14);
    circle(401+i,100,3);
    circle(401+i,170,3);
    setcolor(9);
    circle(401+i,220,3);
    circle(401+i,250,3);delay(10);
 }  //finish I

 for(i=0;i<14;i++)
 {
   setcolor(9);
   circle(420+i,220,3);
   circle(420+i,250,3);delay(10);
 }
 setcolor(14);
 for(i=0;i<30;i++)
 {
   circle(435,100+i,3);delay(2);
 }
 for(i=0;i<6;i++)
 {
   setcolor(14);
   circle(435+i,100,3);
   circle(435+i,130,3);
   circle(435+i,170,3);
   setcolor(9);
   circle(435+i,220,3);
   circle(435+i,250,3);delay(10);
 }  //finish F

 setcolor(14);
 for(i=0;i<15;i++)
 {
   circle(441+i,100,3);
   circle(441+i,130,3);
   circle(441+i,170,3);delay(10);
 }
 setcolor(9);
 for(i=0;i<70;i++)
 {
   circle(455,220+i,3);delay(2);
 }
 for(i=0;i<20;i++)
 {
   setcolor(14);
   circle(456+i,100,3);
   circle(456+i,130,3);
   circle(456+i,170,3);
   setcolor(9);
   circle(456+i,290,3);delay(10);
 }
 setcolor(14);
 for(i=0;i<40;i++)
 {
   circle(475,130+i,3);delay(2);
 }  //finish S

 setcolor(9);
 for(i=0;i<20;i++)
 {
   circle(476+i,290,3);delay(10);
 }
 for(i=0;i<70;i++)
 {
   circle(495,220+i,3);delay(2);
 }  //finish U

 for(i=0;i<70;i++)
 {
   circle(510,220+i,3);delay(2);
 }
 for(i=0;i<5;i++)
 {
   line(507+i,220-i,547+i,290-i);
 }delay(60);
 for(i=0;i<70;i++)
 {
   circle(550,220+i,3);delay(2);
 }  //finish N
 setcolor(2);
 settextstyle(8,0,4);
 outtextxy(50,330,"+"); delay(25);
 outtextxy(430,400,"0");delay(25);
 outtextxy(65,360,"sec()");   delay(25);
 outtextxy(300,320,"-"); delay(25);
 line(450,320,490,320);
 line(440,340,450,320);
 line(437,336,440,340); delay(125);
 outtextxy(250,350,"sinh()");  delay(125);
 outtextxy(350,390,"1");  delay(125);
 outtextxy(270,430,"0");delay(125);
 outtextxy(400,420,"*");  delay(125);
 outtextxy(80,400,"Area"); delay(125);
 outtextxy(160,320,"1");  delay(125);
 outtextxy(180,380,"log");delay(125);
 outtextxy(210,420,"/");  delay(125);
 outtextxy(290,400,"n!"); delay(125);
 outtextxy(500,400,"1F");
 settextstyle(8,0,1);
 outtextxy(525,430,"16");   delay(125);
 settextstyle(8,0,4);
 outtextxy(370,320,"ln");  delay(125);
 outtextxy(450,350,"tan()"); delay(125);
 delay(3000);
 getch();
 closegraph();
}
void mainMenu(){
    int y=10,x=28;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 settextstyle(0,HORIZ_DIR,2);setcolor(MAGENTA);
 outtextxy(220,30,"MATHS");
 setcolor(YELLOW);outtextxy(320,30,"IS");
 setcolor(LIGHTBLUE);outtextxy(370,30,"FUN");
 gotoxy(x,y);cout<<">>>";
 setcolor(YELLOW);
 settextstyle(0,HORIZ_DIR,1);//triplex_font
 outtextxy(250,115,"Standard Calculator");
 outtextxy(250,148,"Scientific Calculator");
 outtextxy(250,180,"Geometric Formula");
 outtextxy(250,213,"Cryptography");
 outtextxy(250,246,"Game");
 outtextxy(250,275,"About");
 outtextxy(250,310,"Exit");

 setcolor(LIGHTBLUE);
 rectangle(110,80,559,350);//box
 gotoxy(15,25);cout<<"-Can calculate power,square root,fraction and other operation  ";//first show

 choice2=getch();
 while(y>=8 && y<=20){
     if(choice2==72){sound(5000);delay(100);nosound();
        if(y>8){gotoxy(x,y);cout<<"   ";gotoxy(x,y-=2);cout<<">>>";}
        else   {gotoxy(x,y);cout<<"   ";x=28,y=20;gotoxy(x,y);cout<<">>>";}
     }
     if(choice2==80){sound(5000);delay(100);nosound();
        if(y<20){gotoxy(x,y);cout<<"   ";gotoxy(x,y+=2);cout<<">>>";}
        else{gotoxy(x,y);cout<<"   ";x=28,y=8;gotoxy(x,y);cout<<">>>";}
     }
     if(choice2==13){
        if(x==28 && y==8) {standardCal();break;}
        if(x==28 && y==10){scientificCal();break;}
        if(x==28 && y==12){geometricFormula();break;}
        if(x==28 && y==14){cryptoGraphy();break;}
        if(x==28 && y==16){gaMe();break;}
        if(x==28 && y==18){about();break;}
        if(x==28 && y==20){exit(0);break;}
     }
     if(x==28 && y==8){gotoxy(15,25);cout<<"-Can calculate power,square root,fraction and other operation   ";}
     if(x==28 && y==10){gotoxy(15,25);cout<<"-Can calculate matrix,trigonometry,and other advanced operation";}
     if(x==28 && y==12){gotoxy(15,25);cout<<"-Can calculate the geometric operation of different shapes     ";}
     if(x==28 && y==14){gotoxy(15,25);cout<<"-Can encrypt or decrypt the sentence to make it secret         ";}
     if(x==28 && y==16){gotoxy(15,25);cout<<"-Can play simple mathematics game                              ";}
     if(x==28 && y==18){gotoxy(15,25);cout<<"-About the program                                             ";}
     if(x==28 && y==20){gotoxy(15,25);cout<<"-Exit from program                                             ";}
    choice2=getch();
 }
 getch();
 closegraph();
}
void about(){
    cleardevice();setcolor(LIGHTBLUE);line(0,70,639,70);
    settextstyle(1,HORIZ_DIR,3);
    setcolor(RED);outtextxy(250,20,"ABOUT");
    settextstyle(1,HORIZ_DIR,2);
    setcolor(YELLOW);outtextxy(260,100,"Creaters");
    gotoxy(20,10);
    cout<<"\t\tFirst Year";cout<<"\n\t\t\t\tGroup - 3";
    cout<<"\n\t1. Hlaing Min Oo";
                 cout<<"\n\n\t2. Swan Htet Moe Lwin";
                 cout<<"\n\n\t3. Hnin Htet Htet";
                 cout<<"\n\n\t4. Thinzar Theint Zaw";
                 cout<<"\n\n\t5. Su Myat Phyu";
                 cout<<"\n\n\t6. Naw Si Si Ngon Oo";

    outtextxy(180,380,"Had Created In 1ST August,2017");
    getch();
    mainMenu();
}
void Fifteen(){
    int i;
    setcolor(12);
    for(i=0;i<200;i+=5)
    {
	clrscr();
	cleardevice();
	F(100,-70+i);
	I(160,-70+i);
	F(220,-70+i);
	T(280,-70+i);
	E(340,-70+i);
	E(400,-70+i);
	N(460,-70+i);

        T(70,500-i);
	I(120,500-i);
	C(170,500-i);
	T(235,500-i);
	A(285,500-i);
	C(335,500-i);
	T(400,500-i);
	O(450,500-i);
	E(500,500-i);delay(15);
    } delay(1000);
}
void Puzzle(){
	int i;
    setcolor(12);
    for(i=0;i<250;i+=5)
    {
	clrscr();
	cleardevice();
	P(130,-70+i);
	U(190,-70+i);
	Z(250,-70+i);
	Z(310,-70+i);
	L(370,-70+i);
	E(430,-70+i);delay(15);
    }delay(1000);
}
void Fast(){
	int i;
	setcolor(12);
	for(i=0;i<250;i+=5){
        cleardevice();
		F(60,-70+i);
		A(120,-70+i);
		S(180,-70+i);
		T(240,-70+i);
		M(320,-70+i);
		A(390,-70+i);
		T(450,-70+i);
		H(510,-70+i);delay(15);
	}delay(1000);
}
void F(int x,int y){
	int f;
	for(f=0;f<70;f++)
	{
		circle(x,y+f,3);
	}
	for(f=0;f<40;f++)
	{
		circle(x+f,y,3);
		circle(x+f,y+30,3);
	}
}
void I(int x,int y){
	int i;
  	for(i=0;i<40;i++)
  	{
        	circle(x+i,y,3);
		circle(x+i,y+70,3);
 	 }
 	for(i=0;i<70;i++)
  	{
    		circle(x+20,y+i,3);
  	}
}
void T(int x,int y){
	int i;
  	for(i=0;i<40;i++)
  	{
		circle(x+i,y,3);
  	}
  	for(i=0;i<70;i++)
  	{
		circle(x+20,y+i,3);
  	}
}
void E(int x,int y){
	int i;
  	for(i=0;i<40;i++)
  	{
    		circle(x+i,y,3);
		circle(x+i,y+35,3);
		circle(x+i,y+70,3);
  	}
  	for(i=0;i<70;i++)
  	{
    	circle(x,y+i,3);
  	}
}
void N(int x,int y){
	int i;
	for(i=0;i<6;i++)
	{
		line(x-2+i,y,x-2+i,y+70);
		line(x+38+i,y,x+38+i,y+70);
		line(x-2+i,y,x+38+i,y+70);
	}
}
void C(int x,int y){
	int i;
  	for(i=0;i<40;i++)
  	{
    		circle(x+i,y,3);
	 	circle(x+i,y+70,3);
  	}
  	for(i=0;i<70;i++)
  	{
    		circle(x,y+i,3);
  	}
}
void A(int x,int y){
	int i;
  	for(i=0;i<70;i++)
  	{
    		circle(x,y+i,3);
 		circle(x+40,y+i,3);
  	}
  	for(i=0;i<40;i++)
  	{
    		circle(x+i,y,3);
		circle(x+i,y+35,3);
  	}
}
void O(int x,int y){
	int i;
  	for(i=0;i<40;i++)
  	{
    		circle(x+i,y,3);
		circle(x+i,y+70,3);
  	}
  	for(i=0;i<70;i++)
  	{
    		circle(x,y+i,3);
		circle(x+40,y+i,3);
	}
}
void P(int x,int y){
	int i;
	for(i=0;i<70;i++)
	{
		circle(x,y+i,3);
	}
	for(i=0;i<40;i++)
	{
		circle(x+i,y,3);
		circle(x+i,y+30,3);
	}
	for(i=0;i<30;i++)
	{
		circle(x+40,y+i,3);
	}
}
void U(int x,int y){
	int i;
	for(i=0;i<70;i++)
	{
		circle(x,y+i,3);
		circle(x+40,y+i,3);
	}
	for(i=0;i<40;i++)
	{
		circle(x+i,y+70,3);
	}
}
void Z(int x,int y){
	int i;
	for(i=0;i<6;i++)
	{
		line(x,y-2+i,x+40,y-2+i);
		line(x,y+68+i,x+40,y+68+i);
		line(x+38+i,y,x-2+i,y+70);
	}
}
void L(int x,int y){
	int i;
	for(i=0;i<70;i++)
	{
		circle(x,y+i,3);
	}
	for(i=0;i<40;i++)
	{
		circle(x+i,y+70,3);
	}
}
void S(int x,int y){
	int i;
	for(i=0;i<35;i++)
	{
		circle(x+3,y+i,3);
		circle(x+37,y+35+i,3);
		circle(x+2+i,y,3);
		circle(x+2+i,y+35,3);
		circle(x+2+i,y+70,3);
	}
}
void M(int x,int y){
	int i;
	for(i=0;i<70;i++)
	{
		circle(x,y+i,3);
		circle(x+50,y+i,3);
	}
	for(i=0;i<6;i++)
	{
		line(x-2+i,y,x+23+i,y+40);
		line(x+48+i,y,x+23+i,y+40);
	}
}
void H(int x,int y){
	int i;
	for(i=0;i<70;i++)
	{
		circle(x,y+i,3);
		circle(x+40,y+i,3);
	}
	for(i=0;i<40;i++)
	{
		circle(x+i,y+35,3);
	}
}
void helpgame(){
    cleardevice();
    settextstyle(1,HORIZ_DIR,4);setcolor(RED);
    outtextxy(250,20,"Help");
    setcolor(LIGHTBLUE);line(0,70,639,70);
    settextstyle(1,HORIZ_DIR,2);setcolor(YELLOW);
    outtextxy(70,75,"Fifteen Tic Tac Toe");
    gotoxy(10,7);cout<<"\n\tThis game is similar to the normal tic tac toe game.\n\tThe player have to make 15 either diagonally or horizontally\n\t or vertically.\n\tThe player who make 15 first will win.";
                cout<<"\n\tNote: Player cannot enter 5 at the center of the chart.";
                cout<<"\n\t\tPlayer cannot enter the number twice.";
                cout<<"\n\t\tPlayer have to enter between 1 to 9 including them.";
    outtextxy(70,230,"Puzzle");
    cout<<"\n\n\n\n\tIn the puzzle the player must enter the correct number in the \n\tappropriate cell";
    cout<<"\n\tIf you can enter all the number correctly , you win.";

    outtextxy(70,320,"Fast Math");
    gotoxy(10,23);cout<<"In the fast math game , you must enter the correct answer.";
    cout<<"\n\tWhenever you win each operation you will get one score.";
    cout<<"\n\tIf you enter the wrong number once,then you fail.";

    getch();
    gaMe();

}
void helpstand(){
     cleardevice();
    settextstyle(1,HORIZ_DIR,4);setcolor(RED);
    outtextxy(250,20,"Help");
    setcolor(LIGHTBLUE);line(0,70,639,70);
    setcolor(YELLOW);settextstyle(1,HORIZ_DIR,2);
    outtextxy(200,80,"Standard Calculator");
    gotoxy(2,8);
    cout<<"\n\n  You can calculate the simple operation like addition,subtraction and so on.";
    cout<<"\n\n  You can find the power of the number.";
    cout<<"\n\n  You can find the square root of the number.";
    cout<<"\n\n  You can calculate the fractional numbers.";
    getch();
    standardCal();
}
void helpsci(){
     cleardevice();
    settextstyle(1,HORIZ_DIR,4);setcolor(RED);
    outtextxy(250,20,"Help");
    setcolor(LIGHTBLUE);line(0,70,639,70);
    settextstyle(1,HORIZ_DIR,2);setcolor(YELLOW);
    outtextxy(200,80,"Scientific Calculator");
    gotoxy(2,7);
     cout
      <<"\nMatrix"
      <<"\n\tWe can use Matrix with operations(addition, subtraction, \nmultiplication,division, transpose and power)."
      <<"\n\nAverage"
      <<"\n\tThe multiplication of numbers that start with 1 to the chosen number."
      <<"\n\nPercentage"
      <<"\n\tWe can find the percent of the chosen amount."
      <<"\n\nNatural log"
      <<"\n\tWe can find ln (log base e)"
      <<"\n\nLog10"
      <<"\n\tWe can find the value of log10"
      <<"\n\nTrigonometric Calculation"
      <<"\n\tWe can choose Trigonometric formula(sin, cos, tan, cot,\n sec, cosec, sinh, cosh, tanh, coth, sech and cosech)";
    getch();
    scientificCal();
}
void failstand(){
    if(cin.fail()){
        gotoxy(10,10);cout<<"\t\tInvalid Input.";delay(1000);cin.clear();cin.ignore(256,'\n');standardCal();
    }
}
void standardCal(){
    int x1,y1,x2,y2;
    cleardevice();
    settextstyle(1,HORIZ_DIR,4);setcolor(RED);
    outtextxy(176,20,"Standard Calculator");
    setcolor(LIGHTBLUE);line(0,70,639,70);

    setcolor(WHITE);settextstyle(1,HORIZ_DIR,1);
    outtextxy(142,150,"Add,Subtract,Multiply,Divide,Remainder");//frectangle
    outtextxy(292,200,"Power");//in second left rect
    outtextxy(265,250,"Square Root"); //in second right rect
    outtextxy(283,300,"Fraction"); //in last rect

    setcolor(YELLOW);
    rectangle(106,150,550,180);  //for a,s,m,d,r
    setcolor(BLACK);
    rectangle(106,200,550,230);//for power
    rectangle(106,250,550,280);//for square root
    rectangle(106,300,550,330);//for fraction

      rectangle(0,440,50,470);    //exit
      rectangle(250,440,360,470);  //mainmenu
      rectangle(590,440,639,470);     //help

    setcolor(LIGHTBLUE);
    line(0,430,639,430);		                //menu/exit/help
    setcolor(WHITE);
    outtextxy(10,440,"Exit");
    outtextxy(260,440,"MainMenu");
    outtextxy(600,440,"Help");

    setcolor(YELLOW);
    rectangle(106,150,550,180);
    x1=106;y1=150;x2=550;y2=180;
    choice2=getch();
    while(y1>=150 && y1<=440){
    if(choice2==80){sound(5000);delay(100);nosound();
        setcolor(BLACK);rectangle(x1,y1,x2,y2);
        if     (y1==150){x1=106;x2=550;y1=200;y2=230;}    //to power
        else if(y1==200){x1=106;x2=550;y1=250;y2=280;}    //to square root
        else if(y1==250){y1=300;y2=330;x1=106;x2=550;}    //to fraction
        else if(y1==300){y1=440;y2=470;x1=0;x2=50;}    //to exit
        else if(y1==440 && x1==0){x1=250;y1=440;x2=360;y2=470;}//to mainmenu
        else if(y1==440 && x1==250){x1=590;y1=440;x2=639;y2=470;}//to help
        else                       {x1=106;y1=150;x2=550;y2=180;}    //asmdr
        setcolor(YELLOW);rectangle(x1,y1,x2,y2);
    }
    if(choice2==72){sound(5000);delay(100);nosound();
        setcolor(BLACK);rectangle(x1,y1,x2,y2);
        if     (y1==440 && x1==590){x1=250;y1=440;x2=360;y2=470;}//to mainmenu
        else if(y1==440 && x1==250){y1=440;y2=470;x1=0;x2=50;}//to exit
        else if(y1==440 && x1==0){y1=300;y2=330;x1=106;x2=550;}//to fraction
        else if(y1==300){y1=250;y2=280;x1=106;x2=550;}    //to square root
        else if(y1==250){y1=200;y2=230;x1=106;x2=550;}    //to power
        else if(y1==200){y1=150;y2=180;x1=106;x2=550;}    //to asmdr
        else            {x1=590;y1=440;x2=639;y2=470;}    //to help
        setcolor(YELLOW);rectangle(x1,y1,x2,y2);
    }
    if(choice2==13){
        if(y1==150){asmdr();}//asmdr
        if(y1==200){power();}//power
        if(y1==250){sqroot();}//square root
        if(y1==300){fract();}
        if(y1==440 && x1==0){exit(0);}
        if(y1==440 && x1==250){mainMenu();}
        if(y1==440 && x1==590){helpstand();}
    }
    choice2=getch();
    }
}
void sqroot(){
     do{
            cleardevice();setcolor(RED);
            settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"STANDARD CALCULATOR");
            setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Square Root");
            rectangle(70,100,569,250);
            setcolor(LIGHTBLUE);line(0,70,639,70);
            double n,ans; gotoxy(10,8);
                cout<<"\t\tEnter a number : ";cin>>n;
                gotoxy(10,12);
                if(n<0){cout<<"\t\tError!";getch();sqroot();}
                failstand();
                ans=sqrt(n);
                cout<<"\t\tSquare root of "<<n<<" = "<<ans<<endl;
                gotoxy(10,14);cout<<"\t\tDo another(y,n)?:"; cin>>choice2;
                if(choice2!='y'){standardCal();}
            }while(choice2=='y');
}
void asmdr(){
    do{
            cleardevice();setcolor(RED);
            settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"STANDARD CALCULATOR");
            setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Add,Subtract,Multiply,Divide,Remainder");
            setcolor(LIGHTBLUE);line(0,70,639,70);
            setcolor(YELLOW);rectangle(70,100,569,250);
            char op;double fnum,snum;gotoxy(10,8);
                cout<<"\tEnter(1st num,operator,2nd num): ";
                cin>>fnum>>op>>snum;
                failstand();
                switch(op){
                    case'+':gotoxy(10,10);cout<<"\tAnswer : "<<fnum+snum;break;
                    case'-':gotoxy(10,10);cout<<"\tAnswer : "<<fnum-snum;break;
                    case'*':gotoxy(10,10);cout<<"\tAnswer : "<<fnum*snum;break;
                    case'/':gotoxy(10,10);if(snum==0){
                                cout<<"\tUndefined.";}
                            else{
                                cout<<"\tAnswer : "<<fnum/snum;}break;
                    case'%':gotoxy(10,10);cout<<"\tAnswer : "<<(int)fnum%(int)snum;break;
                    default:gotoxy(10,10);cout<<"\tInvalid Input!";
                }
                gotoxy(10,12);cout<<"\tDo another(y/n)? : ";cin>>choice2;
                if(choice2!='y'){standardCal();}
            }while(choice2=='y');
}
void power(){
    do{
            cleardevice();setcolor(RED);
            settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"STANDARD CALCULATOR");
            setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Power");
            rectangle(70,100,569,250);
            setcolor(LIGHTBLUE);line(0,70,639,70);
            double n,ans,p;
            gotoxy(10,8);
                cout<<"\t\tEnter a number: ";cin>>n;
                failstand();
                gotoxy(10,10);cout<<"\t\tEnter power: ";cin>>p;
                ans=pow(n,p);
                gotoxy(10,12);cout<<"\t\t"<<n<<" to the power "<<p<<" = "<<ans<<endl;
                gotoxy(10,14);cout<<"\t\tDo another(y,n)?:";cin>>choice2;
                if(choice2!='y'){standardCal();}
            }while(choice2=='y');
}
void fract(){   //finished
    do{
        cleardevice();setcolor(RED);
        settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"STANDARD CALCULATOR");
        setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Fractional Number Calculation");
        rectangle(70,100,569,200);
        setcolor(LIGHTBLUE);line(0,70,639,70);
        fraction f1,f2,f3;
        char ch,op;int flag=1,ff;
		gotoxy(10,8);cout<<" Enter 1st fraction,operator,2nd fraction: ";
		cin>>f1.num>>ch>>f1.deno>>op>>f2.num>>ch>>f2.deno;
		failstand();
        if(f1.deno==0 || f2.deno==0){
            gotoxy(10,10);cout<<"\t\tError!";delay(1000);cin.clear();cin.ignore(256,'\n');standardCal();
        }
		switch(op){
			case'+':
                f3.num=f1.num*f2.deno+f1.deno*f2.num;
                f3.deno=f1.deno*f2.deno;
			    break;
			case'-':
			    f3.num=f1.num*f2.deno-f1.deno*f2.num;
                f3.deno=f1.deno*f2.deno;
                break;
			case'*':
			    f3.num=f1.num*f2.num;
                f3.deno=f1.deno*f2.deno;
			    break;
			case'/':
			    f3.num=f1.num*f2.deno;
                f3.deno=f1.deno*f2.num;
                break;
			default:gotoxy(10,10);cout<<"\t\tInvalid input";
		}
	if(f3.num==0){
		gotoxy(10,10);cout<<"\t\tAnswer : "<<0;
		gotoxy(10,12);cout<<"\t\tDo another(y,n)?: ";cin>>choice2;
	}
	else{if(f3.num<f3.deno){
		ff=f3.num;
            while(flag||ff>=2){
                if((f3.num%ff==0)&&(f3.deno%ff==0)){
                    f3.num/=ff;
                    f3.deno/=ff;
                    flag=0;
                    }
			else ff-=1;
            		}
	}
	else if(f3.deno<f3.num){
        ff=f3.deno;
            while(flag||ff>=2){
                if((f3.num%ff==0)&&(f3.deno%ff==0)){
                    f3.num/=ff;
                    f3.deno/=ff;
                    flag=0;
                    }
                else ff-=1;
                }
	}
    else{
		f3.num=1;
		f3.deno=1;
	}
		gotoxy(10,10);cout<<"\t\tAnswer : "<<f3.num<<"/"<<f3.deno;
		gotoxy(10,12);cout<<"\t\tDo another(y,n)?: ";cin>>choice2;
		if(choice2!='y'){standardCal();}}
	}while(choice2=='y');
}
void failscien(){
    if(cin.fail()){
        gotoxy(10,10);cout<<"\t\tInvalid Input.";delay(1000);cin.clear();cin.ignore(256,'\n');scientificCal();
    }
}
void scientificCal(){
    int x1,y1,x2,y2;
    cleardevice();
    setcolor(RED);settextstyle(1,HORIZ_DIR,4);
    outtextxy(160,20,"Scientific Calculator");
    setcolor(LIGHTBLUE);line(0,70,639,70);

    setcolor(WHITE);
    settextstyle(1,HORIZ_DIR,1);
    outtextxy(270,120,"Matrix");
    outtextxy(265,160,"Average");
    outtextxy(255,200,"Percentage");
    outtextxy(248,240,"Natural Log");
    outtextxy(275,280,"Log 10");
    outtextxy(190,320,"Trigonometric Calculation");
    outtextxy(220,360,"Quadratic Equation");

    setcolor(BLACK);
    rectangle(150,120,465,150);//for matrix
    rectangle(150,160,465,190);//for factorial
    rectangle(150,200,465,230);//for percentage
    rectangle(150,240,465,270);//for natural log
    rectangle(150,280,465,310);//for log 10
    rectangle(150,320,465,350);//for trigo calc
    rectangle(150,360,465,390);//for quadratic formula

    rectangle(0,440,50,470);    //exit
    rectangle(250,440,360,470);  //mainmenu
    rectangle(590,440,639,470);     //help

    setcolor(LIGHTBLUE);
    line(0,430,639,430);		//menu/exit/help
    setcolor(WHITE);
    outtextxy(10,440,"Exit");
    outtextxy(260,440,"MainMenu");
    outtextxy(600,440,"Help");

    setcolor(YELLOW);
    rectangle(150,120,465,150);
    x1=150;y1=120;x2=465;y2=150;
    choice2=getch();
    while(y1>=120 && y1<=440){
    if(choice2==80){sound(5000);delay(100);nosound();
	    setcolor(BLACK);rectangle(x1,y1,x2,y2);
	    if     (y1==120){y1=160;y2=190;x1=150;x2=465;}//to factorial
	    else if(y1==160){y1=200;y2=230;x1=150;x2=465;}//to percentage
	    else if(y1==200){y1=240;y2=270;x1=150;x2=465;}// natural log
	    else if(y1==240){y1=280;y2=310;x1=150;x2=465;}//to log 10
	    else if(y1==280){y1=320;y2=350;x1=150;x2=465;}// trigo calc
	    else if(y1==320){y1=360;y2=390;x1=150;x2=465;}//to trigo formula
	    else if(y1==360){x1=0;y1=440;x2=50;y2=470;}//to exit
	    else if(y1==440 && x1==0){x1=250;y1=440;x2=360;y2=470;}//to mainmenu
	    else if(y1==440 && x1==250){x1=590;y1=440;x2=639;y2=470;}//to help
	    else                       {y1=120;y2=150;x1=150;x2=465;}//to matrix
	    setcolor(YELLOW);rectangle(x1,y1,x2,y2);
    }
    if(choice2==72){sound(5000);delay(100);nosound();
	    setcolor(BLACK);rectangle(x1,y1,x2,y2);
	    if      (y1==440 && x1==590){x1=250;y1=440;x2=360;y2=470;}//to mainmenu
	    else if(y1==440 && x1==250){x1=0;y1=440;x2=50;y2=470;}//to exit
	    else if(y1==440 && x1==0){y1=360;y2=390;x1=150;x2=465;}//to trigo formula
        else if(y1==360){y1=320;y2=350;x1=150;x2=465;}//to trigo calc
        else if(y1==320){y1=280;y2=310;x1=150;x2=465;}// to log 10
        else if(y1==280){y1=240;y2=270;x1=150;x2=465;}//natural log
        else if(y1==240){y1=200;y2=230;x1=150;x2=465;}//percentage
        else if(y1==200){y1=160;y2=190;x1=150;x2=465;}//to factorial
        else if(y1==160){y1=120;y2=150;x1=150;x2=465;}//to matrix
        else {y1=440;x1=590;x2=639;y2=470;}         //to help
	    setcolor(YELLOW);rectangle(x1,y1,x2,y2);
    }
    if(choice2==13){
       if(y1==120){Matrix_Choice();}//matrix
       if(y1==160){     //average
                do{
            cleardevice();setcolor(RED);
            settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"SCIENTIFIC CALCULATOR");
            setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Average");
            setcolor(LIGHTBLUE);line(0,70,639,70);
            setcolor(YELLOW);rectangle(70,100,569,250);o=0;
            gotoxy(10,8);cout<<"\t\tEnter amount of number: ";cin>>x1;
            failscien();
            for(y1=1;y1<=x1;y1++){gotoxy(40,10);cout<<"      ";gotoxy(10,10);cout<<"\t\tEnter number "<<y1<<" : ";cin>>i;
            failscien();
                o=o+i;
            }
            gotoxy(10,12);cout<<"\t\tAverage is = "<<o/x1;
            gotoxy(10,14);cout<<"\t\tDo another (y,n)?: ";cin>>choice2;
            if(choice2!='y'){scientificCal();}
            }while(choice2=='y');
            }
       if(y1==200){//percentage
            do{
            cleardevice();setcolor(RED);
            settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"SCIENTIFIC CALCULATOR");
            setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Percentage");
            setcolor(LIGHTBLUE);line(0,70,639,70);
            setcolor(YELLOW);rectangle(70,100,569,250);
            gotoxy(10,8);cout<<"\t\tEnter number: ";cin>>i;
            failscien();
            gotoxy(10,10);cout<<"\t\tEnter percent: ";cin>>x1;
            failscien();
            gotoxy(10,12);cout<<"\t\t"<<x1<<" percent of "<<i<<" = "<<(i*x1)/100.0;
            gotoxy(10,14);cout<<"\t\tDo another (y,n)?: ";cin>>choice2;
            if(choice2!='y'){scientificCal();}
            }while(choice2=='y');
       }
       if(y1==240){//natural log
            do{
            cleardevice();setcolor(RED);
            settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"SCIENTIFIC CALCULATOR");
            setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Natural Log");
            setcolor(LIGHTBLUE);line(0,70,639,70);
            setcolor(YELLOW);rectangle(70,100,569,250);
            gotoxy(10,9);float ll;
            cout<<"\t\t\tLog ";cin>>ll;
            failscien();
                    if(ll<0){gotoxy(10,11);cout<<"\t\tError.The number cannot be less than 0";}
                    if(ll>0){gotoxy(10,11);cout<<"\t\t\tLog "<<ll<<" = "<<log(ll);}
                    gotoxy(10,13);cout<<"\t\t\tDo again(y/n): ";cin>>choice2;
                    if(choice2!='y'){scientificCal();}
                }while(choice2=='y');
       }
       if(y1==280){//log 10
            float ll;
            do{
            cleardevice();setcolor(RED);
            settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"SCINETIFIC CALCULATOR");
            setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Log 10");
            setcolor(LIGHTBLUE);line(0,70,639,70);
            setcolor(YELLOW);rectangle(70,100,569,250);gotoxy(10,9);
            cout<<"\t\t\tLog ";cin>>ll;
            failscien();
                if(ll<0){gotoxy(10,11);cout<<"\t\tError.The number cannot be less than 0.";}
                if(ll>0){gotoxy(10,11);cout<<"\t\t\tLog "<<ll<<" = "<<log10(ll);}
                    gotoxy(10,13);cout<<"\t\t\tDo again?(y/n): ";cin>>choice2;
                if(choice2!='y'){scientificCal();}
                }while(choice2=='y');
       }
       if(y1==320){Trigo_Calculate();}//trigonometric fun
       if(y1==360){quadratic();}//trigonometric formula
       if(y1==440 && x1==0){exit(0);}
       if(y1==440 && x1==250){mainMenu();}
       if(y1==440 && x1==590){helpsci();}
       }
    choice2=getch();
    }
}
void quadratic(){//error
    float n,r,v,h;
    do{
        cleardevice();setcolor(RED);
            settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"SCIENTIFIC CALCULATOR");
            setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Quadratic Formula");
            setcolor(LIGHTBLUE);line(0,70,639,70);
        setcolor(YELLOW);rectangle(70,100,569,300);
        gotoxy(10,8);
    cout<<"\t\tEnter coefficient a: ";cin>>o;
    failscien();
    gotoxy(10,10);cout<<"\t\tEnter coefficient b: ";cin>>h;
    failscien();
    gotoxy(10,12);cout<<"\t\tEnter coefficient c: ";cin>>c;
    failscien();
    n=h*h-4*o*c;
    if (n>0){
    tri=(-h+sqrt(n))/(2*o);
    ftri=(-h-sqrt(n))/(2*o);
    gotoxy(10,14);cout<<"\t\tx1 = "<<tri;
    gotoxy(10,15);cout<<"\t\tx2 = "<<ftri;
    }
    else if(n==0){
    tri=(-h + sqrt(n))/(2*o);
    gotoxy(10,14);cout<<"\t\tx1 = x2 = "<<tri;
    }
   else if(n<0)
   {
	gotoxy(10,14);cout<<"\t\tInvalid";
    }
    else{
    r=-h/(2*o);
    i=sqrt(-n)/(2*o);
    gotoxy(10,14);cout<<"\t\tx1 = "<<r<<"+"<<i;
    gotoxy(10,15);cout<<"\t\tx2 = "<<r<<"-"<<i;
    }
    gotoxy(10,17);cout<<"\t\tDo another(y/n)?: ";cin>>choice2;
    if(choice2!='y'){scientificCal();}
    }while(choice2=='y');
}
void Matrix_Choice(){//finished
	titlesci("Matrix Calculation");gotoxy(20,8);
	cout<<"\n\t\t1 - Add\t\t\t2 - Subtract";
	cout<<"\n\n\t\t3 - Multiple\t\t4 - Transpose";
	cout<<"\n\n\t\t5 - Exit";
	cout<<"\n\n\t\tEnter : ";
	choice2=getch();
	switch(choice2){
		case '1':Matrix_Add();break;
		case '2':Matrix_Sub();break;
		case '3':Matrix_Multi();break;
		case '4':Matrix_Tran();break;
		case '5':scientificCal();break;
		default:cout<<"\n\t\t\tInvalid input.";delay(1000);Matrix_Choice();
	}
}
void Matrix_Add(){//finished
    do{
    titlesci("Matrix Addition");
    setcolor(YELLOW);rectangle(40,90,620,420);
	int mat1[4][4],mat2[4][4],mat3[4][4];
	int i,j,g,h,k,row1,row2,col1,col2,aa;
		gotoxy(60,7);cout<<"    ";gotoxy(10,7);cout<<"\tEnter the no. of rows for first matrix  :  ";cin>>row1;
		failmatrix();
		gotoxy(60,7);cout<<"    ";gotoxy(10,7);cout<<"\tEnter the no. of columns for first matrix: ";cin>>col1;
		failmatrix();
        if(row1>4 || col1>4){gotoxy(10,9);cout<<"\tMaximum dimension is 4.Sorry!";getch();Matrix_Add();}
		gotoxy(10,8);cout<<"\tEnter the first matrix: ";
		for(i=0,g=0;i<row1;i++,g+=1){
			for(j=0,h=0;j<col1;j++,h+=5){
			gotoxy(50+h,8+g);cin>>mat1[i][j];}
			}
		gotoxy(60,13);cout<<"    ";gotoxy(10,13);cout<<"\tEnter the no. of rows for second matrix:     ";cin>>row2;
		failmatrix();
		gotoxy(60,13);cout<<"    ";gotoxy(10,13);cout<<"\tEnter the no. of columns for second matrix:  ";cin>>col2;
        if(row2>4 || col2>4){gotoxy(10,15);cout<<"\tMaximum dimension is 4.Sorry!";getch();Matrix_Add();}
        if(col1!=col2 || row1!=row2){
           gotoxy(10,15);cout<<"\t\t\tError!";gotoxy(10,17);cout<<"\tThe dimension of the two matrices has to be the same.";
           getch();Matrix_Choice();
        }
        gotoxy(10,14);cout<<"\tEnter the second matrix: ";
		for(i=0,g=0;i<row2;i++,g+=1){
			for(j=0,h=0;j<col2;j++,h+=5){
				gotoxy(50+h,14+g);cin>>mat2[i][j];}
		}
		for(i=0;i<row1;i++){
			for(j=0;j<col1;j++){
				mat3[i][j]=mat1[i][j]+mat2[i][j];}  //addition
		}
		matrixans(1,row1,col1,mat1,mat2,mat3);
		gotoxy(10,25);cout<<"\tDo again? (y/n): ";cin>>choice2;
		if(choice2!='y'){Matrix_Choice();}
	}while(choice2=='y');
}
void failmatrix(){
    if(cin.fail()){
        gotoxy(10,10); cout<<"\t\tInvalid Input.";delay(1000);cin.clear();cin.ignore(256,'\n');Matrix_Choice();
    }
}
void titlesci(char til[30]){
    char ary[30];
    cleardevice();setcolor(RED);
    sprintf(ary,til);
    settextstyle(1,HORIZ_DIR,2);outtextxy(70,20,"SCIENTIFIC");
    setcolor(LIGHTBLUE);line(0,70,639,70);
    setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,50,ary);
}
void Matrix_Sub(){//finished
    do{
    titlegeo("Matrix Subtraction");
    setcolor(YELLOW);rectangle(40,90,620,420);
	int mat1[4][4],mat2[4][4],mat3[4][4];
	int i,j,g,h,k,row1,row2,col1,col2,aa;
		gotoxy(60,7);cout<<"    ";gotoxy(10,7);cout<<"\tEnter the no. of rows for first matrix  :  ";cin>>row1;
		failmatrix();
		gotoxy(60,7);cout<<"    ";gotoxy(10,7);cout<<"\tEnter the no. of columns for first matrix: ";cin>>col1;
		failmatrix();
        if(row1>4 || col1>4){gotoxy(10,9);cout<<"\tMaximum dimension is 4.Sorry!";getch();Matrix_Add();}
		gotoxy(10,8);cout<<"\tEnter the first matrix: ";
		for(i=0,g=0;i<row1;i++,g+=1){
			for(j=0,h=0;j<col1;j++,h+=5){
			gotoxy(50+h,8+g);cin>>mat1[i][j];}
			}
		gotoxy(60,13);cout<<"    ";gotoxy(10,13);cout<<"\tEnter the no. of rows for second matrix:     ";cin>>row2;
		failmatrix();
		gotoxy(60,13);cout<<"    ";gotoxy(10,13);cout<<"\tEnter the no. of columns for second matrix:  ";cin>>col2;
        if(row2>4 || col2>4){gotoxy(10,15);cout<<"\tMaximum dimension is 4.Sorry!";getch();Matrix_Add();}
        if(col1!=col2 || row1!=row2){
           gotoxy(10,15);cout<<"\t\t\tError!";gotoxy(10,17);cout<<"\tThe dimension of the two matrices has to be the same.";
           getch();Matrix_Choice();
        }
        gotoxy(10,14);cout<<"\tEnter the second matrix: ";
		for(i=0,g=0;i<row2;i++,g+=1){
			for(j=0,h=0;j<col2;j++,h+=5){
				gotoxy(50+h,14+g);cin>>mat2[i][j];}
		}
		for(i=0;i<row1;i++){
			for(j=0;j<col1;j++){
				mat3[i][j]=mat1[i][j]-mat2[i][j];}  //subtraction
		}
		matrixans(2,row1,col1,mat1,mat2,mat3);
		gotoxy(10,25);cout<<"\tDo again? (y/n): ";cin>>choice2;
		if(choice2!='y'){
			Matrix_Choice();
		}
	}while(choice2=='y');
}
void matrixans(int op,int row1,int col1,int mat1[4][4],int mat2[4][4],int mat3[4][4]){
    int i,j,k,h,g;char ch;
    switch(op){
        case 1:ch='+';break;
        case 2:ch='-';break;
        case 3:ch='*';break;
        case 4:ch='\'';break;
        }
    gotoxy(30,20);cout<<ch;gotoxy(53,20);cout<<"=";
        gotoxy(10,19);
        for(i=0,g=0;i<row1;i++,g+=1){
			for(j=0,h=0;j<col1;j++,h+=5){
				gotoxy(9+h,19+g);cout<<mat1[i][j];} //first
		}
		for(i=0,g=0;i<row1;i++,g+=1){
			for(j=0,h=0;j<col1;j++,h+=5){
				gotoxy(32+h,19+g);cout<<mat2[i][j];} //second
		}
		for(i=0,g=0;i<row1;i++,g+=1){
			for(j=0,h=0;j<col1;j++,h+=5){
				gotoxy(55+h,19+g);cout<<mat3[i][j];} //answer
		}
}
void Matrix_Multi(){//finished
    do{
    titlesci("Matrix Multiplication");
    setcolor(YELLOW);rectangle(40,90,620,420);//for box
	int mat1[4][4],mat2[4][4],mat3[4][4];
	int i,j,g,h,k,row1,row2,col1,col2;
		gotoxy(60,7);cout<<"    ";gotoxy(10,7);cout<<"\tEnter the no. of rows for first matrix  :  ";cin>>row1;
		failmatrix();
		gotoxy(60,7);cout<<"    ";gotoxy(10,7);cout<<"\tEnter the no. of columns for first matrix: ";cin>>col1;
		failmatrix();
        if(row1>4 || col1>4){gotoxy(10,9);cout<<"\tMaximum dimension is 4.Sorry!";getch();Matrix_Multi();}
		gotoxy(10,8);cout<<"\tEnter the first matrix: ";
		for(i=0,g=0;i<row1;i++,g+=1){
			for(j=0,h=0;j<col1;j++,h+=5){
			gotoxy(50+h,8+g);cin>>mat1[i][j];
			}
		}
		gotoxy(60,13);cout<<"    ";gotoxy(10,13);cout<<"\tEnter the no. of rows for second matrix:     ";cin>>row2;
		failmatrix();
		gotoxy(60,13);cout<<"    ";gotoxy(10,13);cout<<"\tEnter the no. of columns for second matrix:  ";cin>>col2;
		failmatrix();
        if(row2>4 || col2>4){gotoxy(10,15);cout<<"\tMaximum dimension is 4.Sorry!";getch();Matrix_Multi();}
        if(col1!=row2){
           gotoxy(10,15);cout<<"\t\t\tError!First matrix's column and second matrix's row have to be the same";
           getch();Matrix_Choice();
        }
        gotoxy(10,14);cout<<"\tEnter the second matrix: ";
		for(i=0,g=0;i<row2;i++,g+=1){
			for(j=0,h=0;j<col2;j++,h+=5){
				gotoxy(50+h,14+g);cin>>mat2[i][j];}
		}
		for(i=0;i<row1;i++){
			for(j=0;j<col2;j++){
				mat3[i][j]=0;
				for(k=0;k<col1;k++){
					mat3[i][j]=mat3[i][j]+(mat1[i][k]*mat2[k][j]);
				}
			}
		}
		matrixans(3,row1,col2,mat1,mat2,mat3);
		gotoxy(10,25);cout<<"\tDo again? (y/n): ";cin>>choice2;
		if(choice2!='y'){
			Matrix_Choice();
		}
	}while(choice2=='y');
}
void Matrix_Tran(){//finished
    do{
    titlesci("Matrix Transportation");
    setcolor(YELLOW);rectangle(40,90,620,420);
	int mat1[4][4],mat2[4][4];
	int row1,col1,i,j,g,h;
       gotoxy(60,7);cout<<"    ";gotoxy(10,7);cout<<"\tEnter the no. of rows for first matrix  :  ";cin>>row1;
		failmatrix();
		gotoxy(60,7);cout<<"    ";gotoxy(10,7);cout<<"\tEnter the no. of columns for first matrix: ";cin>>col1;
		failmatrix();
        if(row1>4 || col1>4){gotoxy(10,9);cout<<"\tMaximum dimension is 4.Sorry!";getch();Matrix_Tran();}
		gotoxy(10,9);cout<<"\tEnter the  matrix: ";
		for(i=0,g=0;i<row1;i++,g+=1){
			for(j=0,h=0;j<col1;j++,h+=5){
			gotoxy(50+h,9+g);cin>>mat1[i][j];
			}
		}
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			mat2[j][i]=mat1[i][j];}
	}
	gotoxy(30,20);cout<<"\'";gotoxy(53,20);cout<<"=";
    for(i=0,g=0;i<row1;i++,g+=1){
			for(j=0,h=0;j<col1;j++,h+=5){
				gotoxy(9+h,19+g);cout<<mat1[i][j];} //first
		}
    for(i=0,g=0;i<col1;i++,g+=1){
			for(j=0,h=0;j<row1;j++,h+=5){
				gotoxy(55+h,19+g);cout<<mat2[i][j];} //answer
		}
		gotoxy(10,25);cout<<"\tDo again? (y/n): ";cin>>choice2;
		if(choice2!='y'){Matrix_Choice();}
	}while(choice2=='y');
}
void failtrigo(){
    if(cin.fail()){
        gotoxy(20,9);cout<<"\t\tInvalid Input.";delay(1000);cin.clear();cin.ignore(256,'\n');Trigo_Calculate();
    }
}
void Trigo_Calculate(){
    cleardevice();setcolor(RED);
    settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"SCIENTIFIC CALCULATOR");
    setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Trigonometric Calculation");
    setcolor(LIGHTBLUE);line(0,70,639,70);
    gotoxy(30,7);
	cout<<"\n\t\t1 - sin x\t\t7  - sinh x";
	cout<<"\n\n\t\t2 - cos x\t\t8  - cosh x";
	cout<<"\n\n\t\t3 - tan x\t\t9  - tanh x";
	cout<<"\n\n\t\t4 - cot x\t\t10 - coth x";
	cout<<"\n\n\t\t5 - sec x\t\t11 - sech x";
	cout<<"\n\n\t\t6 - cosec x\t\t12 - cosech x";
	cout<<"\n\n\t\t0 - Exit";
    cout<<"\n\n\t\tEnter: ";cin>>choice;
    while(cin.fail()){
        cout<<"\n\t\tInvalid Input.";delay(1000);cin.clear();cin.ignore(256,'\n');Trigo_Calculate();}
	switch(choice){
		case 0:scientificCal();break;
		case 1: do{titlesci("Sin Function");gotoxy(20,7);
                cout<<"\n\t\t\tSin ";cin>>tri;
                failtrigo();
                ftri=degRad(tri);
                cout<<"\n\t\t\tSin "<<tri<<" = "<<sin(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                break;
		case 2: do{titlesci("Co-sin Function");gotoxy(20,7);
                cout<<"\n\t\t\tCos ";cin>>tri;
                failtrigo();
                ftri=degRad(tri);
                cout<<"\n\t\t\tCos "<<tri<<" = "<<cos(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                break;
		case 3: do{titlesci("Tangent Function");gotoxy(20,7);
                cout<<"\n\t\t\tTan ";cin>>tri;
                failtrigo();
                ftri=degRad(tri);
                cout<<"\n\t\t\tTan "<<tri<<" = "<<tan(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                break;
		case 4: do{titlesci("Co-tangent Function");gotoxy(20,7);
                cout<<"\n\t\t\tCot ";cin>>tri;
                failtrigo();
                ftri=degRad(tri);
                cout<<"\n\t\t\tCot "<<tri<<" = "<<1/tan(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                break;
		case 5: do{titlesci("Secant Function");gotoxy(20,7);
                cout<<"\n\t\t\tSec ";cin>>tri;
                failtrigo();
                ftri=degRad(tri);
                cout<<"\n\t\t\tSec "<<tri<<" = "<<1/cos(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                break;
		case 6:  do{titlesci("Co-secant Function");gotoxy(20,7);
                cout<<"\n\t\t\tCosec ";cin>>tri;
                failtrigo();
                tri=degRad(tri);
                cout<<"\n\t\t\tCosec "<<ftri<<" = "<<1/sin(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                break;
		case 7: do{titlesci("Hyperbolic Sin Function");gotoxy(20,7);
                cout<<"\n\t\t\tSinh ";cin>>tri;
                failtrigo();
                ftri=degRad(tri);
                cout<<"\n\t\t\tSinh "<<tri<<" = "<<sinh(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                        break;
		case 8: do{titlesci("Hyperbolic Cos Function");gotoxy(20,7);
                cout<<"\n\t\t\tCosh ";cin>>tri;
                failtrigo();
                ftri=degRad(tri);
                cout<<"\n\t\t\tCosh "<<tri<<" = "<<cosh(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                break;
		case 9: do{titlesci("Hyperbolic Tan Function");gotoxy(20,7);
                cout<<"\n\t\t\tTanh ";cin>>tri;
                failtrigo();
                ftri=degRad(tri);
                cout<<"\n\t\t\tTanh "<<tri<<" = "<<tanh(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                        break;
		case 10: do{titlesci("Hyperbolic Cot Function");gotoxy(20,7);
                cout<<"\n\t\t\tCoth ";cin>>tri;
                failtrigo();
                ftri=degRad(tri);
                cout<<"\n\t\t\tCoth "<<tri<<" = "<<1/tanh(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                        break;
		case 11: do{titlesci("Hyperbolic Sec Function");gotoxy(20,7);
                cout<<"\n\t\t\tSec ";cin>>tri;
                failtrigo();
                ftri=degRad(tri);
                cout<<"\n\t\t\tSec "<<tri<<" = "<<1/cos(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                break;
		case 12: do{titlesci("Hyperbolic Cosec Function");gotoxy(20,7);
                cout<<"\n\t\t\tCosech ";cin>>tri;
                failtrigo();
                ftri=degRad(tri);
                cout<<"\n\t\t\tCosech "<<tri<<" = "<<1/sinh(ftri);
                cout<<"\n\n\t\t\tTry again(y/n): ";cin>>choice2;
                }while(choice2=='y');
                Trigo_Calculate();
                break;
		default:cout<<"\n\t\t\tInvalid Number.Try again!";delay(1000);Trigo_Calculate();
	}
}
float degRad(float deg){    //all finished
	float rad=deg*3.1412/180;
	return rad;
}
void geometricFormula(){
    int x1,y1,x2,y2;
    cleardevice();setcolor(RED);
    settextstyle(1,HORIZ_DIR,3);
	outtextxy(200,20,"GEOMETRIC FORMULA");gotoxy(20,7);

	setcolor(LIGHTBLUE);line(0,70,639,70);

    setcolor(WHITE);settextstyle(1,HORIZ_DIR,1);
    outtextxy(290,150,"Area");//frectangle
    outtextxy(280,200,"Volume");//in second left rect
    outtextxy(270,250,"Perimeter"); //in second right rect

    setcolor(YELLOW);
    rectangle(106,150,550,180);  //for a,s,m,d,r
    setcolor(BLACK);
    rectangle(106,200,550,230);//for power
    rectangle(106,250,550,280);//for square root

      rectangle(0,440,50,470);    //exit
      rectangle(250,440,360,470);  //mainmenu
      rectangle(590,440,639,470);     //help

    setcolor(LIGHTBLUE);
    line(0,430,639,430);		                //menu/exit/help line
    setcolor(WHITE);
    outtextxy(10,440,"Exit");
    outtextxy(260,440,"MainMenu");
    outtextxy(600,440,"Help");

    setcolor(YELLOW);
    rectangle(106,150,550,180);
    x1=106;y1=150;x2=550;y2=180;

    choice2=getch();
    while(y1>=150 && y1<=440){
    if(choice2==80){sound(5000);delay(100);nosound();
        setcolor(BLACK);rectangle(x1,y1,x2,y2);
        if     (y1==150){x1=106;x2=550;y1=200;y2=230;}    //to power
        else if(y1==200){x1=106;x2=550;y1=250;y2=280;}    //to square root
        else if(y1==250){y1=440;y2=470;x1=0;x2=50;}    //to exit
        else if(y1==440 && x1==0){x1=250;y1=440;x2=360;y2=470;}//to mainmenu
        else if(y1==440 && x1==250){x1=590;y1=440;x2=639;y2=470;}//to help
        else                       {x1=106;y1=150;x2=550;y2=180;}    //asmdr
        setcolor(YELLOW);rectangle(x1,y1,x2,y2);
    }
    if(choice2==72){sound(5000);delay(100);nosound();
        setcolor(BLACK);rectangle(x1,y1,x2,y2);
        if     (y1==440 && x1==590){x1=250;y1=440;x2=360;y2=470;}//to mainmenu
        else if(y1==440 && x1==250){y1=440;y2=470;x1=0;x2=50;}//to exit
        else if(y1==440 && x1==0){y1=250;y2=280;x1=106;x2=550;}    //to square root
        else if(y1==250){y1=200;y2=230;x1=106;x2=550;}    //to power
        else if(y1==200){y1=150;y2=180;x1=106;x2=550;}    //to asmdr
        else            {x1=590;y1=440;x2=639;y2=470;}    //to help
        setcolor(YELLOW);rectangle(x1,y1,x2,y2);
    }
    if(choice2==13){
        if(y1==150){areag();}
        if(y1==200){volumeg();}
        if(y1==250){perimeterg();}
        if(y1==440 && x1==0){exit(0);}
        if(y1==440 && x1==250){mainMenu();}
        if(y1==440 && x1==590){helpgeo();}
    }

    choice2=getch();
    }
}
void helpgeo(){
     cleardevice();
    settextstyle(1,HORIZ_DIR,4);setcolor(RED);
    outtextxy(250,20,"Help");
    setcolor(LIGHTBLUE);line(0,70,639,70);
      settextstyle(1,HORIZ_DIR,2);setcolor(YELLOW);
      outtextxy(200,80,"Geometric Formula");

    gotoxy(20,10);cout<<"\n\tYou can get the area ,volume and perimeter of different shaped object.";
    cout<<"\n\n\tAlso you can find the area ,volume and perimeter of them.";
    getch();
    geometricFormula();

}
void areag(){
cleardevice();float n,r,v,h;
int trapezoid[10]={420-50,110-30-10,482-50,110-30-10,502-50,192-30-10,400-50,192-30-10,420-50,110-30-10};
int triangle[8]={410-50-20+10,356-30-20-20,420-50+10,274-20-30-20,492-50+10,356-20-30-20,410-50-20+10,356-20-30-20};
int parallel[12]={584-40-10,110-30-10,666-40-10,110-30-10,646-40-10,192-30-10,646-40-10,192-30-10,564-40-10,192-30-10,584-40-10,110-30-10};
setfillstyle(SOLID_FILL,BLUE);

setcolor(RED);
settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"GEOMETRIC FORMULA");
setcolor(LIGHTBLUE);line(0,60,639,60);setcolor(YELLOW);
setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Area");

setcolor(LIGHTBLUE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
circle(118-40,146-30-10,36);floodfill(100,120,LIGHTBLUE);

ellipse(282-40-10,120-30-10,0,360,36,10);
line(246-40-10,120-30-10,246-50,192-30-10);
line(318-50,120-30-10,318-50,192-30-10);
ellipse(282-50,192-30-10,0,360,36,10);
floodfill(240,150,LIGHTBLUE);floodfill(240,85,LIGHTBLUE);

drawpoly(5,trapezoid);

drawpoly(6,parallel);

line(82-40,356-20-30-10-10-10,118-40,274-30-10-10-20-10);
line(118-40,274-20-30-10-10-10,154-40,356-30-10-20-10-10);
ellipse(118-40,356-30-10-10-10-20,0,360,36,10);
floodfill(100,310-10-20,LIGHTBLUE);

rectangle(246-50,274-30-20-10-10-10,328-50,356-10-20-30-10-10);
floodfill(200,240-10-20,LIGHTBLUE);

drawpoly(4,triangle);
floodfill(200,240-10-20,LIGHTBLUE);

ellipse(560-20+10,310-10-30-20-10-10,0,360,50,25);
floodfill(570,265-20,LIGHTBLUE);

bar3d(82*3-60+10-5,110-20+82*4-20-10-20-15-10,82*4-60-5-5+10,110-20-20-5+82*5-20-15-10-10,15,1);

rectangle(410-40-20,438-60-20-20,522-50,438-20-20-20);

setcolor(YELLOW);
outtextxy(27,80,"1.");
outtextxy(181,80,"2.");
outtextxy(335,80,"3.");
outtextxy(509,80,"4.");
outtextxy(27,224-10-20,"5.");
outtextxy(181,224-10-20,"6.");
outtextxy(335,224-10-20,"7.");
outtextxy(509,224-10-20,"8.");
outtextxy(181,368-20-20,"9.");
outtextxy(335,368-20-20,"10.");

outtextxy(47,167,"Circle.");
outtextxy(201,167,"Cylinder.");
outtextxy(355,167,"Trapezoid.");
outtextxy(509,167,"Parallelogram.");
outtextxy(47,296,"Cone.");
outtextxy(201,296,"Square.");
outtextxy(355,296,"Triangle.");
outtextxy(529,296,"Ellipse.");
outtextxy(201,425,"Cube.");
outtextxy(370,425,"Rectangle.");

outtextxy(40,450,"Enter '0' to exit.");
char pi=227,sq=253;char half=171;
gotoxy(5,25);cout<<"Enter : ";cin>>choice;
failareag();
switch(choice){
    case 1: do{
                titlegeo("Area of Circle");
                setcolor(LIGHTBLUE);circle(319,170,50);
                gotoxy(38,15);cout<<"A = "<<pi<<"r"<<sq;
                gotoxy(20,21);cout<<"\tEnter radius: ";cin>>i;
                failareag();
                o=::pi*i*i;
                gotoxy(20,23);cout<<"\tArea of the circle = "<<o;
                gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
                if(choice2!='y'){areag();}
                }while(choice2=='y');
    case 2:do{
                titlegeo("Area of Cylinder");
                setcolor(LIGHTBLUE);ellipse(319,130,0,360,30,10);
                line(289,130,289,190);line(349,130,349,190);
                ellipse(319,190,0,360,30,10);
                gotoxy(35,15);cout<<"A = 2"<<pi<<"r"<<sq<<"+ 2"<<pi<<"rh";
                gotoxy(20,19);cout<<"\tEnter radius: ";cin>>r;
                  failareag();
                gotoxy(20,21);cout<<"\tEnter height: ";cin>>h;
                  failareag();
                n=(2*::pi*r*r)+(2*::pi*r*h);
                gotoxy(20,23);cout<<"\tArea of the cylinder = "<<n;
                gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
                if(choice2!='y'){areag();}
            }while(choice2=='y');
    case 3:do{
                 titlegeo("Area of Trapezoid");
                setcolor(LIGHTBLUE);line(270,80,370,80);line(370,80,390,180);
                line(390,180,250,180);line(250,180,270,80);
                gotoxy(35,14);cout<<"A ="<<half<<"h(a+b)";
        gotoxy(20,17);cout<<"\tEnter length: ";cin>>r;
         failareag();
        gotoxy(20,19);cout<<"\tEnter length: ";cin>>v;
         failareag();
        gotoxy(20,21);cout<<"\tEnter height: ";cin>>h;
        failareag();
        gotoxy(20,23);cout<<"\tArea of the trapezoid = "<<h*(r+v)/2;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){areag();}
    }while(choice2=='y');
    case 4:
	do{          titlegeo("Area of Parallelogram");
                setcolor(LIGHTBLUE);line(300,100,400,100);line(400,100,380,200);
                line(380,200,280,200);line(280,200,300,100);
                gotoxy(35,15);cout<<"A = ah";
	    gotoxy(20,19);cout<<"\tEnter length: ";cin>>r;
	   failareag();
        gotoxy(20,21);cout<<"\tEnter height: "; cin>>h;
          failareag();
        gotoxy(20,23);cout<<"\tArea of the parallelogram = "<<r*h;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){areag();}
    }while(choice2=='y');
    case 5:
	do{          titlegeo("Area of Cone");
                setcolor(LIGHTBLUE);ellipse(319,200,0,360,40,10);
                line(279,200,319,80);line(359,200,319,80);
                gotoxy(35,15);cout<<"A = "<<pi<<"r(r+s)";
        gotoxy(20,19);cout<<"\tEnter radius: ";cin>>r;
         failareag();
        gotoxy(20,21);cout<<"\tEnter height: "; cin>>v;
          failareag();
        o=::pi*r;i=r+v;
        gotoxy(20,23);cout<<"\tArea of the cone = "<<o*i;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){areag();}
	}while(choice2=='y');
    case 6:
	do{         titlegeo("Area of Square");
                setcolor(LIGHTBLUE);rectangle(250,100,350,200);
                gotoxy(35,15);cout<<"A = a"<<sq;
        gotoxy(20,21);cout<<"\tEnter length: ";cin>>o;
         failareag();
        gotoxy(20,23);cout<<"\tArea of the square = "<<o*o;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){areag();}
    }while(choice2=='y');
    case 7:
	do{         titlegeo("Area of Triangle");
                setcolor(LIGHTBLUE);line(250,200,280,100);line(280,100,350,200);line(350,200,250,200);
                gotoxy(35,15);cout<<"A = "<<half<<" ah";
        gotoxy(20,19);cout<<"\tEnter height: ";cin>>r;
        failareag();
        gotoxy(20,21);cout<<"\tEnter base: ";cin>>h;
         failareag();
        v=(r*h)/2;
        gotoxy(20,23);cout<<"\tArea of the triangle = "<<v;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){areag();}
    }while(choice2=='y');
    case 8:
    do{          titlegeo("Area of Ellipse");
                setcolor(LIGHTBLUE);ellipse(319,150,0,360,70,30);
                gotoxy(35,15);cout<<"A = "<<pi<<"ab";
        gotoxy(20,19);cout<<"\tEnter horizontal radius: ";cin>>i;
       failareag();
        gotoxy(20,21);cout<<"\tEnter vertical   radius: ";cin>>o;
        failareag();
        gotoxy(20,23);cout<<"\tArea of the ellipse = "<<::pi*i*o;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){areag();}
    }while(choice2=='y');
    case 9:
	do{          titlegeo("Area of Cube");
                setcolor(LIGHTBLUE);bar3d(300,150,380,230,20,1);
                gotoxy(35,17);cout<<"A = 6a"<<sq;
        gotoxy(20,21);cout<<"\tEnter length: ";cin>>i;
      failareag();
        r=6*i*i;
        gotoxy(20,23);cout<<"\tArea of the cube = "<<r;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){areag();}
    }while(choice2=='y');
    case 10:
	do{         titlegeo("Area of Rectangle");
                setcolor(LIGHTBLUE);rectangle(220,100,370,170);
                gotoxy(35,15);cout<<"A = ab";
        gotoxy(20,19);cout<<"\tEnter length: ";cin>>i;
         failareag();
        gotoxy(20,21);cout<<"\tEnter height: ";cin>>o;
         failareag();
        gotoxy(20,23);cout<<"\tArea of the rectangle = "<<i*o;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){areag();}
    }while(choice2=='y');
    case 0:geometricFormula();break;
    default :geometricFormula();break;
}
}
void failareag(){
    if(cin.fail()){
        gotoxy(20,23);cout<<"\tInvalid Input.";delay(1000);cin.clear();cin.ignore(256,'\n');areag();
    }
}
void failvolumeg(){
    if(cin.fail()){
        gotoxy(20,23);cout<<"\tInvalid Input.";delay(1000);cin.clear();cin.ignore(256,'\n');volumeg();
        }
}
void failperimeter(){
if(cin.fail()){
    gotoxy(20,23);cout<<"\tInvalid Input.";delay(1000);cin.clear();cin.ignore(256,'\n');perimeterg();
}
}
void volumeg(){
    cleardevice();float n,r,v,h;
setcolor(RED);
settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"GEOMETRIC FORMULA");
setcolor(LIGHTBLUE);line(0,60,639,60);
setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Volume");
setfillstyle(SOLID_FILL,BLUE);
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    setcolor(LIGHTBLUE);
    line(65,140,100,70);line(100,70,135,140);//cone
    ellipse(100,140,0,360,35,10);
    floodfill(120,145,LIGHTBLUE);

    int triangle[8]={45,290,90,220,125,290,45,290};
    drawpoly(5,triangle);//triangle
    line(90,220,130,270);line(130,270,125,290);
    floodfill(70,260,LIGHTBLUE);

    ellipse(530,380,0,360,50,20);//ellipse
    ellipse(530,380,0,360,10,20);
    ellipse(530,380,0,360,50,10);

    bar3d(250,110,350,140,20,1);//rectangle

    circle(290,250,40);//circle
    ellipse(290,250,0,360,40,20);
    ellipse(290,250,0,360,20,40);
    floodfill(300,260,LIGHTBLUE);

    bar3d(500,110,550,160,20,1);//cube
    ellipse(535,230,0,360,35,10);//cylinder
    ellipse(535,290,0,360,35,10);
    line(500,230,500,290);line(570,230,570,290);
    floodfill(560,235,LIGHTBLUE);floodfill(560,295,LIGHTBLUE);

    setcolor(YELLOW);
    outtextxy(500,410,"Ellipsoid");outtextxy(485,355,"7.");//ellipse
    outtextxy(270,310,"Sphere");outtextxy(235,230,"5.");//circle
    outtextxy(55,310,"Triangle");outtextxy(50,230,"4.");//pyramid
    outtextxy(510,120+50,"Cube");outtextxy(485,110,"3.");//cube
    outtextxy(85,120+50,"Cone");outtextxy(50,110,"1.");//cone
    outtextxy(250,120+50,"Parallelepiped");outtextxy(235,110,"2.");
    outtextxy(505,310,"Cylinder");outtextxy(485,230,"6.");//cylinder

    outtextxy(40,450,"Enter '0' to exit.");
    char pi=227,sq=253;
    gotoxy(7,25);cout<<"Enter: ";
    choice2=getch();//cin>>choice2;
    switch(choice2){
        case '1':
    do{titlegeo("Volume of Cone");
            setcolor(LIGHTBLUE);
            ellipse(319,200,0,360,50,20);line(269,200,319,90);line(369,200,319,90);
            gotoxy(35,15);cout<<"V = ("<<pi<<"r"<<sq<<"h)/3";
        gotoxy(20,19);cout<<"\tEnter radius: ";cin>>r;failvolumeg();
        gotoxy(20,21);cout<<"\tEnter height: ";cin>>h;failvolumeg();
        v=::pi*r*r*h/3;
        gotoxy(20,23);cout<<"\tVolume of cone = "<<v;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){volumeg();}
    }while(choice2=='y');
        case '2':
    do{ titlegeo("Volume of Parallelepiped");
        setcolor(LIGHTBLUE);bar3d(260,130,380,170,20,1);
        gotoxy(35,14);cout<<"V = a.b.c";
        gotoxy(20,17);cout<<"\tEnter length: ";cin>>r;failvolumeg();
        gotoxy(20,19);cout<<"\tEnter height: ";cin>>v;failvolumeg();
        gotoxy(20,21);cout<<"\tEnter depth: ";cin>>h;failvolumeg();
        n=h*v*r;
        gotoxy(20,23);cout<<"\tVolume of parallelepiped = "<<n;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){volumeg();}
    }while(choice2=='y');
        case '3':
    do{ titlegeo("Volume of Cube");
        setcolor(LIGHTBLUE);bar3d(280,100,380,200,20,1);
        gotoxy(35,15);cout<<"V = a.a"<<sq;
        gotoxy(20,21);cout<<"\tEnter length: ";cin>>i;failvolumeg();
        o=i*i*i;
        gotoxy(20,23);cout<<"\tVolume of cube = "<<o;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){volumeg();}
    }while(choice2=='y');
        case '4':
    do{ titlegeo("Volume of Pyramid");
                setcolor(LIGHTBLUE);line(260,200,340,200);line(260,200,310,100);line(340,200,310,100);
                line(340,200,360,180);line(360,180,310,100);
                gotoxy(35,15);cout<<"V = (S.h)/3";
        gotoxy(20,19);cout<<"\tEnter the base area: ";cin>>i;failvolumeg();
        gotoxy(20,21);cout<<"\tEnter height: ";cin>>o;failvolumeg();
        v=1*i*o/3;
        gotoxy(20,23);cout<<"\tVolume of pyramid = "<<v;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){volumeg();}
    }while(choice2=='y');
        case '5':
    do{ titlegeo("Volume of Sphere");
                setcolor(LIGHTBLUE);circle(319,150,50);ellipse(319,150,0,360,50,20);
                ellipse(319,150,0,360,20,50);
                gotoxy(35,15);cout<<"V = (4."<<pi<<"r.r.r)/3";
        gotoxy(20,21);cout<<"\tEnter radius: ";cin>>r;failvolumeg();
        v=4*::pi*r*r*r/3;
        gotoxy(20,23);cout<<"\tVolume of sphere = "<<v;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){volumeg();}
    }while(choice2=='y');
        case '6':
    do{ titlegeo("Volume of Cylinder");
                setcolor(LIGHTBLUE);ellipse(319,130,0,360,40,10);
                line(279,130,279,200);line(359,130,359,200);
                ellipse(319,200,0,360,40,10);
                gotoxy(35,15);cout<<"V = "<<pi<<"r"<<sq<<"h";
        gotoxy(20,19);cout<<"\tEnter radius: ";cin>>r;failvolumeg();
        gotoxy(20,21);cout<<"\tEnter height: ";cin>>h;failvolumeg();
        v=::pi*r*r*h;
        gotoxy(20,23);cout<<"\tVolume of cylinder = "<<v;
        gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){volumeg();}
    }while(choice2=='y');
        case '7':do{
                titlegeo("Volume of Ellipsoid");
                setcolor(LIGHTBLUE);ellipse(319,150,0,360,60,30);ellipse(319,150,0,360,60,10);
                ellipse(319,150,0,360,10,30);
                gotoxy(35,15);cout<<"V =(4."<<pi<<".r1.r2.r3)/3";
                    gotoxy(20,17);cout<<"\tEnter radius 1: ";cin>>r;
                    gotoxy(20,19);cout<<"\tEnter radius 2: ";cin>>v;
                    gotoxy(20,21);cout<<"\tEnter radius 3: ";cin>>h;
                    n=4*::pi*r*v*h/3;
                    gotoxy(20,23);cout<<"\tVolume of ellipsoid = "<<n;
                    gotoxy(20,25);cout<<"\tDo another (y/n)?: ";cin>>choice2;
                    if(choice2!='y'){volumeg();}
                }while(choice2=='y');
        case '0':geometricFormula();break;
        default :geometricFormula();break;
    }
}
void titlegeo(char til[30]){
    char ary[30];
    cleardevice();setcolor(RED);
    sprintf(ary,til);
    settextstyle(1,HORIZ_DIR,2);outtextxy(70,20,"GEOMETRIC FORMULA");
    setcolor(LIGHTBLUE);line(0,70,639,70);
    setcolor(YELLOW);rectangle(100,250,540,430);
    settextstyle(0,HORIZ_DIR,1);outtextxy(70,50,ary);
}
void perimeterg(){
cleardevice();float n,r,v,h;
setcolor(RED);
settextstyle(1,HORIZ_DIR,2);outtextxy(70,10,"GEOMETRIC FORMULA");
setcolor(LIGHTBLUE);line(0,60,639,60);
setcolor(YELLOW);settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Perimeter");
setfillstyle(SOLID_FILL,BLUE);
    setcolor(LIGHTBLUE);
    circle(100,110,40);      //circle
    floodfill(130,130,LIGHTBLUE);

    int trapezoid[10]={275,70,335,70,350,150,260,150,275,70};
    drawpoly(5,trapezoid);  //trapezoid
    floodfill(290,90,LIGHTBLUE);

    rectangle(450,70,570,150);//rectangle
    floodfill(460,90,LIGHTBLUE);

    int triangle[8]={80,300,90,220,140,300,80,300};
    drawpoly(4,triangle);   //triangle
    floodfill(100,280,LIGHTBLUE);

    rectangle(270,220,350,300);//square
    floodfill(290,280,LIGHTBLUE);

    ellipse(510,260,0,360,60,30);//ellipse
    floodfill(530,270,LIGHTBLUE);

    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);     //rechange the font size for formula
    setcolor(YELLOW);
    outtextxy(480,320,"Ellipse");
    outtextxy(280,320,"Square");
    outtextxy(80,320,"Triangle");
    outtextxy(480,170,"Rectangle");
    outtextxy(260,170,"Trapezoid");
    outtextxy(80,170,"Circle");

    outtextxy(50,70,"1.");
    outtextxy(250,70,"2.");
    outtextxy(430,70,"3.");
    outtextxy(50,220,"4.");
    outtextxy(250,220,"5.");
    outtextxy(430,230,"6.");

    outtextxy(40,450,"Enter '0' to exit.");
   char pi=227,sq=253;
    gotoxy(10,25);cout<<"Enter: ";//cin>>choice2;
    choice2=getch();
    switch(choice2){
        case '1':do{
                titlegeo("Perimeter of Circle");
                setcolor(LIGHTBLUE);circle(319,170,50);
                gotoxy(35,18);cout<<"P = 2"<<pi<<"r";failperimeter();
                gotoxy(20,21);cout<<"Enter radius:";cin>>r;failperimeter();
                v=2*::pi*r;
                gotoxy(20,23);cout<<"Perimeter of circle = "<<v;
                gotoxy(20,25);cout<<"Do another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){perimeterg();}
	}while(choice2=='y');
        case '2':do{ titlegeo("Perimeter of Trapezoid");
                setcolor(LIGHTBLUE);line(270,80,370,80);line(370,80,390,180);
                line(390,180,250,180);line(250,180,270,80);
                gotoxy(35,14);cout<<"P = a+b+c+d";
                gotoxy(20,18);cout<<"Enter first length : ";cin>>i;failperimeter();
                gotoxy(20,19);cout<<"Enter second length: ";cin>>o;failperimeter();
                gotoxy(20,20);cout<<"Enter third length : ";cin>>r;failperimeter();
                gotoxy(20,21);cout<<"Enter fourth length: ";cin>>v;failperimeter();
                h=i+o+r+v;
                gotoxy(20,23);cout<<"Perimeter of trapezoid = "<<h;
                gotoxy(20,25);cout<<"Do another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){perimeterg();}
	}while(choice2=='y');
        case '3':do{ titlegeo("Perimeter of Rectangle");
                setcolor(LIGHTBLUE);rectangle(240,100,360,180);
                gotoxy(35,15);cout<<"P = 2(a+b)";
                gotoxy(20,19);cout<<"Enter length:";cin>>i;failperimeter();
                gotoxy(20,21);cout<<"Enter height:";cin>>o;failperimeter();
                gotoxy(20,23);cout<<"Perimeter of rectangle = "<<2*(i+o);
                gotoxy(20,25);cout<<"Do another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){perimeterg();}
	}while(choice2=='y');
        case '4':do{ titlegeo("Perimeter of Triangle");
                setcolor(LIGHTBLUE);line(250,200,280,100);line(280,100,350,200);line(350,200,250,200);
                gotoxy(35,15);cout<<"P = a+b+c";
        gotoxy(20,17);cout<<"Enter first length: ";cin>>i;failperimeter();
        gotoxy(20,19);cout<<"Enter second length: ";cin>>v;failperimeter();
        gotoxy(20,21);cout<<"Enter third length: ";cin>>o;failperimeter();
        gotoxy(20,23);cout<<"Perimeter of triangle = "<<i+o+v;
        gotoxy(20,25);cout<<"Do another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){perimeterg();}
	}while(choice2=='y');
        case '5':do{ titlegeo("Perimeter of Square");
                setcolor(LIGHTBLUE);rectangle(250,100,350,200);
                gotoxy(35,15);cout<<"P = 4a";
        gotoxy(20,21);cout<<"Enter length: ";cin>>i;failperimeter();
        gotoxy(20,23);cout<<"Perimeter of square = "<<4*i;
        gotoxy(20,25);cout<<"Do another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){perimeterg();}
    }while(choice2=='y');
        case '6':do{ titlegeo("Perimeter of Ellipse");
                setcolor(LIGHTBLUE);ellipse(319,150,0,360,60,30);
                gotoxy(35,14);cout<<"P = 2"<<pi<<" (a"<<sq<<"+b"<<sq<<")/2";
                gotoxy(20,19);cout<<"Enter length: ";cin>>o;failperimeter();
                gotoxy(20,21);cout<<"Enter length: ";cin>>i;failperimeter();
                r=(i*i+o*o)/2;
                v=2*::pi*sqrt(r);
                gotoxy(20,23);cout<<"Perimeter of ellipse = "<<v;
                gotoxy(20,25);cout<<"Do another (y/n)?: ";cin>>choice2;
        if(choice2!='y'){perimeterg();}
	}while(choice2=='y');
	case '0':geometricFormula();break;
	default :geometricFormula();break;
    }
}
void cryptoGraphy(){
    int x1,y1,x2,y2;
    cleardevice();setcolor(RED);
    settextstyle(1,HORIZ_DIR,3);outtextxy(230,20,"CRYPTOGRAPHY");
    setcolor(LIGHTBLUE);line(0,70,639,70);
    gotoxy(20,7);
    setcolor(WHITE);settextstyle(1,HORIZ_DIR,1);
    outtextxy(210,200,"Encrypt the Sentence");//in second left rect
    outtextxy(210,250,"Decrypt the Sentence"); //in second right rect

    setcolor(YELLOW);
    rectangle(106,200,550,230);//for power
    setcolor(BLACK);
    rectangle(106,250,550,280);//for square root

      rectangle(0,440,50,470);    //exit
      rectangle(250,440,360,470);  //mainmenu
      rectangle(590,440,639,470);     //help

    setcolor(LIGHTBLUE);
    line(0,430,639,430);		                //menu/exit/help
    setcolor(WHITE);
    outtextxy(10,440,"Exit");
    outtextxy(260,440,"MainMenu");
    outtextxy(600,440,"Help");

    setcolor(YELLOW);
    rectangle(106,200,550,230);
    x1=106;y1=200;x2=550;y2=230;
    choice2=getch();
    while(y1>=200 && y1<=440){
    if(choice2==80){sound(5000);delay(100);nosound();
        setcolor(BLACK);rectangle(x1,y1,x2,y2);
        if(y1==200){x1=106;x2=550;y1=250;y2=280;}
        else if(y1==250){y1=440;y2=470;x1=0;x2=50;}
        else if(y1==440 && x1==0){x1=250;y1=440;x2=360;y2=470;}//to mainmenu
        else if(y1==440 && x1==250){x1=590;y1=440;x2=639;y2=470;}//to help
        else                       {x1=106;y1=200;x2=550;y2=230;}    //asmdr
        setcolor(YELLOW);rectangle(x1,y1,x2,y2);
    }
    if(choice2==72){sound(5000);delay(100);nosound();
        setcolor(BLACK);rectangle(x1,y1,x2,y2);
        if     (y1==440 && x1==590){x1=250;y1=440;x2=360;y2=470;}//to mainmenu
        else if(y1==440 && x1==250){y1=440;y2=470;x1=0;x2=50;}//to exit
        else if(y1==440 && x1==0){x1=106;x2=550;y1=250;y2=280;}//to fraction
        else if(y1==250){y1=200;y2=230;x1=106;x2=550;}    //to power
        else {x1=590;y1=440;x2=639;y2=470;}    //to asmdr
        setcolor(YELLOW);rectangle(x1,y1,x2,y2);
    }
    if(choice2==13){
        if(y1==200){encrypt();}
        if(y1==250){decrypt();}
        if(y1==440 && x1==0){exit(0);}
        if(y1==440 && x1==250){mainMenu();}
        if(y1==440 && x1==590){helpcrypto();}
    }
    choice2=getch();
}
}
void helpcrypto(){
    cleardevice();
    settextstyle(1,HORIZ_DIR,4);setcolor(RED);
    outtextxy(250,20,"Help");
    setcolor(LIGHTBLUE);line(0,70,639,70);
    settextstyle(1,HORIZ_DIR,2);setcolor(YELLOW);
    outtextxy(200,80,"Cryptography");

    gotoxy(10,8);cout<<"\tCryptography is the subject of transforming information \n\tso that it cannot be easily known or recovered without special \n\tknowledge.";
    cout<<"\n\tYou can encrypt the message or decrypt so that your information \n\tis secret.";
    getch();
    cryptoGraphy();
}
void encrypt(){ //finished
    do{
      cleardevice();setcolor(RED);
        settextstyle(1,HORIZ_DIR,2);outtextxy(70,20,"CRYPTOGRAPHY");
        setcolor(YELLOW);
        settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Encryption");
        setcolor(LIGHTBLUE);line(0,70,639,70);
        setcolor(YELLOW);rectangle(70,100,569,300);
        gotoxy(20,9);cout<<"\tEnter the sentence : ";gets(str);
        gotoxy(20,11);cout<<"\tEnter the code number: ";cin>>code;
        process(code);
        gotoxy(20,13);cout<<"\tEncrypted Sentence : ";
        for(a=0;a<strlen(str);a++)
        cout<<str[a];
        gotoxy(20,15);cout<<"\tDo another(y/n): ";cin>>choice2;
        if(choice2!='y'){cryptoGraphy();}
    }while(choice2=='y');
}
void decrypt(){ //finished
    do{
     cleardevice();setcolor(RED);
        settextstyle(1,HORIZ_DIR,2);outtextxy(70,20,"CRYPTOGRAPHY");
        setcolor(YELLOW);
        settextstyle(0,HORIZ_DIR,1);outtextxy(70,40,"Decryption");
        setcolor(LIGHTBLUE);line(0,70,639,70);
        setcolor(YELLOW);rectangle(70,100,569,300);
        gotoxy(20,9);cout<<"\tEnter the sentence : ";gets(str);
        gotoxy(20,11);cout<<"\tEnter the code number: ";cin>>code;
        processd(code);
        gotoxy(20,13);cout<<"\tDecrypted Sentence : ";
        for(a=0;a<strlen(str);a++)
        cout<<str[a];
        gotoxy(20,15);cout<<"\tDo another(y/n): ";cin>>choice2;
        if(choice2!='y'){mainMenu();}
    }while(choice2=='y');
}
void process(int choice){
    int ans,b;
    for(a=0;a<strlen(str);a++){str[a]=tolower(str[a]);}
	for(a=0;a<strlen(str);a++){
	 	for(b='a',num1=0;a<='z';b++,num1++){
            if(str[a]==b){ans=(num1+choice)%26;break;}
            if(str[a]==' '){ans=26;break;}
        }
        for(num1=0,b='a';num1<=25;num1++,b++){
            if(ans==num1){str[a]=b;break;}
            if(ans==26){str[a]=' ';break;}
        }
	}//for-end
}//void process
void processd(int choice){
    int ans,b;
    for(a=0;a<strlen(str);a++){str[a]=tolower(str[a]);}
	for(a=0;a<strlen(str);a++){
        for(b='a',num1=0;a<='z';b++,num1++){
            if(str[a]==b){ans=(num1-choice)%26;break;}
            if(str[a]==' '){ans=26;break;}
        }
        if(ans<0){ans=26+ans;}
        for(num1=0,b='a';num1<=25;num1++,b++){
            if(ans==num1){str[a]=b;break;}
            if(ans==26){str[a]=' ';break;}
        }
	}//for-end
}//void process
void gaMe(){
    int x1,y1,x2,y2;
    cleardevice();
    settextstyle(1,HORIZ_DIR,4);setcolor(RED);
    outtextxy(275,10,"GAME");setcolor(LIGHTBLUE);line(0,60,639,60);

    setcolor(WHITE);settextstyle(3,HORIZ_DIR,1);

    outtextxy(236,80,"Fast Mathematics");
    outtextxy(269,130,"Puzzle");
    outtextxy(219,180,"Fifteen Tic Tac Toe");

    setcolor(YELLOW);
      rectangle(200,80,420,110);    //fast math
      setcolor(BLACK);
      rectangle(200,130,420,160);   //car race
      rectangle(200,180,420,210);   //fifteen tic
      //rectangle(200,230,420,260);   //puzzle

      rectangle(0,440,50,470);    //exit
      rectangle(250,440,360,470);  //mainmenu
      rectangle(590,440,639,470);     //help

    setcolor(LIGHTBLUE);
    line(0,430,639,430);		                //menu/exit/help
    setcolor(WHITE);
    outtextxy(10,440,"Exit");
    outtextxy(260,440,"MainMenu");
    outtextxy(600,440,"Help");

    x1=200,y1=80,x2=420,y2=110;
    choice2=getch();
    while(y1>=80 && y1<=440){
    if(choice2==80){sound(5000);delay(100);nosound();
	    setcolor(BLACK);rectangle(x1,y1,x2,y2);
            if     (y1==80) {x1=200;x2=420;y1=130;y2=160;}//to car race
            else if(y1==130){x1=200;x2=420;y1=180;y2=210;}//to fifteen tic
            //else if(y1==180){x1=200;x2=420;y1=230;y2=260;}//to puzzle
            else if(y1==180){x1=0;y1=440;x2=50;y2=470;}//to exit
            else if(y1==440 && x1==0){x1=250;y1=440;x2=360;y2=470;}//to mainmenu
            else if(y1==440 && x1==250){y1=440;x1=590;x2=639;y2=470;}//to help
            else            {x1=200;x2=420;y1=80;y2=110;}//to fast math
            setcolor(YELLOW);rectangle(x1,y1,x2,y2);
    }
    if(choice2==72){sound(5000);delay(100);nosound();
            setcolor(BLACK);rectangle(x1,y1,x2,y2);
            if  (y1==440 && x1==590){x1=250;y1=440;x2=360;y2=470;}//to mainmenu
            else if(y1==440 && x1==250){x1=0;y1=440;x2=50;y2=470;}//to exit
            //else if(y1==440 && x1==0){x1=200;x2=420;y1=230;y2=260;}//to puzzle
            else if(y1==440 && x1==0){x1=200;x2=420;y1=180,y2=210;}//to fifteen tic
            else if(y1==180){x1=200;x2=420;y1=130;y2=160;}//to car race
            else if(y1==130){x1=200;x2=420;y1=80;y2=110;}//to fast math
            else            {y1=440;x1=590;x2=639;y2=470;}//to help
            setcolor(YELLOW);rectangle(x1,y1,x2,y2);
    }
    if(choice2==13){
        if(y1==80)  {fastMathgame1();break;}
        if(y1==130) {puzzle();break;}
        if(y1==180) {fifteenTic1();break;}
        //if(y1==230) {puzzLe();break;}
        if(y1==440 && x1==0){exit(0);}
        if(y1==440 && x1==250){mainMenu();break;}
        if(y1==440 && x1==590){helpgame();break;}
    }
    choice2=getch();
}
}
void titlefastmath(){
    cleardevice();setcolor(LIGHTBLUE);line(0,70,639,70);
    settextstyle(1,HORIZ_DIR,3);
    setcolor(RED);outtextxy(250,20,"FAST MATH ");gotoxy(20,7);
    srand(time(0));flag=1;score=0;
}
void fastMathgame1(){
    Fast();
    fastMathgame2();
}
void fastMathgame2(){
    cleardevice();
    settextstyle(1,HORIZ_DIR,3);
    setcolor(RED);
	outtextxy(250,20,"FAST MATH ");setcolor(YELLOW);
	outtextxy(240,70,"Game");gotoxy(20,7);
	setcolor(LIGHTBLUE);line(0,70,639,70);
    cout<<"\n\n\t\t\t1. Addition";
    cout<<"\n\n\t\t\t2. Subtraction";
    cout<<"\n\n\t\t\t3. Multiplication";
    cout<<"\n\n\t\t\t4. Division";
    cout<<"\n\n\t\t\t5. Remainder";
    cout<<"\n\n\t\t\t6. Random Calculation";
    cout<<"\n\n\t\t\t0. Exit";
    cout<<"\n\n\t\t\tEnter : ";
    choice2=getch();
    switch(choice2){
        case '1':addGame();break;
        case '2':subGame();break;
        case '3':mulGame();break;
        case '4':divGame();break;
        case '5':remainder();break;
        case '6':randomg();break;
        case '0':gaMe();break;
        default:cout<<"\n\t\tInvalid Numbers";delay(1000);fastMathgame2();break;
    }
}
void randomg(){
    int lev1,lev2,lev3,lev4,lev;int tt,i,di,ans;char level;
    do{titlefastmath();
        cout<<"\n\t\t\tEnter the level(1,2,3): ";level=getch();
            if(level=='1')     {lev=20;lev1=14,lev2=10;lev3=10,lev4=5;}
            else if(level=='2'){lev=40;lev1=16,lev2=12;lev3=15,lev4=7;}
            else  if(level=='3')         {lev=60;lev1=18,lev2=14;lev3=20,lev4=10;}
            else {cout<<"\n\n\t\t\tInvalid Input!";delay(1000);randomg();}
    while(flag!=0){
        if(i==0){
            fastmathtitle();//for add
            num1=rand()%lev;
            num2=rand()%lev;
            start=clock();
            gotoxy(60,13);cout<<"Your score is = "<<score;
            gotoxy(34,13);cout<<num1<<" + "<<num2<<" = ";
            cin>>ans;
                endd=clock();
                tt=(endd-start)/CLK_TCK;
            if(ans==num1+num2 && tt<=5){flag=1;score++;}
                else if(ans==num1+num2 && tt>5){setcolor(RED);outtextxy(250,250,"Time is over");flag=0;}
                else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
            i++;
        }
        else if(i==1){
            fastmathtitle();  //for substract
            num1=rand()%lev;
            num2=rand()%lev;
                start=clock();
                 gotoxy(60,13);cout<<"Your score is = "<<score;
            gotoxy(34,13);cout<<num1<<" - "<<num2<<" = ";
            cin>>ans;
                endd=clock();
                tt=(endd-start)/CLK_TCK;
	    if(ans==num1-num2 && tt<=5){flag=1;score++;}
                else if(ans==num1-num2 && tt>5){setcolor(RED);outtextxy(250,250,"Time is over");flag=0;}
                else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
            i++;
        }
        else if(i==2){
            fastmathtitle();  //for multiply
            num1=rand()%lev1+1;
            num2=rand()%lev2+1;
                start=clock();
                gotoxy(60,13);cout<<"Your score is = "<<score;
            gotoxy(34,13);cout<<num1<<" * "<<num2<<" = ";
            cin>>ans;
                endd=clock();
                tt=(endd-start)/CLK_TCK;
            if(ans==num1*num2 && tt<=5){flag=1;score++;}
                else if(ans==num1*num2 && tt>5){setcolor(RED);outtextxy(250,250,"Time is over");flag=0;}
                else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
            i++;
        }
        else if(i==3){
            fastmathtitle();  //for divide
            num1=(rand()%lev3*2)+2;
            num2=(rand()%lev4*2)+2;
                start=clock();
            di=num1*num2;
                gotoxy(60,13);cout<<"Your score is = "<<score;
            gotoxy(34,13);cout<<di<<"  /  "<<num2<<" = ";
            cin>>ans;
                endd=clock();
                tt=(endd-start)/CLK_TCK;
            if(ans==di/num2 && tt<=5){flag=1;score++;}
                else if(ans==di/num2 && tt>5){setcolor(RED);outtextxy(250,250,"Time is over");flag=0;}
                else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
            i++;
        }
        else if(i==4){
            fastmathtitle(); //for remainder
            num1=(rand()%lev)+1;
            num2=(rand()%lev)+1;
                start=clock();
                if(num1>num2){
                 gotoxy(60,13);cout<<"Your score is = "<<score;
                   gotoxy(34,13); cout<<num1<<" % "<<num2<<" = ";
                    cin>>ans;
                    endd=clock();
                    tt=(endd-start)/CLK_TCK;
                    if(ans==num1%num2 && tt<=5){flag=1;score++;}
                    else if(ans==num1%num2 && tt>5){setcolor(RED);outtextxy(250,250,"Time is over");flag=0;}
                    else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
                }
                else{
                 gotoxy(60,13);cout<<"Your score is = "<<score;
                   gotoxy(34,13); cout<<num2<<" % "<<num1<<" = ";
                    cin>>ans;
                    endd=clock();
                    tt=(endd-start)/CLK_TCK;
                    if(ans==num2%num1 && tt<5){flag=1;score++;}
                    else if(ans==num2%num1 && tt>5){setcolor(RED);outtextxy(250,250,"Time is over");flag=0;}
                    else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
                }
            i++;
        }
        else{i=0;}
    }
    gotoxy(24,21);cout<<"\tPlay again(y/n): ";cin>>choice2;
    if(choice2!='y'){fastMathgame2();}
    }while(choice2=='y');
}
void remainder(){
    int lev;int tt;int ans;char level;
    do{
        titlefastmath();
        cout<<"\n\t\t\tEnter the level(1,2,3): ";level=getch();
        if(level=='1')     {lev=20;}
        else if(level=='2'){lev=40;}
        else  if(level=='3')           {lev=60;}
        else {cout<<"\n\n\t\t\tInvalid Input!";delay(1000);remainder();}
        while(flag!=0){
                fastmathtitle();
                num1=(rand()%lev)+1;
                num2=(rand()%lev)+1;
                 start=clock();
                if(num1>num2){
                    gotoxy(60,13);cout<<"Your score is = "<<score;
                    gotoxy(34,13);cout<<num1<<" % "<<num2<<" = ";
                    cin>>ans;
                    endd=clock();
                    tt=(endd-start)/CLK_TCK;
                    if(ans==num1%num2 && tt<=5){flag=1;score++;}
                    else if(ans==num1+num2 && tt>5){setcolor(RED);outtextxy(250,250,"Time is over");flag=0;}
                    else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
                }
                else{
                    gotoxy(60,13);cout<<"Your score is = "<<score;
                    gotoxy(34,13);cout<<num2<<" % "<<num1<<" = ";
                    cin>>ans;
                    endd=clock();
                    tt=(endd-start)/CLK_TCK;
                    if(ans==num2%num1 && tt<=5){flag=1;score++;}
                    else if(ans==num1+num2 && tt>5){setcolor(RED);outtextxy(230,230,"Time is over");flag=0;}
                    else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
                }
            }
        gotoxy(24,21);cout<<"\tPlay again(y/n): ";cin>>choice2;
	if(choice2!='y'){fastMathgame2();}
    }while(choice2=='y');
}
void addGame(){
    int lev;int tt;int ans;char level;
    do{
        titlefastmath();
        cout<<"\n\t\t\tEnter the level(1,2,3): ";level=getch();
        if(level=='1')     {lev=20;}
        else if(level=='2'){lev=40;}
        else if(level=='3'){lev=60;}
        else {cout<<"\n\n\t\t\tInvalid Input!";delay(1000);addGame();}
        while(flag!=0){
                fastmathtitle();
                num1=rand()%lev;
                num2=rand()%lev;
                start=clock();
                gotoxy(60,13);cout<<"Your score is = "<<score;
                gotoxy(34,13);cout<<num1<<" + "<<num2<<" = ";
                cin>>ans;
                endd=clock();
                tt=(endd-start)/CLK_TCK;
                if(ans==num1+num2 && tt<=5){flag=1;score++;}
                else if(ans==num1+num2 && tt>5){setcolor(RED);outtextxy(250,250,"Time is over");flag=0;}
                else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
        }
    gotoxy(24,21);cout<<"\tPlay again(y/n)?: ";cin>>choice2;
    if(choice2!='y'){fastMathgame2();}
    }while(choice2=='y');
}
void subGame(){
    int lev;int tt;int ans;char level;
    do{titlefastmath();
        cout<<"\n\t\t\tEnter the level(1,2,3): ";level=getch();
            if(level=='1')     {lev=20;}
            else if(level=='2'){lev=40;}
            else if(level=='3')            {lev=60;}
            else {cout<<"\n\n\t\t\tInvalid Input!";delay(1000);subGame();}
        while(flag!=0){
                fastmathtitle();
                num1=rand()%lev;
                num2=rand()%lev;
                start=clock();
                gotoxy(60,13);cout<<"Your score is = "<<score;
                gotoxy(34,13);cout<<num1<<" - "<<num2<<" = ";
                cin>>ans;
                endd=clock();
                tt=(endd-start)/CLK_TCK;
                if(ans==num1-num2 && tt<=5){flag=1;score++;}
                else if(ans==num1-num2 && tt>5){setcolor(RED);outtextxy(250,250,"Time is over");flag=0;}
                else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
            }
       gotoxy(24,21); cout<<"\tPlay again(y/n): ";cin>>choice2;
	if(choice2!='y'){fastMathgame2();}
    }while(choice2=='y');
}
void mulGame(){
    int lev1,lev2;int tt;int ans;char level;
    do{titlefastmath();
        cout<<"\n\t\t\tEnter the level(1,2,3): ";level=getch();
            if(level=='1')     {lev1=14;lev2=10;}
            else if(level=='2'){lev1=16;lev2=12;}
            else  if(level=='3')           {lev1=18;lev2=14;}
            else {cout<<"\n\n\t\t\tInvalid Input!";delay(1000);mulGame();}
        while(flag!=0){
                fastmathtitle();
                num1=rand()%lev1+1;
                num2=rand()%lev2+1;
                start=clock();
                gotoxy(60,13);cout<<"Your score is = "<<score;
                gotoxy(34,13);cout<<num1<<" * "<<num2<<" = ";
                cin>>ans;
                endd=clock();
                tt=(endd-start)/CLK_TCK;
                if(ans==num1*num2 && tt<=5){flag=1;score++;}
                else if(ans==num1*num2 && tt>5){setcolor(RED);outtextxy(250,250,"Time is over");flag=0;}
                else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
            }
        gotoxy(24,21);cout<<"\tPlay again(y/n): ";cin>>choice2;
        if(choice2!='y'){fastMathgame2();}
    }while(choice2=='y');
}
void divGame(){
    int lev1,lev2;int tt,di,ans;char level;
    do{
           titlefastmath();
        cout<<"\n\t\t\tEnter the level(1,2,3): ";level=getch();
            if(level=='1')     {lev1=10;lev2=5;}
            else if(level=='2'){lev1=15;lev2=7;}
            else   if(level=='3')          {lev1=20;lev2=10;}
            else {cout<<"\n\n\t\t\tInvalid Input!";delay(1000);divGame();}
        while(flag!=0){
              fastmathtitle();
                num1=(rand()%lev1*2)+2;
                num2=(rand()%lev2*2)+2;
                di=num1*num2;
                start=clock();
                gotoxy(60,13);cout<<"Your score is = "<<score;
                gotoxy(34,13);cout<<di<<" / "<<num2<<" = ";
                cin>>ans;
                endd=clock();
                tt=(endd-start)/CLK_TCK;
                if(ans==di/num2 && tt<=5){flag=1;score++;}
                else if(ans==di/num2 && tt>5){setcolor(RED);outtextxy(250,250,"Time is over");flag=0;}
                else{setcolor(RED);outtextxy(280,250,"Wrong!");flag=0;}
            }
       gotoxy(24,21); cout<<"\tPlay again(y/n): ";cin>>choice2;
        if(choice2!='y'){fastMathgame2();}
    }while(choice2=='y');
}
void fastmathtitle(){
    cleardevice();setcolor(LIGHTBLUE);line(0,70,639,70);
    settextstyle(1,HORIZ_DIR,3);
    setcolor(RED);outtextxy(250,20,"FAST MATH ");
    setcolor(YELLOW);settextstyle(1,HORIZ_DIR,1);outtextxy(220,100,"You have 5 seconds");
    rectangle(240,170,390,220);
}
void fifteenTic1(){
    Fifteen();
    getch();
    fifteenTic2();
}
void fifteenTic2(){
    cleardevice();
    gridline();//for line graph
    firstshow();//first assign and show
    textbox();//for text box
    playgame();
}
void gridline(){
    setcolor(RED);
    settextstyle(1,HORIZ_DIR,4);
    outtextxy(170,10,"FIFTEEN TIC TAC TOE");
    setcolor(LIGHTBLUE);line(0,60,639,60);
    int maxx=getmaxx()/2;//int maxy=getmaxy()/2;
    line(maxx-80-5-3,160-5-1,maxx+80-5+4+3,160-5-1);  //horizontal
    line(maxx-80-5-3,220-5-1,maxx+80-5+4+3,220-5-1);  //horizontal
    line(maxx-30-5+2,100-5-1,maxx-30-5+2,280-5-1);  //vertical
    line(maxx+30-5+2,100-5-1,maxx+30-5+2,280-5-1);  //vertical

    line(475,290,570,290);
    line(475,320,570,320);
    line(505,260,505,350);
    line(535,260,535,350);

     setcolor(RED);
    circle(475,153,10);//1
    circle(522,153,10);//2
    circle(570,153,10);//3
    circle(475,182,10);//4
    circle(522,182,10);//5
    circle(570,182,10);//6
    circle(475,214,10);//7
    circle(522,214,10);//8
    circle(570,214,10);//9
}
void firstshow(){
    int x1;
    for(x1=0;x1<9;x1++){num[x1]=5;}
    setcolor(YELLOW);settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(485,270,"a");
    outtextxy(515,270,"b");
    outtextxy(545,270,"c");
    outtextxy(485,300,"d");
    outtextxy(515,300,"e");
    outtextxy(545,300,"f");
    outtextxy(485,330,"g");
    outtextxy(515,330,"h");
    outtextxy(545,330,"i");
}
void textbox(){
    setcolor(RED);
    rectangle(240,305,395,340);
    setcolor(WHITE);settextstyle(1,HORIZ_DIR,1);//PLAYER turn box
    outtextxy(255,310,"Player(  ) turn");

    setcolor(BLUE);
    ellipse(520,120,0,360,55,20);
    gotoxy(62,8);cout<<"Player( )";
    gotoxy(69,8);cout<<"1";

    setcolor(YELLOW);
    outtextxy(120,410,"Enter \'z\' to exit");

    gotoxy(60,10);cout<<"1";
    gotoxy(66,10);cout<<"2";
    gotoxy(72,10);cout<<"3";
    gotoxy(60,12);cout<<"4";
    gotoxy(66,12);cout<<"5";
    gotoxy(72,12);cout<<"6";
    gotoxy(60,14);cout<<"7";
    gotoxy(66,14);cout<<"8";
    gotoxy(72,14);cout<<"9";
}
void playgame(){
    char cell;int numb,flag=1;
    int pturn =1;
    f1='1';f2='2';f3='3';f4='4';f5='5';f6='6';f7='7';f8='8';f9='9';f10='1';f11='2';f12='3';f13='4';f14='5';f15='6';f16='7';f17='8';f18='9';
    setcolor(YELLOW);
    settextstyle(3,HORIZ_DIR,1);
    while(flag!=0){
    if(pturn == 1){gotoxy(41,21);cout<<"1";gotoxy(69,8);cout<<"1";shownum1();}
    else          {gotoxy(41,21);cout<<"2";gotoxy(69,8);cout<<"2";shownum2();}
     outtextxy(120,350,"Enter the cell  (a-i)   :_");
    outtextxy(120,380,"Enter the number(1-9):_");
    cell=getch();
    if(cell=='z'){gaMe();}
    if(cell<'a' || cell>'i'){
        gotoxy(1,10);cout<<"\nInvalid Input!";delay(1000);
        gotoxy(1,10);cout<<"\n              ";
        gotoxy(50,23);cout<<"  ";
        continue;
    }
    switch(cell){
        case'a':gotoxy(33,8);cout<<"*";
                num[0]=getch();
                if(num[0]>57 || num[0]<49){gotoxy(1,10);cout<<"\nInvalid Input!";delay(1000);
                gotoxy(1,10);cout<<"\n              ";gotoxy(33,8);cout<<" ";continue;}
                gotoxy(33,8);cout<<num[0];
                if(pturn==1){numleft1(num[0]);}
                else        {numleft2(num[0]);}
                break;
        case'b':gotoxy(40,8);cout<<"*";
                num[1]=getch();
                if(num[1]>57 || num[1]<49){gotoxy(1,10);cout<<"\nInvalid Input!";delay(1000);
                gotoxy(1,10);cout<<"\n              ";gotoxy(40,8);cout<<" ";continue;}
                gotoxy(40,8);cout<<num[1];
                if(pturn==1){numleft1(num[1]);}
                else        {numleft2(num[1]);}
                break;
        case'c':gotoxy(47,8);cout<<"*";num[2]=getch();
                if(num[2]>57 || num[2]<49){gotoxy(1,10);cout<<"\nInvalid Input!";delay(1000);
                gotoxy(1,10);cout<<"\n              ";gotoxy(47,8);cout<<" ";continue;}
                gotoxy(47,8);cout<<num[2];
                if(pturn==1){numleft1(num[2]);}
                else        {numleft2(num[2]);}
                break;
        case'd':gotoxy(33,12);cout<<"*";num[3]=getch();
                if(num[3]>57 || num[3]<49){gotoxy(1,10);cout<<"\nInvalid Input!";delay(1000);
                gotoxy(1,10);cout<<"\n              ";gotoxy(33,12);cout<<" ";continue;}
                gotoxy(33,12);cout<<num[3];
                if(pturn==1){numleft1(num[3]);}
                else        {numleft2(num[3]);}
                break;
        case'e':gotoxy(40,12);cout<<"*";num[4]=getch();
                if(num[4]>57 || num[4]<49){gotoxy(1,10);cout<<"\nInvalid Input!";delay(1000);
                gotoxy(1,10);cout<<"\n              ";gotoxy(40,12);cout<<" ";continue;}
                if(num[4]==53){gotoxy(1,10);cout<<"\nYou can't put 5 to the center.";getch();
                                gotoxy(40,12);cout<<" ";gotoxy(1,10);cout<<"\n                              ";
                              continue;}
                gotoxy(40,12);cout<<num[4];
                if(pturn==1){numleft1(num[4]);}
                else        {numleft2(num[4]);}
                break;
        case'f':gotoxy(47,12);cout<<"*";num[5]=getch();
                if(num[5]>57 || num[5]<49){gotoxy(1,10);cout<<"\nInvalid Input!";delay(1000);
                gotoxy(1,10);cout<<"\n              ";gotoxy(47,12);cout<<" ";continue;}
                gotoxy(47,12);cout<<num[5];
                if(pturn==1){numleft1(num[5]);}
                else        {numleft2(num[5]);}
                break;
        case'g':gotoxy(33,16);cout<<"*";num[6]=getch();
                if(num[6]>57 || num[6]<49){gotoxy(1,10);cout<<"\nInvalid Input!";delay(1000);
                gotoxy(1,10);cout<<"\n              ";gotoxy(33,16);cout<<" ";continue;}
                gotoxy(33,16);cout<<num[6];
                if(pturn==1){numleft1(num[6]);}
                else        {numleft2(num[6]);}
                break;
        case'h':gotoxy(40,16);cout<<"*";num[7]=getch();
                if(num[7]>57 || num[7]<49){gotoxy(1,10);cout<<"\nInvalid Input!";delay(1000);
                gotoxy(1,10);cout<<"\n              ";gotoxy(40,16);cout<<" ";continue;}
                gotoxy(40,16);cout<<num[7];
                if(pturn==1){numleft1(num[7]);}
                else        {numleft2(num[7]);}
                break;
        case'i':gotoxy(47,16);cout<<"*";num[8]=getch();
                if(num[8]>57 || num[8]<49){gotoxy(1,10);cout<<"\nInvalid Input!";delay(1000);
                gotoxy(1,10);cout<<"\n              ";gotoxy(47,16);cout<<" ";continue;}
                gotoxy(47,16);cout<<num[8];
                if(pturn==1){numleft1(num[8]);}
                else        {numleft2(num[8]);}
                break;
    }
    if(num[2]+num[4]+num[6]==159 || num[0]+num[1]+num[2]==159 || num[0]+num[3]+num[6]==159 ||
       num[1]+num[4]+num[7]==159 || num[2]+num[5]+num[8]==159 || num[3]+num[4]+num[5]==159 ||
       num[6]+num[7]+num[8]==159 || num[0]+num[4]+num[8]==159){
        setcolor(RED);settextstyle(1,HORIZ_DIR,2);
        if(pturn==1){outtextxy(80,150,"You (1) Win!");}
        else{outtextxy(80,150,"You (2) Win!");}
        getch();flag=0;}
    if(num[0]!=5 && num[1]!=5 && num[2]!=5 &&num[3]!=5 && num[4]!=5 && num[5]!=5 && num[6]!=5 && num[7]!=5 && num[8]!=5){
    setcolor(RED);settextstyle(1,HORIZ_DIR,2);outtextxy(70,150,"No one Wins!");getch();flag=0;
    }
    pturn=1-pturn;
    }
    cleardevice();setcolor(RED);
    settextstyle(1,HORIZ_DIR,4);
    outtextxy(170,10,"FIFTEEN TIC TAC TOE");
    setcolor(LIGHTBLUE);line(0,60,639,60);
    settextstyle(1,HORIZ_DIR,1);setcolor(WHITE);
    outtextxy(140,200,"Do you want to play again(y/n)? : ");
    gotoxy(60,14);cin>>choice2;
    if(choice2=='y'){fifteenTic2();}
    else{gaMe();}
}
void numleft1(int n){
    switch(n){
        case '1':f1=' ';break;
        case '2':f2=' ';break;
        case '3':f3=' ';break;
        case '4':f4=' ';break;
        case '5':f5=' ';break;
        case '6':f6=' ';break;
        case '7':f7=' ';break;
        case '8':f8=' ';break;
        case '9':f9=' ';break;
    }
}
void numleft2(int n){
     switch(n){
        case '1':f10=' ';break;
        case '2':f11=' ';break;
        case '3':f12=' ';break;
        case '4':f13=' ';break;
        case '5':f14=' ';break;
        case '6':f15=' ';break;
        case '7':f16=' ';break;
        case '8':f17=' ';break;
        case '9':f18=' ';break;
    }
}
void shownum1(){
        gotoxy(60,10);cout<<f1;
        gotoxy(66,10);cout<<f2;
        gotoxy(72,10);cout<<f3;
        gotoxy(60,12);cout<<f4;
        gotoxy(66,12);cout<<f5;
        gotoxy(72,12);cout<<f6;
        gotoxy(60,14);cout<<f7;
        gotoxy(66,14);cout<<f8;
        gotoxy(72,14);cout<<f9;
    }
void shownum2(){
        gotoxy(60,10);cout<<f10;
        gotoxy(66,10);cout<<f11;
        gotoxy(72,10);cout<<f12;
        gotoxy(60,12);cout<<f13;
        gotoxy(66,12);cout<<f14;
        gotoxy(72,12);cout<<f15;
        gotoxy(60,14);cout<<f16;
        gotoxy(66,14);cout<<f17;
        gotoxy(72,14);cout<<f18;
}
void puzzle(){
    Puzzle();
   clrscr();
   cleardevice();
   setcolor(2);
   int a,b,c,d,e,f,j,k;
   int ch[30];int num[30];
   char dd;
   int i=0;
   Question();
   AnswerPaper();
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   ch[i]=GetVarible();
   while(ch[i]!=121&&ch[i]!=107)
   {
   if(ch[i]>='a'&&ch[i]<='f')
     {num[i]=GetNum();
     clrscr();
     cleardevice();
     Question();
     AnswerPaper();
    for(j=0;j<=i;j++)
    {
     for(k=0;k<j;k++)
     {
      if(ch[k]==ch[j])
      {
	num[k]=num[j];
      }
     }
    }
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    for(j=0;j<=i;j++)
    {
     switch(ch[j])
     {
      case 97:{switch(num[j])
		{
		 case 1:{outtextxy(404,65,"1");a=1;}break;
		 case 2:{outtextxy(404,65,"2");a=2;}break;
		 case 3:{outtextxy(404,65,"3");a=3;}break;
		 case 4:{outtextxy(404,65,"4");a=4;}break;
		 case 5:{outtextxy(404,65,"5");a=5;}break;
		 case 6:{outtextxy(404,65,"6");a=6;}break;
		 case 7:{outtextxy(404,65,"7");a=7;}break;
		 case 8:{outtextxy(404,65,"8");a=8;}break;
		 case 9:{outtextxy(404,65,"9");a=9;}break;
		 default:{cout<<"Wrong key press";}break;
	        }
	      }break;
      case 98:{switch(num[j])
		{
		 case 1:{outtextxy(484,65,"1");b=1;}break;
		 case 2:{outtextxy(484,65,"2");b=2;}break;
		 case 3:{outtextxy(484,65,"3");b=3;}break;
		 case 4:{outtextxy(484,65,"4");b=4;}break;
		 case 5:{outtextxy(484,65,"5");b=5;}break;
		 case 6:{outtextxy(484,65,"6");b=6;}break;
		 case 7:{outtextxy(484,65,"7");b=7;}break;
		 case 8:{outtextxy(484,65,"8");b=8;}break;
		 case 9:{outtextxy(484,65,"9");b=9;}break;
		 default:{cout<<"Wrong key press";}break;
		}
	      }break;
      case 99:{switch(num[j])
		{
		 case 1:{outtextxy(404,145,"1");c=1;}break;
		 case 2:{outtextxy(404,145,"2");c=2;}break;
		 case 3:{outtextxy(404,145,"3");c=3;}break;
		 case 4:{outtextxy(404,145,"4");c=4;}break;
		 case 5:{outtextxy(404,145,"5");c=5;}break;
		 case 6:{outtextxy(404,145,"6");c=6;}break;
		 case 7:{outtextxy(404,145,"7");c=7;}break;
		 case 8:{outtextxy(404,145,"8");c=8;}break;
		 case 9:{outtextxy(404,145,"9");c=9;}break;
		 default:{cout<<"Wrong key press";}break;
		 }
	       }break;
      case 100:{switch(num[j])
		{
		 case 1:{outtextxy(564,145,"1");d=1;}break;
		 case 2:{outtextxy(564,145,"2");d=2;}break;
		 case 3:{outtextxy(564,145,"3");d=3;}break;
		 case 4:{outtextxy(564,145,"4");d=4;}break;
		 case 5:{outtextxy(564,145,"5");d=5;}break;
		 case 6:{outtextxy(564,145,"6");d=6;}break;
		 case 7:{outtextxy(564,145,"7");d=7;}break;
		 case 8:{outtextxy(564,145,"8");d=8;}break;
		 case 9:{outtextxy(564,145,"9");d=9;}break;
		 default:{cout<<"Wrong key press";}break;
		 }
	        }break;
      case 101:{switch(num[j])
		{
		 case 1:{outtextxy(484,225,"1");e=1;}break;
		 case 2:{outtextxy(484,225,"2");e=2;}break;
		 case 3:{outtextxy(484,225,"3");e=3;}break;
		 case 4:{outtextxy(484,225,"4");e=4;}break;
		 case 5:{outtextxy(484,225,"5");e=5;}break;
		 case 6:{outtextxy(484,225,"6");e=6;}break;
		 case 7:{outtextxy(484,225,"7");e=7;}break;
		 case 8:{outtextxy(484,225,"8");e=8;}break;
		 case 9:{outtextxy(484,225,"9");e=9;}break;
		 default:{cout<<"Wrong key press";}break;
		}
	     }break;
    case 102:{switch(num[j])
		{
		 case 1:{outtextxy(564,225,"1");f=1;}break;
		 case 2:{outtextxy(564,225,"2");f=2;}break;
		 case 3:{outtextxy(564,225,"3");f=3;}break;
		 case 4:{outtextxy(564,225,"4");f=4;}break;
		 case 5:{outtextxy(564,225,"5");f=5;}break;
		 case 6:{outtextxy(564,225,"6");f=6;}break;
		 case 7:{outtextxy(564,225,"7");f=7;}break;
		 case 8:{outtextxy(564,225,"8");f=8;}break;
		 case 9:{outtextxy(564,225,"9");f=9;}break;
		 default:{cout<<"Wrong key press";}break;
		}
	     }break;
	}
      }
      i++;
    }
    else {clrscr();
	  cleardevice();
	  Question();
	  AnswerPaper();
	  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	  cout<<"Wrong key press";
         }
     ch[i]=GetVarible();
   }
   switch(ch[i])
   {case 121:{if(a-b==2&&c+2==d&&4+e==f&&a-c==4&&b-2==e&&2+d==f)
	        {cout<<"\n\nYou are right!";delay(2000);gaMe();}
	     else {cout<<"\n\nYou are wrong!"
		   <<"\n\nIf you wanna try again, enter 't'."
		   <<"\n\nOr the problem will be exit."
		   <<"\n\nEnter your decision:  ";
		   cin>>dd;
		   switch(dd)
		   {case 't':puzzle();break;
		    default:gaMe();break;
		   }
                   }
	      }break;
   case 107:Key();break;
   default:cout<<"Wrong key press";break;
   }
}
void Question(){
   outtextxy(110,30,"Question");
   int g=36,h=50,k=236,l=250,i,j=40,y,z;
   cout<<"\n\tFind the variables \"a,b,c,d,e and f\" within the range of \"1 to 9\"";
   rectangle(g,h,k,l);
   for(i=1;i<=4;i++)
   {y=g+j*i;
   line(y,h,y,l);
   }
   for(i=1;i<=4;i++)
   {z=h+j*i;
    line(g,z,k,z);
   }

   outtextxy(50,65,"a");
   outtextxy(130,65,"b");
   outtextxy(50,145,"c");
   outtextxy(210,145,"d");
   outtextxy(130,225,"e");
   outtextxy(210,225,"f");
   outtextxy(90,65,"-");
   outtextxy(170,65,"=");
   outtextxy(50,105,"-");
   outtextxy(130,105,"-");
   outtextxy(210,105,"+");
   outtextxy(90,145,"+");
   outtextxy(170,145,"=");
   outtextxy(50,185,"=");
   outtextxy(130,185,"=");
   outtextxy(210,185,"=");
   outtextxy(90,225,"+");
   outtextxy(170,225,"=");
   outtextxy(210,65,"2");
   outtextxy(130,145,"2");
   outtextxy(50,225,"4");
}
void AnswerPaper(){
  outtextxy(440,30,"Answer Paper");
  int n=390,o=50,p=590,q=250,r,s=40,t,u;
   rectangle(n,o,p,q);
   for(r=1;r<=4;r++)
   {t=n+s*r;
   line(t,o,t,q);
   }
   for(r=1;r<=4;r++)
   {u=o+s*r;
    line(n,u,p,u);
   }
   outtextxy(444,65,"-");
   outtextxy(524,65,"=");
   outtextxy(404,105,"-");
   outtextxy(484,105,"-");
   outtextxy(564,105,"+");
   outtextxy(444,145,"+");
   outtextxy(524,145,"=");
   outtextxy(404,185,"=");
   outtextxy(484,185,"=");
   outtextxy(564,185,"=");
   outtextxy(444,225,"+");
   outtextxy(524,225,"=");
   outtextxy(564,65,"2");
   outtextxy(484,145,"2");
   outtextxy(404,225,"4");
}
int GetVarible(){
   char ch;
   cout<<"\n\nIf you are sure, Enter 'y' instead of variable.";
   cout<<"\n\nIf you want to see the key, Enter 'k' instead of variable.";
   cout<<"\n\nEnter a variable:   ";
   cin>>ch;
   return ch;
}
int GetNum(){
    int num;
    cout<<"\nEnter a number for this variable:   ";
    cin>>num;
    return num;
}
void Key(){
   clrscr();
   cleardevice();
   setcolor(9);
   outtextxy(120,30,"Key");
   char key;
   int g=36,h=50,k=236,l=250,i,j=40,y,z;
   rectangle(g,h,k,l);
   for(i=1;i<=4;i++)
   {y=g+j*i;
   line(y,h,y,l);
   }
   for(i=1;i<=4;i++)
   {z=h+j*i;
    line(g,z,k,z);
   }

   outtextxy(50,65,"5");
   outtextxy(130,65,"3");
   outtextxy(50,145,"1");
   outtextxy(210,145,"3");
   outtextxy(130,225,"1");
   outtextxy(210,225,"5");
   outtextxy(90,65,"-");
   outtextxy(170,65,"=");
   outtextxy(50,105,"-");
   outtextxy(130,105,"-");
   outtextxy(210,105,"+");
   outtextxy(90,145,"+");
   outtextxy(170,145,"=");
   outtextxy(50,185,"=");
   outtextxy(130,185,"=");
   outtextxy(210,185,"=");
   outtextxy(90,225,"+");
   outtextxy(170,225,"=");
   outtextxy(210,65,"2");
   outtextxy(130,145,"2");
   outtextxy(50,225,"4");
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   cout<<"\n\nIf you want to go back, Enter 'b'. ";
   cout<<"\n\nIf you want to exit, Enter 'x'.";
   cout<<"\n\nEnter a key:   ";
   cin>>key;
   switch(key)
   {
     case 'b':puzzle();break;
     case 'x':gaMe();break;
     default:{cout<<"\nWrong key press";delay(2000);Key();}break;
   }
}
