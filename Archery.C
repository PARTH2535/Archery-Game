#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

union REGS i,o;
int f,ff=1;
struct arccoordstype arcinfo;
int t,flag=0;
int gm=0,gd=0,button,y,a,b,c,bc,j,k,jk,h,x3,y3,alh=0,s,scor=0,sp=0,e,m=2;
void main()
{

front();
 a:
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setcolor(GREEN);
       settextstyle(SMALL_FONT,HORIZ_DIR,9);
       outtextxy(305,124,"Archery");
	setcolor(WHITE);
       settextstyle(SMALL_FONT,HORIZ_DIR,7);
       outtextxy(305,224,"Menu");
 setcolor(WHITE);
       settextstyle(SMALL_FONT,HORIZ_DIR,7);
       outtextxy(305,324,"Exit");
  setcolor(WHITE);
       settextstyle(SMALL_FONT,HORIZ_DIR,7);
       outtextxy(305,264,"New Game");
  flag=0;
   while(flag==0)
   {
    showmouseptr();
    getmouseptr(&button,&a,&b);
	   if(button==1)
		{     x3=a;y3=b;
		 if((x3>=305 && x3<=325)&& (y3>=324 && y3<=349))
		    {
		     goto c;
		    //break;
		      }
		      if((x3>=305 && x3<=325)&& (y3>=264 && y3<=300))
		    {
		    goto e;
		      }
		  }
       }
closegraph();
e:
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setcolor(GREEN+WHITE);
	rectangle(5,5,634,474);
	rectangle(6,6,633,473);
	setcolor(YELLOW);
	rectangle(7,7,632,472);
	setcolor(GREEN+WHITE);
	rectangle(8,8,631,471);
	rectangle(9,9,630,470);
	rectangle(10,10,629,469);
	setcolor(WHITE);
       settextstyle(SMALL_FONT,HORIZ_DIR,8);
       outtextxy(250,164,"Level 1");
	setcolor(WHITE);
       settextstyle(SMALL_FONT,HORIZ_DIR,9);
       outtextxy(250,264,"Get Ready !!!!!");
       getch();
closegraph();
d:
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
flag=0;
setbkcolor(0);
s=-60;e=60;
for(f=1;f<=20;f++)
 {
 setcolor(BLUE);
 line(280,f+360,360,f+360);
       }
	setcolor(RED);
       settextstyle(SMALL_FONT,HORIZ_DIR,4);
       outtextxy(305,364,"SHOOT");

arrows(0);
setcolor(GREEN+WHITE);
rectangle(5,5,634,474);
rectangle(6,6,633,473);
setcolor(YELLOW);
rectangle(7,7,632,472);
setcolor(GREEN+WHITE);
rectangle(8,8,631,471);
rectangle(9,9,630,470);
rectangle(10,10,629,469);
setcolor(YELLOW);
settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
outtextxy(530,20,"SCORE");
scor=0;
m=6;
equip();
arrow1(0,14);
alh=0;
mousereg();
while(m>1)
{
    for(j=-70;j<=70;j+=2)
       {   c=1;
	   tar(j,c);
	   delay(10);
	   getmouseptr(&button,&a,&b);
	   if(button==1)
	   {
		x3=a;y3=b;
		if((x3>280 && x3<360 )|| (y3>361 && y3<379))
		     {

		  bc=1;
		     }
	   }
	   if(bc==1)
	       {
		   arrow1(0,0);
			setcolor(YELLOW);
			line(40+sp+36,240,80+sp+36,240);
			line(80+sp+36,240,75+sp+36,235);
			line(80+sp+36,240,75+sp+36,245);
			line(40+sp+36,241,80+sp+36,241);
			line(79+sp+36,240,74+sp+36,236);
			line(79+sp+36,241,74+sp+36,245);

			line(46+sp+36,240,41+sp+36,236);
			line(46+sp+36,241,41+sp+36,245);
			line(42+sp+36,240,37+sp+36,236);
			line(42+sp+36,241,37+sp+36,245);
			if(ff==1)
			delay(8);
			else if(ff==0)
			delay(4);
			setcolor(0);
			line(40+sp+36,240,80+sp+36,240);
			line(80+sp+36,240,75+sp+36,235);
			line(80+sp+36,240,75+sp+36,245);
			line(40+sp+36,241,80+sp+36,241);
			line(79+sp+36,240,74+sp+36,236);
			line(79+sp+36,241,74+sp+36,245);
			line(46+sp+36,240,41+sp+36,236);
			line(46+sp+36,241,41+sp+36,245);
			line(42+sp+36,240,37+sp+36,236);
			line(42+sp+36,241,37+sp+36,245);
			sp=sp+3;
			}  //if end
				  if((sp+80+36)>=579)
				     {  arrow1(0,14);
					score(j);
					bc=0; sp=0;
					alh++;
					button=0;
					setcolor(YELLOW);
					arrows(alh);
					m--;
				   }
		       c=0;
		       tar(j,c);
		       if(ff==0)
			 ff=2;
		}      //for() ends
	}//while ends
      sleep(1);
      closegraph();
      initgraph(&y,&m,"c:\\turboc3\\bgi");
      setcolor(1);
      settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
      outtextxy(255,117,"SCORE");
	 for(t=0;t<=360;t++)
      { setcolor(random(15));
      ellipse(300,200,t,t+2,30,30);
       delay(1);
       setcolor(random(15));
      ellipse(300,200,t,t+2,35,30);
      }
      setcolor(GREEN);
      select(scor,-250,133);
      getch();
      if(ff==1)
      {
      initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setcolor(GREEN+WHITE);
	rectangle(5,5,634,474);
	rectangle(6,6,633,473);
	setcolor(YELLOW);
	rectangle(7,7,632,472);
	setcolor(GREEN+WHITE);
	rectangle(8,8,631,471);
	rectangle(9,9,630,470);
	rectangle(10,10,629,469);
	setcolor(WHITE);
	 settextstyle(SMALL_FONT,HORIZ_DIR,8);
       outtextxy(250,100,"Congratulation");
       settextstyle(SMALL_FONT,HORIZ_DIR,8);
       outtextxy(250,164,"Level 2");
	setcolor(WHITE);
       settextstyle(SMALL_FONT,HORIZ_DIR,9);
       outtextxy(250,264,"Get Ready !!!!!");
       ff=0;
       getch();
       closegraph();
       goto d;
       }
      for(t=0;t<=50;t++)
      {
      setcolor(14);
   line(40+t,230,40+t,250);
   line(560+t,230,560+t,250);
   }
      settextstyle(SMALL_FONT,HORIZ_DIR,4);
   setcolor(BLUE);
   outtextxy(45,235,"Continue");
   outtextxy(575,235,"Quit");
   restrictmouseptr(0,80,640,440);
   flag=0;
   while(flag==0)
   {
    showmouseptr();
    getmouseptr(&button,&a,&b);
	   if(button==1)
		{     x3=a;y3=b;
		if((x3>41 && x3<79 )&& (y3>231 && y3<249))
		   {
		    flag=1;
		    //break;
		    }
		else if((x3>=561 && x3<=599 )&& (y3>=231 && y3<=249))
		    {
		     flag=2;
		    //break;
		      }
		  }
       }

	       if(flag==1)
		 goto a;
	       else
 //     setcolor(GREEN);
//      select(scor,-250,133);
  //    setcolor(1);
   //   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
 //     outtextxy(-300,317,"GAME OVER");
      c:
      finalwindow();
 }
