#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int x,y,m[8][8];

void mapp(int l, int k, int colour){
    for(int K=400,i=0;K>=0, i<8;K-=50, i++){
        for(int L=50, j=0; L<=400, j<8; L+=50, j++){
            if(k==K&&l==L){
                if(colour==1)
                    m[i][j]=1;
                else if(colour==2)
                    m[i][j]=2;
                else
                    m[i][j]=0;
            }
        }
    }
}

void kingBlue(int k1, int k2){
    setcolor(BLUE);
    k1=k1+5;
    k2=k2+5;
	rectangle(k1+5,k2+15,k1+35,k2+35);
	rectangle(k1+10,k2+10,k1+30,k2+30);
	int i;
	for(i=k2+10;i<=k2+30;i++){line(k1+12,i,k1+28,i);}
	for(i=k1+10;i<=k1+30;i=i+2){line(i,k2+4,i,k2+10);}
	mapp(k1,k2,1);
}

void kingBlack(int k1, int k2){
    setcolor(BLACK);
    k1=k1+5;
    k2=k2+5;
	rectangle(k1+5,k2+15,k1+35,k2+35);
	rectangle(k1+10,k2+10,k1+30,k2+30);
	int i;
	for(i=k2+10;i<=k2+30;i++){line(k1+12,i,k1+28,i);}
	for(i=k1+10;i<=k1+30;i=i+2){line(i,k2+4,i,k2+10);}
    mapp(k1,k2,2);
}

void queenBlue(int q1, int q2){
    setcolor(BLUE);
    q1=q1+5;
    q2=q2+5;
	line(q1+5,q2+35,q1+35,q2+35);
	line(q1+5,q2+35,q1+35,q2+10);
	line(q1+35,q2+35,q1+5,q2+10);
	line(q1+5,q2+10,q1+35,q2+10);
	int i;
	for(i=q1+5;i<=q1+35;i=i+4){line(i,q2+4,i,q2+10);}
	for(i=q1+7;i<=q1+35;i=i+4){line(i,q2+2,i,q2+10);}
	for(i=q1+5;i<=q1+35;i++){line(q1+20,q2+22,i,q2+10);}
	for(i=q1+5;i<=q1+35;i++){line(q1+20,q2+22,i,q2+35);}
    mapp(q1,q2,1);
}

void queenBlack(int q1, int q2){
    setcolor(BLACK);
    q1=q1+5;
    q2=q2+5;
	line(q1+5,q2+35,q1+35,q2+35);
	line(q1+5,q2+35,q1+35,q2+10);
	line(q1+35,q2+35,q1+5,q2+10);
	line(q1+5,q2+10,q1+35,q2+10);
	int i;
	for(i=q1+5;i<=q1+35;i=i+4){line(i,q2+4,i,q2+10);}
	for(i=q1+7;i<=q1+35;i=i+4){line(i,q2+2,i,q2+10);}
	for(i=q1+5;i<=q1+35;i++){line(q1+20,q2+22,i,q2+10);}
	for(i=q1+5;i<=q1+35;i++){line(q1+20,q2+22,i,q2+35);}
    mapp(q1,q2,2);
}

void rookBlue(int r1, int r2){
    setcolor(BLUE);
    r1=r1+4;
    r2=r2+5;
	rectangle(r1+12,r2+5,r1+28,r2+35);
	line(r1+12,r2+30,r1+28,r2+30);
	line(r1+12,r2+10,r1+28,r2+10);
	for(int i=r2+10;i<=r2+30;i++)
	{
		line(r1+12,i,r1+28,i);
	}
    mapp(r1,r2,1);
}

void rookBlack(int r1, int r2){
    setcolor(BLACK);
    r1=r1+4;
    r2=r2+5;
	rectangle(r1+12,r2+5,r1+28,r2+35);
	line(r1+12,r2+30,r1+28,r2+30);
	line(r1+12,r2+10,r1+28,r2+10);
	for(int i=r2+10;i<=r2+30;i++)
	{
		line(r1+12,i,r1+28,i);
	}
    mapp(r1,r2,2);
}

