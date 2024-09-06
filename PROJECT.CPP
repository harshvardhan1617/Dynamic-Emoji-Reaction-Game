#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
int score=0;

int main()

{ int i,rv[8],flag=0,ch;
       char ev;


int gd=DETECT ,gm;

initgraph(&gd,&gm,"c://Turboc3//BGI") ;


 circle(250,160,21);
	for(i=0;i<11;i++)
	{
  setfillstyle(SOLID_FILL,i);
  circle(250,160,21);
  floodfill(249,161,15);
  delay(100);
  setfillstyle(SOLID_FILL,i+2);
  circle(350,160,21);
  floodfill(351,161,15);
  delay(100)  ;
setfillstyle(SOLID_FILL,i+3);
circle(300,180,100);
floodfill(300,170,15);
delay(100) ;
	 }

	 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t");
	 printf("loading emoji ");
	 delay(1000);
	 printf(".");
delay(1100);
	 printf(".");
delay(1100);

printf(".");
delay(1100);
	 printf(".");
delay(1000);
	 printf(".");
delay(400);
	 printf(".");
clrscr();
char name[15];

printf("enter your face name\n");
scanf("%s",name);
char c=1;
getch();
printf("\n\n\n\n\n\%c%c%c%c%c%c%c   HOW TO PLAY!   %c%c%c%c%c%c%c",c,c,c,c,c,c,c,c,c,c,c,c,c,c,c);
getch();
printf("\n\n\n\t->>>you will see Mr emoji doing some expressions\n");
getch();
printf("\n\n\n\n\n\t\t\tyou need to do that expression that he missed");
getch();


     clrscr();
printf("\n\n\t Mr emoji");
printf("\t\t\t\t\t%sji                  ",name);
printf("\n\n\t\t\t\t\t\t\tSCORE=%d               ",score);

rectangle(10,31,200,51); //name1 rectangle
rectangle(400,31,590,51);  //name2 rectangle

circle(100,220,76); //circle1
line(43,185,81,185);//lefteyebrow1
line(119,185,160,185);//righteyebrow1
circle(62,210,19);  //lefteye1
circle(62,210,4);
circle(138,210,19);//righteye1
circle(138,210,4);

setfillstyle(SOLID_FILL,RED); //circle1color
circle(100,220,76);
floodfill(100,219,15);

setfillstyle(SOLID_FILL,BLACK); //lefteye1dotcolor
circle(62,210,19);
floodfill(61,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye1color
circle(62,210,19);
floodfill(68,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye1dotcolor
circle(138,210,4);
floodfill(141,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye1color
circle(138,210,19);
floodfill(143,210,15);

circle(500,220,76);  //circle2

line(443,185,483,185);//lefteyebrow2
line(519,185,559,185);//righteyebrow2
//circle(462,210,19); //lefteye2
circle(462,210,4);
//circle(538,210,19); //righteye2
circle(538,210,4);

setfillstyle(SOLID_FILL,LIGHTGREEN);  //circle2color
circle(500,220,76);
floodfill(488,219,15);




setfillstyle(SOLID_FILL,BLACK); //lefteye2dotcolor
circle(462,210,4);
floodfill(463,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye2color
circle(462,210,19);
floodfill(468,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye2dotcolor
circle(538,210,4);
floodfill(537,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye2color
circle(538,210,19);
floodfill(544,210,15);

line(300,1,300,310); //divider line

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPRESS KEY to PLAY");
printf("\n\nCONTROLS");
//line(0,310,800,310);
printf("\n0->normal");
printf("\t1->wink");
printf("\t\t\t2->sleep");
printf("\t\t3->surprise");
printf("\n4->sad");
printf("\t\t5->angry");
printf("\t\t6->happy");
printf("\t\t7->crying");


getch();
    closegraph();





    z :

  do{
initgraph(&gd,&gm,"c://Turboc3//BGI") ;
   srand(time(0));
 for(int s=0;s<8;s++)

rv[s]=rand()%8;

  for(int k=0;k<8;k++)
{
if(rv[k]==0)
{

		  clrscr();
printf("\n\n\t Mr emoji");
printf("\t\t\t\t\t%sji               ",name);

printf("\n\n\t\t\t\t\t\t\tSCORE=%d",score);


rectangle(10,31,200,51); //name1 rectangle
rectangle(400,31,590,51);  //name2 rectangle

circle(500,220,76);  //circle2

line(443,185,483,185);//lefteyebrow2
line(519,185,559,185);//righteyebrow2
//circle(462,210,19); //lefteye2
circle(447,210,4);
//circle(538,210,19); //righteye2
circle(523,210,4);

setfillstyle(SOLID_FILL,LIGHTGREEN);  //circle2color
circle(500,220,76);
floodfill(488,219,15);

setfillstyle(SOLID_FILL,RED);  //mouth2color
circle(500,270,16);
floodfill(501,270,15);


setfillstyle(SOLID_FILL,BLACK); //lefteye2dotcolor
circle(447,210,4);
floodfill(448,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye2color
circle(462,210,19);
floodfill(468,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye2dotcolor
circle(523,210,4);
floodfill(524,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye2color
circle(538,210,19);
floodfill(544,210,15);


circle(100,220,76); //circle1
line(43,185,81,185);//lefteyebrow1
line(119,185,160,185);//righteyebrow1
circle(62,210,19);  //lefteye1
circle(62,210,4);
circle(138,210,19);//righteye1
circle(138,210,4);
line(91,270,110,270);

setfillstyle(SOLID_FILL,RED); //circle1color
circle(100,220,76);
floodfill(100,219,15);

setfillstyle(SOLID_FILL,BLACK); //lefteye1dotcolor
circle(62,210,19);
floodfill(61,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye1color
circle(62,210,19);
floodfill(68,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye1dotcolor
circle(138,210,4);
floodfill(141,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye1color
circle(138,210,19);
floodfill(143,210,15);

//line(300,1,300,310); //divider line
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCONTROLS");
//line(0,310,800,310);
printf("\n0->normal");
printf("\t1->wink");
printf("\t\t\t2->sleep");
printf("\t\t3->surprise");
printf("\n4->sad");
printf("\t\t5->angry");
printf("\t\t6->happy");
printf("\t\t7->crying");

		 delay(500);
		 }
       else if(rv[k]==1)
       {    	clrscr();

printf("\n\n\t Mr emoji");
printf("\t\t\t\t\t%sji               ",name);

printf("\n\n\t\t\t\t\t\t\tSCORE=%d",score);


rectangle(10,31,200,51); //name1 rectangle
rectangle(400,31,590,51);  //name2 rectangle

circle(500,220,76);  //circle2

line(443,185,483,185);//lefteyebrow2
line(519,185,559,185);//righteyebrow2
//circle(462,210,19); //lefteye2
circle(447,210,4);
//circle(538,210,19); //righteye2
circle(523,210,4);

setfillstyle(SOLID_FILL,LIGHTGREEN);  //circle2color
circle(500,220,76);
floodfill(488,219,15);

setfillstyle(SOLID_FILL,RED);  //mouth2color
circle(500,270,16);
floodfill(501,270,15);


setfillstyle(SOLID_FILL,BLACK); //lefteye2dotcolor
circle(447,210,4);
floodfill(448,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye2color
circle(462,210,19);
floodfill(468,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye2dotcolor
circle(523,210,4);
floodfill(524,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye2color
circle(538,210,19);


floodfill(544,210,15);

circle(100,220,76); //circle1
line(43,185,81,185);//lefteyebrow1
line(119,185,160,185);//righteyebrow1
line(50,195,81,210);
line(81,210,50,220);
circle(138,210,19);//righteye1
circle(138,210,4);


setfillstyle(SOLID_FILL,RED); //circle1color
circle(100,220,76);
floodfill(100,219,15);


setfillstyle(SOLID_FILL,BLACK); //RIGHTeye1dotcolor
circle(138,210,4);
floodfill(141,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye1color
circle(138,210,19);
floodfill(143,210,15);

//line(300,1,300,310); //divider line
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCONTROLS");
//line(0,310,800,310);
printf("\n0->normal");
printf("\t1->wink");
printf("\t\t\t2->sleep");
printf("\t\t3->surprise");
printf("\n4->sad");
printf("\t\t5->angry");
printf("\t\t6->happy");
printf("\t\t7->crying");

delay(500);
       }
  else if(rv[k]==2)       {  	clrscr();

printf("\n\n\t Mr emoji");
printf("\t\t\t\t\t%sji              ",name);

printf("\n\n\t\t\t\t\t\t\tSCORE=%d",score);


rectangle(10,31,200,51); //name1 rectangle
rectangle(400,31,590,51);  //name2 rectangle

circle(500,220,76);  //circle2

line(443,185,483,185);//lefteyebrow2
line(519,185,559,185);//righteyebrow2
//circle(462,210,19); //lefteye2
circle(447,210,4);
//circle(538,210,19); //righteye2
circle(523,210,4);

setfillstyle(SOLID_FILL,LIGHTGREEN);  //circle2color
circle(500,220,76);
floodfill(488,219,15);

setfillstyle(SOLID_FILL,RED);  //mouth2color
circle(500,270,16);
floodfill(501,270,15);


setfillstyle(SOLID_FILL,BLACK); //lefteye2dotcolor
circle(447,210,4);
floodfill(448,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye2color
circle(462,210,19);
floodfill(468,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye2dotcolor
circle(523,210,4);
floodfill(524,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye2color
circle(538,210,19);
floodfill(544,210,15);

circle(100,220,76); //circle1
line(43,185,81,185);//lefteyebrow1



line(119,185,160,185);//righteyebrow1
line(50,195,81,195);
line(120,195,160,195);


setfillstyle(SOLID_FILL,RED); //circle1color
circle(100,220,76);
floodfill(100,219,15);



//line(300,1,300,310); //divider line
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCONTROLS");
//line(0,310,800,310);
printf("\n0->normal");
printf("\t1->wink");
printf("\t\t\t2->sleep");
printf("\t\t3->surprise");
printf("\n4->sad");
printf("\t\t5->angry");
printf("\t\t6->happy");
printf("\t\t7->crying");

       delay(500);

       }
       else if(rv[k]==3){
			 clrscr();
printf("\n\n\t Mr emoji");
printf("\t\t\t\t\t%sji               ",name);

printf("\n\n\t\t\t\t\t\t\tSCORE=%d",score);



rectangle(10,31,200,51); //name1 rectangle
rectangle(400,31,590,51);  //name2 rectangle

circle(500,220,76);  //circle2

line(443,185,483,185);//lefteyebrow2
line(519,185,559,185);//righteyebrow2
//circle(462,210,19); //lefteye2
circle(447,210,4);
//circle(538,210,19); //righteye2
circle(523,210,4);

setfillstyle(SOLID_FILL,LIGHTGREEN);  //circle2color
circle(500,220,76);
floodfill(488,219,15);

setfillstyle(SOLID_FILL,RED);  //mouth2color
circle(500,270,16);
floodfill(501,270,15);


setfillstyle(SOLID_FILL,BLACK); //lefteye2dotcolor
circle(447,210,4);
floodfill(448,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye2color
circle(462,210,19);
floodfill(468,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye2dotcolor
circle(523,210,4);
floodfill(524,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye2color
circle(538,210,19);
floodfill(544,210,15);
circle(100,220,76); //circle1
line(60,180,81,185);//lefteyebrow1
line(43,185,60,180);
line(136,180,160,185);//righteyebrow1
line(119,185,136,180) ;
circle(62,210,19);  //lefteye1
circle(62,210,4);
circle(138,210,19);//righteye1
circle(138,210,4);
circle(99,280,15);

setfillstyle(SOLID_FILL,RED); //circle1color
circle(100,220,76);
floodfill(100,219,15);

setfillstyle(SOLID_FILL,BLACK); //lefteye1dotcolor
circle(62,210,19);
floodfill(61,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye1color
circle(62,210,19);
floodfill(68,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye1dotcolor
circle(138,210,4);
floodfill(141,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye1color
circle(138,210,19);
floodfill(143,210,15);


//line(300,1,300,310); //divider line
   printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCONTROLS");
//line(0,310,800,310);
printf("\n0->normal");
printf("\t1->wink");
printf("\t\t\t2->sleep");
printf("\t\t3->surprise");
printf("\n4->sad");
printf("\t\t5->angry");
printf("\t\t6->happy");
printf("\t\t7->crying");

			    delay(500);



       }
	  else if(rv[k]==4)
	   {      	 clrscr();
printf("\n\n\t Mr emoji");
printf("\t\t\t\t\t%sji               ",name);

printf("\n\n\t\t\t\t\t\t\tSCORE=%d",score);



rectangle(10,31,200,51); //name1 rectangle
rectangle(400,31,590,51);  //name2 rectangle

circle(500,220,76);  //circle2

line(443,185,483,185);//lefteyebrow2
line(519,185,559,185);//righteyebrow2
//circle(462,210,19); //lefteye2
circle(447,210,4);
//circle(538,210,19); //righteye2
circle(523,210,4);

setfillstyle(SOLID_FILL,LIGHTGREEN);  //circle2color
circle(500,220,76);
floodfill(488,219,15);


setfillstyle(SOLID_FILL,RED);  //mouth2color
circle(500,270,16);
floodfill(501,270,15);

setfillstyle(SOLID_FILL,BLACK); //lefteye2dotcolor
circle(447,210,4);
floodfill(448,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye2color
circle(462,210,19);
floodfill(468,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye2dotcolor
circle(523,210,4);
floodfill(524,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye2color
circle(538,210,19);
floodfill(544,210,15);
circle(100,220,76); //circle1
line(43,185,81,185);//lefteyebrow1
line(119,185,160,185);//righteyebrow1
circle(62,210,19);  //lefteye1
circle(62,210,4);
circle(138,210,19);//righteye1
circle(138,210,4);
line(80,290,100,260);
line(80,290,120,290);
line(100,260,120,290);

setfillstyle(SOLID_FILL,RED); //circle1color
circle(100,220,76);
floodfill(100,219,15);

setfillstyle(SOLID_FILL,BLACK); //lefteye1dotcolor
circle(62,210,19);
floodfill(61,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye1color
circle(62,210,19);
floodfill(68,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye1dotcolor
circle(138,210,4);
floodfill(141,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye1color
circle(138,210,19);
floodfill(143,210,15);


//line(300,1,300,310); //divider line
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCONTROLS");
//line(0,310,800,310);
printf("\n0->normal");
printf("\t1->wink");
printf("\t\t\t2->sleep");
printf("\t\t3->surprise");
printf("\n4->sad");
printf("\t\t5->angry");
printf("\t\t6->happy");
printf("\t\t7->crying");


delay(500);


       }
       else if(rv[k]==5)
       {          	 clrscr();

printf("\n\n\t Mr emoji");
printf("\t\t\t\t\t%sji               ",name);

printf("\n\n\t\t\t\t\t\t\tSCORE=%d",score);



rectangle(10,31,200,51); //name1 rectangle
rectangle(400,31,590,51);  //name2 rectangle


circle(500,220,76);  //circle2

line(443,185,483,185);//lefteyebrow2
line(519,185,559,185);//righteyebrow2
//circle(462,210,19); //lefteye2
circle(447,210,4);
//circle(538,210,19); //righteye2
circle(523,210,4);

setfillstyle(SOLID_FILL,LIGHTGREEN);  //circle2color
circle(500,220,76);
floodfill(488,219,15);

setfillstyle(SOLID_FILL,RED);  //mouth2color
circle(500,270,16);
floodfill(501,270,15);


setfillstyle(SOLID_FILL,BLACK); //lefteye2dotcolor
circle(447,210,4);
floodfill(448,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye2color
circle(462,210,19);
floodfill(468,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye2dotcolor
circle(523,210,4);
floodfill(524,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye2color
circle(538,210,19);
floodfill(544,210,15);

circle(100,220,76); //circle1
line(43,185,81,195);//lefteyebrow1
line(119,195,160,185);//righteyebrow1
circle(62,210,19);  //lefteye1
circle(62,210,4);
circle(138,210,19);//righteye1
circle(138,210,4);
line(80,280,130,280);
line(130,280,100,260);
line(80,280,100,260);

setfillstyle(SOLID_FILL,RED); //circle1color
circle(100,220,76);
floodfill(100,219,15);

setfillstyle(SOLID_FILL,BLACK); //lefteye1dotcolor
circle(62,210,19);
floodfill(61,210,15);

setfillstyle(SOLID_FILL,RED);  //lefteye1color
circle(62,210,19);
floodfill(68,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye1dotcolor
circle(138,210,4);
floodfill(141,210,15);

setfillstyle(SOLID_FILL,RED);  //RIGHTeye1color
circle(138,210,19);
floodfill(143,210,15);
//line(300,1,300,310); //divider line
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCONTROLS");
//line(0,310,800,310);
printf("\n0->normal");
printf("\t1->wink");
printf("\t\t\t2->sleep");
printf("\t\t3->surprise");
printf("\n4->sad");
printf("\t\t5->angry");
printf("\t\t6->happy");
printf("\t\t7->crying");


		   delay(500) ;

       }
	     else if(rv[k]==6){           	clrscr();

printf("\n\n\t Mr emoji");
printf("\t\t\t\t\t%sji               ",name);

printf("\n\n\t\t\t\t\t\t\tSCORE=%d",score);


rectangle(10,31,200,51); //name1 rectangle
rectangle(400,31,590,51);  //name2 rectangle


circle(500,220,76);  //circle2

line(443,185,483,185);//lefteyebrow2
line(519,185,559,185);//righteyebrow2
//circle(462,210,19); //lefteye2
circle(447,210,4);
//circle(538,210,19); //righteye2
circle(523,210,4);

setfillstyle(SOLID_FILL,LIGHTGREEN);  //circle2color
circle(500,220,76);
floodfill(488,219,15);
setfillstyle(SOLID_FILL,RED);  //mouth2color
circle(500,270,16);
floodfill(501,270,15);


setfillstyle(SOLID_FILL,BLACK); //lefteye2dotcolor
circle(447,210,4);
floodfill(448,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye2color
circle(462,210,19);
floodfill(468,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye2dotcolor
circle(523,210,4);
floodfill(533,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye2color
circle(538,210,19);
floodfill(544,210,15);

circle(100,220,76); //circle1
line(43,185,81,180);//lefteyebrow1
line(119,180,160,185);//righteyebrow1
circle(62,210,19);  //lefteye1
circle(62,210,4);
circle(138,210,19);//righteye1
circle(138,210,4);
line(100,290,60,260);
line(60,260,140,260);
line(100,290,140,260);

setfillstyle(SOLID_FILL,RED); //circle1color
circle(100,220,76);
floodfill(100,219,15);

setfillstyle(SOLID_FILL,BLACK); //lefteye1dotcolor
circle(62,210,19);
floodfill(61,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye1color
circle(62,210,19);
floodfill(68,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye1dotcolor
circle(138,210,4);
floodfill(141,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye1color
circle(138,210,19);
floodfill(143,210,15);
//line(300,1,300,310); //divider line
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCONTROLS");
//line(0,310,800,310);
printf("\n0->normal");
printf("\t1->wink");
printf("\t\t\t2->sleep");
printf("\t\t3->surprise");
printf("\n4->sad");
printf("\t\t5->angry");
printf("\t\t6->happy");
printf("\t\t7->crying");


       delay(500) ;
       }
       else{              clrscr();

printf("\n\n\t Mr emoji");
printf("\t\t\t\t\t%sji               ",name);

printf("\n\n\t\t\t\t\t\t\tSCORE=%d",score);



rectangle(10,31,200,51); //name1 rectangle
rectangle(400,31,590,51);  //name2 rectangle

circle(500,220,76);  //circle2

line(443,185,483,185);//lefteyebrow2
line(519,185,559,185);//righteyebrow2
//circle(462,210,19); //lefteye2
circle(447,210,4);
//circle(538,210,19); //righteye2
circle(523,210,4);

setfillstyle(SOLID_FILL,LIGHTGREEN);  //circle2color
circle(500,220,76);
floodfill(488,219,15);

setfillstyle(SOLID_FILL,RED);  //mouth2color
circle(500,270,16);
floodfill(501,270,15);


setfillstyle(SOLID_FILL,BLACK); //lefteye2dotcolor
circle(447,210,4);
floodfill(446,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye2color
circle(462,210,19);
floodfill(468,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye2dotcolor
circle(523,210,4);
floodfill(524,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye2color
circle(538,210,19);
floodfill(544,210,15);
circle(100,220,76); //circle1
line(43,185,81,185);//lefteyebrow1
line(119,185,160,185);//righteyebrow1
circle(62,210,19);  //lefteye1
circle(62,210,4);
circle(138,210,19);//righteye1
circle(138,210,4);
circle(62,240,8);
circle(62,260,6);
circle(138,240,8);
circle(138,260,6);

line(80,290,100,260);
line(80,290,120,290);
line(100,260,120,290);

setfillstyle(SOLID_FILL,RED); //circle1color
circle(100,220,76);
floodfill(100,219,15);

setfillstyle(SOLID_FILL,BLACK); //lefteye1dotcolor
circle(62,210,19);
floodfill(61,210,15);

setfillstyle(SOLID_FILL,CYAN);  //lefteye1color
circle(62,210,19);
floodfill(68,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye1dotcolor
circle(138,210,4);
floodfill(141,210,15);

setfillstyle(SOLID_FILL,CYAN);  //RIGHTeye1color
circle(138,210,19);
floodfill(143,210,15);


//line(300,1,300,310); //divider line
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nCONTROLS");
//line(0,310,800,310);
printf("\n0->normal");
printf("\t1->wink");
printf("\t\t\t2->sleep");
printf("\t\t3->surprise");
printf("\n4->sad");
printf("\t\t5->angry");
printf("\t\t6->happy");
printf("\t\t7->crying");


			  delay(500);


       }
		 } /*
printf("\n\n\t Mr emoji");
printf("\t\t\t\t\t%sji                  ",name);
printf("\n\n\t\t\t\t\t\t\tSCORE=%d               ",score);
							    */
//printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
//line(0,310,800,310);
    /*
printf("\n0->normal");
printf("\t1->wink");
printf("\t\t\t2->sleep");
printf("\t\t3->surprise");
printf("\n4->sad");
printf("\t\t5->angry");
printf("\t\t6->happy");
printf("\t\t7->crying"); */

printf("\nENTER YOUR EXPRESSION NOT SEEN = ");
l:
scanf("%c",&ev);
if(ev>=48&&ev<=55){
for(int g=0;g<8;g++)
{
if((rv[g]+48)==ev)
{
   closegraph();
initgraph(&gd,&gm,"c://Turboc3//BGI") ;


printf("\n\n\t Mr emoji");
printf("\t\t\t\t\t%sji              ",name);

printf("\n\n\t\t\t\t\t\t\tSCORE=%d",score);


rectangle(10,31,200,51); //name1 rectangle
rectangle(400,31,590,51);  //name2 rectangle

circle(100,220,76); //circle1
line(43,185,81,185);//lefteyebrow1
line(119,185,160,185);//righteyebrow1
circle(62,210,19);  //lefteye1
circle(62,210,4);
circle(138,210,19);//righteye1
circle(138,210,4);

setfillstyle(SOLID_FILL,RED); //circle1color
circle(100,220,76);
floodfill(100,219,15);

setfillstyle(SOLID_FILL,BLACK); //lefteye1dotcolor
circle(62,210,19);
floodfill(61,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye1color
circle(62,210,19);
floodfill(68,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye1dotcolor
circle(138,210,4);
floodfill(141,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye1color
circle(138,210,19);
floodfill(143,210,15);

circle(500,220,76);  //circle2

line(443,185,483,185);//lefteyebrow2
line(519,185,559,185);//righteyebrow2
circle(462,210,19); //lefteye2
circle(462,210,4);
circle(538,210,19); //righteye2
circle(538,210,4);

line(480,270,500,250);
line(480,270,520,270);
line(500,250,520,270);

setfillstyle(SOLID_FILL,LIGHTGREEN);  //circle2color
circle(500,220,76);
floodfill(488,219,15);

setfillstyle(SOLID_FILL,BLACK); //lefteye2dotcolor
circle(462,210,4);
floodfill(463,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye2color
circle(462,210,19);
floodfill(468,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye2dotcolor
circle(538,210,4);
floodfill(539,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye2color
circle(538,210,19);
floodfill(544,210,15);

//line(300,1,300,310); //divider line

for(int b=300;b<400;b=b+20)
{
sound(b);
delay(30);

}         nosound();

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t  YOU ARE NOT REAL EMOJI\n");

//for(int r=0;r<8;r++)
//printf("%d",rv[r]);
line(10,430,20,450);
line(20,450,30,430);
line(20,450,20,470);
circle(48,458,12);
line(65,430,65,470);
line(80,430,80,470);
line(65,470,80,470);
line(95,430,95,470);
line(95,470,120,470);
circle(134,458,12);
circle(160,458,12);
line(182,430,203,430);
line(182,430,182,450);
line(182,450,203,450);
line(203,450,203,470);
line(203,470,182,470);
rectangle(215,440,240,450);
line(215,440,215,470);
line(215,470,240,470);
printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tSCORE=%d\n\n\n\n",score);


getch();
clrscr();

goto x;

}
else
 continue;


  }
  }

  else
  goto l;

	 initgraph(&gd,&gm,"c://Turboc3//BGI") ;
  score=score+100;

rectangle(10,31,200,51); //name1 rectangle
rectangle(400,31,590,51);  //name2 rectangle

circle(100,220,76); //circle1
line(43,185,81,185);//lefteyebrow1
line(119,185,160,185);//righteyebrow1
circle(62,210,19);  //lefteye1
circle(62,210,4);
circle(138,210,19);//righteye1
circle(138,210,4);

setfillstyle(SOLID_FILL,RED); //circle1color
circle(100,220,76);
floodfill(100,219,15);

setfillstyle(SOLID_FILL,BLACK); //lefteye1dotcolor
circle(62,210,19);
floodfill(61,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye1color
circle(62,210,19);
floodfill(68,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye1dotcolor
circle(138,210,4);
floodfill(141,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye1color
circle(138,210,19);
floodfill(143,210,15);

circle(500,220,76);  //circle2

line(443,185,483,185);//lefteyebrow2
line(519,185,559,185);//righteyebrow2
//circle(462,210,19); //lefteye2
circle(462,210,4);
//circle(538,210,19); //righteye2
circle(538,210,4);

line(460,250,540,250);
line(500,280,460,250);
line(500,280,540,250);

setfillstyle(SOLID_FILL,YELLOW);  //circle2color
circle(500,220,76);
floodfill(488,219,15);
setfillstyle(SOLID_FILL,RED) ;
line(460,250,540,250);
line(500,280,460,250);
line(500,280,540,250);
floodfill(463,251,15)    ;





setfillstyle(SOLID_FILL,BLACK); //lefteye2dotcolor
circle(462,210,4);
floodfill(463,210,15);

setfillstyle(SOLID_FILL,WHITE);  //lefteye2color
circle(462,210,19);
floodfill(468,210,15);

setfillstyle(SOLID_FILL,BLACK); //RIGHTeye2dotcolor
circle(538,210,4);
floodfill(537,210,15);

setfillstyle(SOLID_FILL,WHITE);  //RIGHTeye2color
circle(538,210,19);
floodfill(544,210,15);

//line(300,1,300,310); //divider line
     delay(1000) ;
  }while(1);
  x :
  clrscr();

  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tPLAY AGAIN");
  printf("\n\t\t\t\t1->yes");
  printf("\n\t\t\t\t0->no");
  scanf("%d",&ch);
  if(ch==1)     {

	 score=0;
	 closegraph();

	  initgraph(&gd,&gm,"c://Turboc3//BGI") ;
	  goto z;

  }
  else
  {
closegraph();
getch();
return 0;}
}