arrow1(int sp,int col)
 {
	setcolor(col);
	line(40+sp+36,240,80+sp+36,240);
	line(80+sp+36,240,75+sp+36,235);
	line(80+sp+36,240,75+sp+36,245);
	line(40+sp+36,241,80+sp+36,241);
	line(79+sp+36,240,74+sp+36,236);
	line(79+sp+36,241,74+sp+36,245);

	line(46+sp+36,240,41+sp+36,236);
	line(46+sp+36,241,41+sp+36,245);
	line(42+sp+36,240,37+sp+36,236);
	line(42+sp+36,241,37+sp+36,245);
	return 0;
 }

 tar(j,c)
{
   setcolor(c*4);
   ellipse(579,240+j,0,360,40,90);
   setcolor(c*3);
   ellipse(579,240+j,0,360,33,75);
   setcolor(c*5);
   ellipse(579,240+j,0,360,26,60);
   setcolor(c*9);
   ellipse(579,240+j,0,360,19,45);
   setcolor(c*8);
   ellipse(579,240+j,0,360,12,30);
   setcolor(c*10);
   ellipse(579,240+j,0,360,5,15);
   return 0;
}
 initmouse()
 {
 i.x.ax=0;
 int86(0x33,&i,&o);
 return(o.x.ax);
 }