void bishopBlack(int b1, int b2){
    setcolor(BLACK);
    b1=b1+4;
    b2=b2+4;
	line(b1+10,b2+35,b1+30,b2+35);
	line(b1+10,b2+35,b1+20,b2+5);
	line(b1+30,b2+35,b1+20,b2+5);
	line(b1+15,b2+30,b1+25,b2+30);
	line(b1+15,b2+30,b1+10,b2+35);
	line(b1+25,b2+30,b1+30,b2+35);
	for(int i=b1+15;i<=b1+25;i++)
	{
		line(b1+20,b2+5,i,b2+30);
	}
    mapp(b1,b2,2);
}

void bishopBlue(int b1, int b2){
    setcolor(BLUE);
    b1=b1+4;
    b2=b2+4;
	line(b1+10,b2+35,b1+30,b2+35);
	line(b1+10,b2+35,b1+20,b2+5);
	line(b1+30,b2+35,b1+20,b2+5);
	line(b1+15,b2+30,b1+25,b2+30);
	line(b1+15,b2+30,b1+10,b2+35);
	line(b1+25,b2+30,b1+30,b2+35);
	for(int i=b1+15;i<=b1+25;i++)
	{
		line(b1+20,b2+5,i,b2+30);
	}
    mapp(b1,b2,1);
}

void knightBlue(int k1, int k2){
    setcolor(BLUE);
    k1=k1+5;
    k2=k2+5;
	line(k1+10,k2+5,k1+10,k2+35);
	line(k1+10,k2+10,k1+15,k2+10);
	line(k1+15,k2+10,k1+15,k2+20);
	line(k1+15,k2+20,k1+30,k2+20);
	line(k1+30,k2+20,k1+30,k2+35);

	line(k1+30,k2+35,k1+25,k2+35);
	line(k1+25,k2+35,k1+25,k2+25);
	line(k1+25,k2+25,k1+15,k2+25);
	line(k1+15,k2+25,k1+15,k2+35);
	line(k1+15,k2+35,k1+10,k2+35);
	line(k1+10,k2+33,k1+15,k2+33);
	line(k1+30,k2+33,k1+25,k2+33);
	int i;
	for(i=k1+10;i<=k1+20;i=i+2){line(i,k2+5,i,k2+10);}
	for(i=k2+10;i<=k2+20;i=i+2){line(k1+15,i,k1+20,i);}
	for(i=k1+10;i<=k1+15;i++){line(i,k2+10,i,k2+33);}
	for(i=k1+15;i<=k1+30;i++){line(i,k2+20,i,k2+25);}
	for(i=k1+25;i<=k1+30;i++){line(i,k2+25,i,k2+33);}
    mapp(k1,k2,1);
}

void knightBlack(int k1, int k2){
    setcolor(BLACK);
    k1=k1+5;
    k2=k2+5;
	line(k1+10,k2+5,k1+10,k2+35);
	line(k1+10,k2+10,k1+15,k2+10);
	line(k1+15,k2+10,k1+15,k2+20);
	line(k1+15,k2+20,k1+30,k2+20);
	line(k1+30,k2+20,k1+30,k2+35);

	line(k1+30,k2+35,k1+25,k2+35);
	line(k1+25,k2+35,k1+25,k2+25);
	line(k1+25,k2+25,k1+15,k2+25);
	line(k1+15,k2+25,k1+15,k2+35);
	line(k1+15,k2+35,k1+10,k2+35);
	line(k1+10,k2+33,k1+15,k2+33);
	line(k1+30,k2+33,k1+25,k2+33);
	int i;
	for(i=k1+10;i<=k1+20;i=i+2){line(i,k2+5,i,k2+10);}
	for(i=k2+10;i<=k2+20;i=i+2){line(k1+15,i,k1+20,i);}
	for(i=k1+10;i<=k1+15;i++){line(i,k2+10,i,k2+33);}
	for(i=k1+15;i<=k1+30;i++){line(i,k2+20,i,k2+25);}
	for(i=k1+25;i<=k1+30;i++){line(i,k2+25,i,k2+33);}
    mapp(k1,k2,2);
}