showmouseptr()
{
 i.x.ax=1;
 int86(0x33,&i,&o);
 return 0;
}

 restrictmouseptr(int x1,int y1,int x2,int y2)
{
 i.x.ax=7;
 i.x.cx=x1;
 i.x.dx=x2;
 int86(0x33,&i,&o);
 i.x.ax=8;
 i.x.cx=y1;
 i.x.dx=y2;
 int86(0x33,&i,&o);
 return 0;
}

 getmouseptr(int *button,int *a,int *b)
 {
 i.x.ax=3;
 int86(0x33,&i,&o);
 *button=o.x.bx;
 *a=o.x.cx;
 *b=o.x.dx;
 return 0;
}

 mousereg()
 {
 int x1,x2,y1,y2,ce,k;
 initmouse();
 showmouseptr();
 restrictmouseptr(281,361,359,379);
 return 0;
 }
 arrows(alh)
{   int z=0,r;
     r=5-alh;
     setcolor(YELLOW);
   settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
   outtextxy(30,20,"ARROWS REMAINING");
   for(f=r,z=0;f>0;f--)
   {
	line(40,60+z*10,80,60+z*10);
	line(80,60+z*10,75,55+z*10);
	line(80,60+z*10,75,65+z*10);
	z=z+1;
   }
 for(f=alh,z=0;f>0;f--)
  {
	setcolor(0);
	line(40,60+z*10,80,60+z*10);
	line(80,60+z*10,75,55+z*10);
	line(80,60+z*10,75,65+z*10);
	z=z+1;
  }
  return 0;
}

 score (int j)
  {
    if( (j>=-90 && j<=-74) || (j>=74 && j<=90))
       scor=scor+10;

    else if((j>=-72 && j<=-60) || (j>=60 && j<=72))
	  scor=scor+20;
    else  if((j>=-58 && j<=-42) || (j>=42 && j<=58))
	 scor=scor+30;
    else  if((j>=-40 && j<=-32) || (j>=32 && j<=40))
       scor=scor+40;
     else  if((j>=-30 && j<=-18) || (j>=18 && j<=30))
	 scor=scor+50;
     else  if((j>=-16 && j<=0) || (j>=0 && j<=16))
	 scor=scor+60;
     else if (j == 300)
	 scor=0;

	 for(jk=50;jk<=120;jk++)
	 {
	    setcolor(0);
	    line(530,jk,620,jk);
	 }
	  setcolor(YELLOW);
	  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	  select(scor,0,0);
	  return 0;
}


 equip()
 {
    int kl=2;
   int midx, midy,i,j,k,y=90,c;
	    c=y/2;
	    for(c=50;c<=52;c+=1)
	    {      setcolor(kl);
	     line(26+c,170,26+c,310);
	     }
	     for(c=50;c<=54;c+=1)
	    {      setcolor(kl);
	     line(60+c,222,60+c,255);
	     }

	     for(c=180;c<=270;c++)
	     {
	     setcolor(0);
	   arc(86,166,c,c+1,10);
	   getarccoords(&arcinfo);
	   setcolor(kl);
	   circle(arcinfo.xend, arcinfo.yend,2);
    }

	     for(c=-50;c<=110;c++)
	     {
	     setcolor(0);
	   arc(96,201,c,c+1,28);
	   getarccoords(&arcinfo);
	   setcolor(kl);
	   circle(arcinfo.xend, arcinfo.yend,2);
    }
	     for(c=50,i=4;c>=-110;c--)
	     {
	     setcolor(0);
	     line(127,170,127,315);
	     line(126,170,126,315);
	   arc(96,278,c,c+1,28);
	   getarccoords(&arcinfo);
	   setcolor(kl);
	   i=i+2;
	   if(i>14)
	   {i=2;}
	   circle(arcinfo.xend,arcinfo.yend,2);
	    }
       for(c=90;c<=180;c++)
	     {
	     setcolor(0);
	   arc(86,314,c,c+1,10);
	   getarccoords(&arcinfo);
	   setcolor(kl);
	   circle(arcinfo.xend, arcinfo.yend,2);
    }
    return 0;
}
 front()
{
 int m=0,x=0,y=0,i=1,j=0;
    initgraph(&y ,&m,"c:\\turboc3\\bgi");
    settextstyle(SMALL_FONT,HORIZ_DIR,9);
    outtextxy(250,200,"ARCHERY");
    for(j=110;j<420;j+=10,i++)
    {
    setcolor(i);
    circle(x+300,200+y,j);
    delay(100);
    if(i>=15)
	i=0;
    }
    for(j=110;j<420;j+=10)
    {
    setcolor(0);
    circle(x+300,200+y,j);
    delay(100);
    }
    closegraph();
    return 0;
}
 select(int scor,int p,int q)
{
switch(scor)
     { case 0: outtextxy(530+p,50+q,"0");
		       break;
       case 10: outtextxy(530+p,50+q,"10");
	       break;
       case 20: outtextxy(530+p,50+q,"20");
	       break;
       case 30: outtextxy(530+p,50+q,"30");
	       break;
       case 40: outtextxy(530+p,50+q,"40");
	       break;
      case 50: outtextxy(530+p,50+q,"50");
	       break;
      case 60: outtextxy(530+p,50+q,"60");
	       break;
      case 70: outtextxy(530+p,50+q,"70");
	       break;
      case 80: outtextxy(530+p,50+q,"80");
	       break;
      case 90: outtextxy(530+p,50+q,"90");
	       break;
      case 100: outtextxy(530+p,50+q,"100");
	       break;
      case 110: outtextxy(530+p,50+q,"110");
	       break;
      case 120: outtextxy(530+p,50+q,"120");
	       break;
      case 130: outtextxy(530+p,50+q,"130");
	       break;
      case 140: outtextxy(530+p,50+q,"140");
	       break;
      case 150: outtextxy(530+p,50+q,"150");
	       break;
      case 160: outtextxy(530+p,50+q,"160");
	       break;
      case 170: outtextxy(530+p,50+q,"170");
	       break;
      case 180: outtextxy(530+p,50+q,"180");
	       break;
      case 190: outtextxy(530+p,50+q,"190");
	       break;
      case 200: outtextxy(530+p,50+q,"200");
	       break;
      case 210: outtextxy(530+p,50+q,"210");
	       break;
      case 220: outtextxy(530+p,50+q,"220");
	       break;
      case 230: outtextxy(530+p,50+q,"230");
	       break;
      case 240: outtextxy(530+p,50+q,"240");
	       break;
      case 250: outtextxy(530+p,50+q,"250");
	       break;
      case 260: outtextxy(530+p,50+q,"260");
	       break;
      case 270: outtextxy(530+p,50+q,"270");
	       break;
      case 280: outtextxy(530+p,50+q,"280");
	       break;
      case 290: outtextxy(530+p,50+q,"290");
	       break;
      case 300: outtextxy(530+p,50+q,"300");
	       break;
      case 310: outtextxy(530+p,50+q,"310");
	       break;
      case 320: outtextxy(530+p,50+q,"320");
	       break;
      case 330: outtextxy(530+p,50+q,"330");
	       break;
      case 340: outtextxy(530+p,50+q,"340");
	       break;
      case 350: outtextxy(530+p,50+q,"350");
	       break;
      case 360: outtextxy(530+p,50+q,"360");
	       break;
      }
      return 0;
}