void pawnBlack(int p1, int p2){
    setcolor(BLACK);
    line(p1+5,p2+35,p1+35,p2+35);
    for(int i=p1+5;i<=p1+35;i++)
    {
        line(p1+20,p2+15,i,p2+30);
    }
    line(p1+8,p2+30,p1+32,p2+30);
    line(p1+5,p2+35,p1+20,p2+15);
    line(p1+35,p2+35,p1+20,p2+15);
    circle(p1+20,p2+10,5);
    mapp(p1,p2,2);
}

void pawnBlue(int p1, int p2){
    setcolor(BLUE);
    line(p1+5,p2+35,p1+35,p2+35);
    for(int i=p1+5;i<=p1+35;i++)
    {
        line(p1+20,p2+15,i,p2+30);
    }
    line(p1+8,p2+30,p1+32,p2+30);
    line(p1+5,p2+35,p1+20,p2+15);
    line(p1+35,p2+35,p1+20,p2+15);
    circle(p1+20,p2+10,5);
    mapp(p1,p2,1);
}

/*void fromCoordinates(char l, int n){
    if(l==a)
        x=50;
    if(l==)
}*/

int main()
{
    int i,j,k;
    int gd=DETECT,gm;//DETECT is macro defined in graphics.h
    int ch3[][50]={ {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
    int ch4[][50]={ {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
    initgraph(&gd,&gm,"D:\\TC\\BGI");//initialize graphic mode
//    setbkcolor(WHITE);//set color of background to darkgray
    setcolor(WHITE);
	outtextxy(25,65,"8");
	outtextxy(25,115,"7");
	outtextxy(25,165,"6");
	outtextxy(25,215,"5");
	outtextxy(25,265,"4");
	outtextxy(25,315,"3");
	outtextxy(25,365,"2");
	outtextxy(25,415,"1");

    outtextxy(65,25,"a");
	outtextxy(115,25,"b");
	outtextxy(165,25,"c");
	outtextxy(215,25,"d");
	outtextxy(265,25,"e");
	outtextxy(315,25,"f");
	outtextxy(365,25,"g");
	outtextxy(415,25,"h");

	outtextxy(490,415,"Player 1 (Blue)");
	outtextxy(490,65,"Player 2 (Black)");

    for(k=0;k<64;k++){
        for(i=0;i<50;i++){
            for(j=0;j<50;j++){
                if(k==0){
                    if(ch4[i][j]==1)
                    putpixel(j+50,i+50,GREEN);
                }
                if(k==1){
                    if(ch4[i][j]==1)
                    putpixel(j+100,i+50,WHITE);
                }
                /*if(k==1){
                    if(ch4[i][j]==1)
                    putpixel(j+100,i+50,BLUE);
                }*/
                if(k==2){
                    if(ch4[i][j]==1)
                    putpixel(j+150,i+50,GREEN);
                }
                if(k==3){
                    if(ch4[i][j]==1)
                    putpixel(j+200,i+50,WHITE);
                }
                if(k==4){
                    if(ch4[i][j]==1)
                    putpixel(j+250,i+50,GREEN);
                }
                if(k==5){
                    if(ch4[i][j]==1)
                    putpixel(j+300,i+50,WHITE);
                }
                if(k==6){
                    if(ch4[i][j]==1)
                    putpixel(j+350,i+50,GREEN);
                }
                if(k==7){
                    if(ch4[i][j]==1)
                    putpixel(j+400,i+50,WHITE);
                }
                if(k==8){
                    if(ch4[i][j]==1)
                    putpixel(j+50,i+100,WHITE);
                }
                if(k==9){
                    if(ch4[i][j]==1)
                    putpixel(j+100,i+100,GREEN);
                }
                if(k==10){
                    if(ch4[i][j]==1)
                    putpixel(j+150,i+100,WHITE);
                }
                if(k==11){
                    if(ch4[i][j]==1)
                    putpixel(j+200,i+100,GREEN);
                }
                if(k==12){
                    if(ch4[i][j]==1)
                    putpixel(j+250,i+100,WHITE);
                }
                if(k==13){
                    if(ch4[i][j]==1)
                    putpixel(j+300,i+100,GREEN);
                }
                if(k==14){
                    if(ch4[i][j]==1)
                    putpixel(j+350,i+100,WHITE);
                }
                if(k==15){
                    if(ch4[i][j]==1)
                    putpixel(j+400,i+100,GREEN);
                }
                if(k==16){
                    if(ch4[i][j]==1)
                    putpixel(j+50,i+150,GREEN);
                }
                if(k==17){
                    if(ch4[i][j]==1)
                    putpixel(j+100,i+150,WHITE);
                }
                if(k==18){
                    if(ch4[i][j]==1)
                    putpixel(j+150,i+150,GREEN);
                }
                if(k==19){
                    if(ch4[i][j]==1)
                    putpixel(j+200,i+150,WHITE);
                }
                if(k==20){
                    if(ch4[i][j]==1)
                    putpixel(j+250,i+150,GREEN);
                }
                if(k==21){
                    if(ch4[i][j]==1)
                    putpixel(j+300,i+150,WHITE);
                }
                if(k==22){
                    if(ch4[i][j]==1)
                    putpixel(j+350,i+150,GREEN);
                }
                if(k==23){
                    if(ch4[i][j]==1)
                    putpixel(j+400,i+150,WHITE);
                }
                if(k==24){
                    if(ch4[i][j]==1)
                    putpixel(j+50,i+200,WHITE);
                }
                if(k==25){
                    if(ch4[i][j]==1)
                    putpixel(j+100,i+200,GREEN);
                }
                if(k==26){
                    if(ch4[i][j]==1)
                    putpixel(j+150,i+200,WHITE);
                }
                if(k==27){
                    if(ch4[i][j]==1)
                    putpixel(j+200,i+200,GREEN);
                }
                if(k==28){
                    if(ch4[i][j]==1)
                    putpixel(j+250,i+200,WHITE);
                }
                if(k==29){
                    if(ch4[i][j]==1)
                    putpixel(j+300,i+200,GREEN);
                }
                if(k==30){
                    if(ch4[i][j]==1)
                    putpixel(j+350,i+200,WHITE);
                }
                if(k==31){
                    if(ch4[i][j]==1)
                    putpixel(j+400,i+200,GREEN);
                }
                if(k==32){
                    if(ch4[i][j]==1)
                    putpixel(j+50,i+250,GREEN);
                }
                if(k==33){
                    if(ch4[i][j]==1)
                    putpixel(j+100,i+250,WHITE);
                }
                if(k==34){
                    if(ch4[i][j]==1)
                    putpixel(j+150,i+250,GREEN);
                }
                if(k==35){
                    if(ch4[i][j]==1)
                    putpixel(j+200,i+250,WHITE);
                }
                if(k==36){
                    if(ch4[i][j]==1)
                    putpixel(j+250,i+250,GREEN);
                }
                if(k==37){
                    if(ch4[i][j]==1)
                    putpixel(j+300,i+250,WHITE);
                }
                if(k==38){
                    if(ch4[i][j]==1)
                    putpixel(j+350,i+250,GREEN);
                }
                if(k==39){
                    if(ch4[i][j]==1)
                    putpixel(j+400,i+250,WHITE);
                }
                if(k==40){
                    if(ch4[i][j]==1)
                    putpixel(j+50,i+300,WHITE);
                }
                if(k==41){
                    if(ch4[i][j]==1)
                    putpixel(j+100,i+300,GREEN);
                }
                if(k==42){
                    if(ch4[i][j]==1)
                    putpixel(j+150,i+300,WHITE);
                }
                if(k==43){
                    if(ch4[i][j]==1)
                    putpixel(j+200,i+300,GREEN);
                }
                if(k==44){
                    if(ch4[i][j]==1)
                    putpixel(j+250,i+300,WHITE);
                }
                if(k==45){
                    if(ch4[i][j]==1)
                    putpixel(j+300,i+300,GREEN);
                }
                if(k==46){
                    if(ch4[i][j]==1)
                    putpixel(j+350,i+300,WHITE);
                }
                if(k==47){
                    if(ch4[i][j]==1)
                    putpixel(j+400,i+300,GREEN);
                }
                if(k==48){
                    if(ch4[i][j]==1)
                    putpixel(j+50,i+350,GREEN);
                }
                if(k==49){
                    if(ch4[i][j]==1)
                    putpixel(j+100,i+350,WHITE);
                }
                if(k==50){
                    if(ch4[i][j]==1)
                    putpixel(j+150,i+350,GREEN);
                }
                if(k==51){
                    if(ch4[i][j]==1)
                    putpixel(j+200,i+350,WHITE);
                }
                if(k==52){
                    if(ch4[i][j]==1)
                    putpixel(j+250,i+350,GREEN);
                }
                if(k==53){
                    if(ch4[i][j]==1)
                    putpixel(j+300,i+350,WHITE);
                }
                if(k==54){
                    if(ch4[i][j]==1)
                    putpixel(j+350,i+350,GREEN);
                }
                if(k==55){
                    if(ch4[i][j]==1)
                    putpixel(j+400,i+350,WHITE);
                }
                if(k==56){
                    if(ch4[i][j]==1)
                    putpixel(j+50,i+400,WHITE);
                }
                if(k==57){
                    if(ch4[i][j]==1)
                    putpixel(j+100,i+400,GREEN);
                }
                if(k==58){
                    if(ch4[i][j]==1)
                    putpixel(j+150,i+400,WHITE);
                }
                if(k==59){
                    if(ch4[i][j]==1)
                    putpixel(j+200,i+400,GREEN);
                }
                if(k==60){
                    if(ch4[i][j]==1)
                    putpixel(j+250,i+400,WHITE);
                }
                if(k==61){
                    if(ch4[i][j]==1)
                    putpixel(j+300,i+400,GREEN);
                }
                if(k==62){
                    if(ch4[i][j]==1)
                    putpixel(j+350,i+400,WHITE);
                }
                if(k==63){
                    if(ch4[i][j]==1)
                    putpixel(j+400,i+400,GREEN);
                }
                /*if(k==2){
                    if(ch3[i][j]==1)
                    putpixel(j+150,i+50,BLUE);
                }*/
            }
//            delay(100);
        }
    }
//    for(int l = 1; l<=8; l++){

    for(int l=1; l<=8; l++){
        int p1=04,p2=103;
        p1 = 04 + 50*l;
        pawnBlack(p1,p2);
    }

    for(int l=1; l<=8; l++){
        int p1=04,p2=353;
        p1 = 04 + 50*l;
        pawnBlue(p1,p2);
    }

	knightBlack(100,50);
	knightBlack(350,50);
	knightBlue(100,400);
	knightBlue(350,400);

    bishopBlack(300,50);
    bishopBlue(300,400);
    bishopBlack(150,50);
    bishopBlue(150,400);

	rookBlue(400,400);
	rookBlue(50,400);
	rookBlack(400,50);
	rookBlack(50,50);

	queenBlack(200,50);
	queenBlue(200,400);

    kingBlack(250,50);
	kingBlue(250,400);

//    }
    getch();
    closegraph();
}