void flower(int i,int j)
{
setcolor(14);
circle(320+i,240+j,10);
setfillstyle(SOLID_FILL,RED);
floodfill(323+i,241+j,14);
//1
setcolor(14);
ellipse(310+i,220+j,90,-90,6,12);
ellipse(330+i,220+j,-90,90,6,12);
ellipse(320+i,207+j,180,0,8,2);
//2
ellipse(310+i,260+j,90,-90,6,12);
ellipse(330+i,260+j,-90,90,6,12);
ellipse(320+i,273+j,0,180,8,2);
//3
ellipse(298+i,248+j,180,0,12,6);
ellipse(298+i,233+j,0,180,12,6);
ellipse(286+i,240+j,-90,90,2,8);
//4
ellipse(342+i,247+j,180,0,12,6);
ellipse(342+i,233+j,0,180,12,6);
ellipse(354+i,240+j,90,-90,2,8);
}

 finalwindow()
{
    int y=0,m=0,k;
    initgraph(&y,&m,"c:\\turboc3\\bgi");
    for(k=-285;k<=320;k+=70)
    {
       flower(k,-205);
       flower(k,+180);
       delay(100);
    }
    for(k=-140;k<=180;k+=40)
    {
       flower(-285,k);
       flower(276,k);
       delay(100);
    }
    setcolor(2);
    settextstyle(SMALL_FONT,HORIZ_DIR,9);
    outtextxy(110,100,"Created By");
    settextstyle(SMALL_FONT,HORIZ_DIR,9);
    outtextxy(110,200,"Darshit Patel 16IT067");
    settextstyle(SMALL_FONT,HORIZ_DIR,9);
    outtextxy(110,300,"Parth Navsarivala 16IT058");
    getch();
    cleardevice();
    closegraph();
    return 0;
}
