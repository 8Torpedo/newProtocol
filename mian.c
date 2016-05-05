#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char frame[10];
int sum;
int psum;
int p0,p1,p2,p3,p4;
int HMW=150;
int wood;
int send;
int arg;
int cast;
int i;
int suma;
int par1;
int par2;

void BadcmdTW()
{
    printf("\n1 Command Throw WOOD: ");
    frame[0]='T';
    frame[1]='W';
    frame[2]=' ';
    printf("%c%c%c ", frame[0],frame[1],frame[2]);
    send = 11;
    printf("%#x %#x ", send, wood);
    p0=(int)frame[0];
    p1=(int)frame[1];
    p2=(int)frame[2];
    sum=p0+p1+p2+wood+send;
    printf("%#x ", sum);
    printf("\n1 Command Throw WOOD: %#x %#x %#x ", frame[0],frame[1],frame[2]);
    printf("%#x %#x ", send, wood);
    printf("%#x ", sum);
}

void BadcmdTS()
{
    printf("\n1 Command Throw SAWDUST: ");
    frame[0]='T';
    frame[1]='S';
    frame[2]=' ';
    printf("%c%c%c ", frame[0],frame[1],frame[2]);
    send = 11;
    printf("%#x %#x ", send, wood);
    p0=(int)frame[0];
    p1=(int)frame[1];
    p2=(int)frame[2];
    sum=p0+p1+p2+wood+send;
    printf("%#x ", sum);
    printf("\n1 Command Throw SAWDUST: %#x %#x %#x ", frame[0],frame[1],frame[2]);
    printf("%#x %#x ", send, wood);
    printf("%#x ", sum);
}

void BadcmdAW()
{
    printf("\n1 Command Allow WATER: ");
    frame[0]='A';
    frame[1]='W';
    frame[2]=' ';
    printf("%c%c%c ", frame[0],frame[1],frame[2]);
    send = 11;
    printf("%#x %#x ", send, wood);
    p0=(int)frame[0];
    p1=(int)frame[1];
    p2=(int)frame[2];
    sum=p0+p1+p2+wood+send;
    printf("%#x ", sum);
    printf("\n1 Command Throw SAWDUST: %#x %#x %#x ", frame[0],frame[1],frame[2]);
    printf("%#x %#x ", send, wood);
    printf("%#x ", sum);
}


int main (int argc, char *argv[])
{
    if (strcmp(argv[1],"STF")==0 && (argc==2))
    {
        printf("\n1 Command Start FIRE: ");
        frame[0]='S';
        frame[1]='T';
        frame[2]='F';
        printf("%c%c%c ", frame[0],frame[1],frame[2]);
        send = 1;
        arg = 0;
        printf("%#x %#x ", send, arg);
        p0=(int)frame[0];
        p1=(int)frame[1];
        p2=(int)frame[2];
        sum=p0+p1+p2+send+arg;
        printf("%#x ", sum);

    }
    else if (strcmp(argv[1],"SPF")==0 && (argc==2))
    {
        printf("\n1 Command Stop FIRE: ");
        frame[0]='S';
        frame[1]='P';
        frame[2]='F';
        printf("%c%c%c ", frame[0],frame[1],frame[2]);
        send = 1;
        arg = 0;
        printf("%#x %#x ", send, arg);
        p0=(int)frame[0];
        p1=(int)frame[1];
        p2=(int)frame[2];
        sum=p0+p1+p2+send+arg;
        printf("%#x ", sum);
    }
    else if (strcmp(argv[1],"TW")==0)
    {
        if((argc==7) && (strcmp(argv[2], "1")==0) && (strcmp(argv[3], "2")==0))
            {
                frame[0]='T';
                frame[1]='W';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[2],NULL,16);
                wood = strtol(argv[3],NULL,16);
                suma=strtol(argv[4],NULL,16);
                sum=p0+p1+p2+wood+send;
                printf("\nCHS: %#x", sum);
                if(suma!=sum)
                {
                    puts("Check sum error.");
                    BadcmdTW();
                }
                else
                {
                    printf("\n1 Command Throw WOOD: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                    par1 = strtol(argv[5],NULL,16);
                    par2 = strtol(argv[6],NULL,16);
                    psum = 2;
                    printf("%#x %#x %#x ", par1, par2, psum);
                }

            }
            else if((argc==6) && (strcmp(argv[2], "1")==0) && (strcmp(argv[3], "1")==0))
            {
                frame[0]='T';
                frame[1]='W';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[2],NULL,16);
                wood = strtol(argv[3],NULL,16);
                suma=strtol(argv[4],NULL,16);
                sum=p0+p1+p2+wood+send;
                printf("\nCHS: %#x", sum);
                if(suma!=sum)
                {
                    puts("Check sum error.");
                    BadcmdTW();
                }
                else
                {
                    printf("\n1 Command Throw WOOD: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                    par1 = strtol(argv[5],NULL,16);
                    psum = 2;
                    printf("%#x %#x %#x ", par1, par2, psum);
                }
            }
            else
            {
                puts("ERROR");
            }
    }
    else if (strcmp(argv[1],"TS")==0)
    {
        if((argc==7) && (strcmp(argv[2], "1")==0) && (strcmp(argv[3], "2")==0))
            {
                frame[0]='T';
                frame[1]='S';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[2],NULL,16);
                wood = strtol(argv[3],NULL,16);
                suma=strtol(argv[4],NULL,16);
                sum=p0+p1+p2+wood+send;
                printf("\nCHS: %#x", sum);
                if(suma!=sum)
                {
                    puts("Check sum error.");
                    BadcmdTS();
                }
                else
                {
                    printf("\n1 Command Throw SAWDUST: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                    par1 = strtol(argv[5],NULL,16);
                    par2 = strtol(argv[6],NULL,16);
                    psum = 2;
                    printf("%#x %#x %#x ", par1, par2, psum);
                }

            }
            else if((argc==6) && (strcmp(argv[2], "1")==0) && (strcmp(argv[3], "1")==0))
            {
                frame[0]='T';
                frame[1]='S';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[2],NULL,16);
                wood = strtol(argv[3],NULL,16);
                suma=strtol(argv[4],NULL,16);
                sum=p0+p1+p2+wood+send;
                printf("\nCHS: %#x", sum);
                if(suma!=sum)
                {
                    puts("Check sum error.");
                    BadcmdTS();
                }
                else
                {
                    printf("\n1 Command Throw SAWDUST: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                    par1 = strtol(argv[5],NULL,16);
                    psum = 1;
                    printf("%#x %#x %#x ", par1, par2, psum);
                }
            }
            else
            {
                puts("ERROR");
            }
    }
    else if (strcmp(argv[1],"AW")==0)
    {
        if((argc>=6) && (strcmp(argv[2], "1")==0) && (strcmp(argv[3], "1")==0))
            {
                frame[0]='A';
                frame[1]='W';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[2],NULL,16);
                wood = strtol(argv[3],NULL,16);
                suma=strtol(argv[4],NULL,16);
                sum=p0+p1+p2+wood+send;
                printf("\nCHS: %#x", sum);
                if(suma!=sum)
                {
                    puts("Check sum error.");
                    BadcmdAW();
                }
                else
                {
                    printf("\n1 Command Allow WATER: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                    par1 = strtol(argv[5],NULL,16);
                    psum = 1;
                    printf("%#x %#x %#x ", par1, par2, psum);
                }

            }
            else if((argc==5) && (strcmp(argv[2], "1")==0) && (strcmp(argv[3], "0")==0))
            {
                frame[0]='A';
                frame[1]='W';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[2],NULL,16);
                wood = strtol(argv[3],NULL,16);
                suma=strtol(argv[4],NULL,16);
                sum=p0+p1+p2+wood+send;
                printf("\nCHS: %#x", sum);
                if(suma!=sum)
                {
                    puts("Check sum error.");
                    BadcmdAW();
                }
                else
                {
                    printf("\n1 Command Allow WATER: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                }
            }
            else
            {
                puts("ERROR");
            }
    }
    else if (strcmp(argv[1],"HMW")==0 && (argc==2))
    {
        printf("\n1 Command How much WATER: ");
        frame[0]='H';
        frame[1]='M';
        frame[2]='W';
        printf("%c%c%c ", frame[0],frame[1],frame[2]);
        send = 1;
        arg = 0;
        printf("%#x %#x ", send, arg);
        p0=(int)frame[0];
        p1=(int)frame[1];
        p2=(int)frame[2];
        sum=p0+p1+p2+send+arg;
        printf("%#x ", sum);
        frame[6]='1';
        frame[7]='5';
        frame[8]='0';
        frame[9]='3';
        for (i=6; i<=9; i++)
        {
            cast = (int)frame[i];
            printf("%#x ", cast -48);
        }
    }
    else if (strcmp(argv[1],"-r")==0)
    {
        if ((strcmp(argv[2],"53")==0) && (strcmp(argv[3],"54")==0) && (strcmp(argv[4],"46")==0)) // STF
        {
            if ((strcmp(argv[5],"1")==0) && (strcmp(argv[6],"0")==0) && (strcmp(argv[7],"ee")==0) && (argc==8))
            {
                printf("\n1 Command Start FIRE: ");
                frame[0]='S';
                frame[1]='T';
                frame[2]='F';
                printf("%c%c%c ", frame[0],frame[1],frame[2]);
                send = 1;
                arg = 0;
                printf("%#x %#x ", send, arg);
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                sum=p0+p1+p2+send+arg;
                printf("%#x ", sum);

                printf("\n1 Command Start FIRE: %#x %#x %#x ", frame[0],frame[1],frame[2]);
                printf("%#x %#x ", send, arg);
                printf("%#x ", sum);
            }
            else
            {
                printf("\n1 Command Start FIRE: ");
                frame[0]='S';
                frame[1]='T';
                frame[2]='F';
                printf("%c%c%c ", frame[0],frame[1],frame[2]);
                send = 11;
                arg = 0;
                printf("%#x %#x ", send, arg);
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                sum=p0+p1+p2+send+arg;
                printf("%#x ", sum);

                printf("\n1 Command Start FIRE: %#x %#x %#x ", frame[0],frame[1],frame[2]);
                send = 11;
                arg = 0;
                printf("%#x %#x ", send, arg);
                printf("%#x ", sum);
            }
        }
        else if ((strcmp(argv[2],"53")==0) && (strcmp(argv[3],"50")==0) && (strcmp(argv[4],"46")==0) ) // SPF
        {
            if ((strcmp(argv[5],"1")==0) && (strcmp(argv[6],"0")==0) && (strcmp(argv[7],"ea")==0) && (argc==8))
            {
                printf("\n1 Command Stop FIRE: ");
                frame[0]='S';
                frame[1]='P';
                frame[2]='F';
                printf("%c%c%c ", frame[0],frame[1],frame[2]);
                send = 1;
                arg = 0;
                printf("%#x %#x ", send, arg);
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                sum=p0+p1+p2+send+arg;
                printf("%#x ", sum);
                printf("\n1 Command Stop FIRE: %#x %#x %#x ", frame[0],frame[1],frame[2]);
                send = 1;
                arg = 0;
                printf("%#x %#x ", send, arg);
                printf("%#x ", sum);
            }
            else
            {
                printf("\n1 Command Stop FIRE: ");
                frame[0]='S';
                frame[1]='P';
                frame[2]='F';
                printf("%c%c%c ", frame[0],frame[1],frame[2]);
                send = 11;
                arg = 0;
                printf("%#x %#x ", send, arg);
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                sum=p0+p1+p2+send+arg;
                printf("%#x ", sum);
                printf("%#x %#x ", send, arg);
                printf("%#x ", sum);
            }
        }
        else if ((strcmp(argv[2],"48")==0) && (strcmp(argv[3],"4d")==0) && (strcmp(argv[4],"57")==0) ) // HMW
        {
            if ((strcmp(argv[5],"1")==0) && (strcmp(argv[6],"0")==0) && (strcmp(argv[7],"ed")==0)&& (argc==8))
            {
                printf("\n1 Command How much WATER: ");
                frame[0]='H';
                frame[1]='M';
                frame[2]='W';
                printf("%c%c%c ", frame[0],frame[1],frame[2]);
                send = 1;
                arg = 0;
                printf("%#x %#x ", send, arg);
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                sum=p0+p1+p2+send+arg;
                printf("%#x ", sum);
                frame[6]='1';
                frame[7]='5';
                frame[8]='0';
                frame[9]='3';
                for (i=6; i<=9; i++)
                {
                    cast = (int)frame[i];
                    printf("%#x ", cast -48);
                }
                printf("\n1 Command How much water: %#x %#x %#x ", frame[0],frame[1],frame[2]);
                printf("%#x %#x ", send, arg);
                printf("%#x ", sum);
                for (i=6; i<=9; i++)
                {
                    cast = (int)frame[i];
                    printf("%#x ", cast -48);
                }
            }
            else
            {
                printf("\n1 Command How much WATER: ");
                frame[0]='H';
                frame[1]='M';
                frame[2]='W';
                printf("%c%c%c ", frame[0],frame[1],frame[2]);
                send = 11;
                arg = 0;
                printf("%#x %#x ", send, arg);
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                sum=p0+p1+p2+send+arg;
                printf("%#x ", sum);
                frame[6]='1';
                frame[7]='5';
                frame[8]='0';
                frame[9]='3';
                for (i=6; i<=9; i++)
                {
                    cast = (int)frame[i];
                    printf("%#x ", cast -48);
                }
            }
        }
        else if ((strcmp(argv[2],"54")==0) && (strcmp(argv[3],"57")==0)) // TW
        {
            if((argc==9) && (strcmp(argv[4], "1")==0) && (strcmp(argv[5], "2")==0))
            {
                frame[0]='T';
                frame[1]='W';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[4],NULL,16);
                wood = strtol(argv[5],NULL,16);
                suma=strtol(argv[6],NULL,16);
                sum=p0+p1+p2+wood+send;
                if(suma!=sum)
                {
                    puts("Check sum error.");
                    BadcmdTW();
                }
                else
                {
                    printf("\n1 Command Throw WOOD: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                    par1 = strtol(argv[7],NULL,16);
                    par2 = strtol(argv[8],NULL,16);
                    psum = 2;
                    printf("%#x %#x %#x ", par1, par2, psum);
                }
            }
            else if((argc==8) && (strcmp(argv[4], "1")==0) && (strcmp(argv[5], "1")==0))
            {
                frame[0]='T';
                frame[1]='W';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[4],NULL,16);
                wood = strtol(argv[5],NULL,16);
                suma=strtol(argv[6],NULL,16);
                sum=p0+p1+p2+wood+send;
                printf("%#x ", sum);
                if(suma!=sum)
                {
                    puts("Check sum error");
                    BadcmdTW();
                }
                else
                {
                    printf("\n1 Command Throw WOOD: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                    par1 = strtol(argv[7],NULL,16);
                    psum = 1;
                    printf("%#x %#x ", par1, psum);
                }
            }
            else
            {
                puts("Error.");
                BadcmdTW();
            }
        }
        else if ((strcmp(argv[2],"54")==0) && (strcmp(argv[3],"53")==0)) // TS
        {
            if((argc==9) && (strcmp(argv[4], "1")==0) && (strcmp(argv[5], "2")==0))
            {
                frame[0]='T';
                frame[1]='S';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[4],NULL,16);
                wood = strtol(argv[5],NULL,16);
                suma=strtol(argv[6],NULL,16);
                sum=p0+p1+p2+wood+send;
                if(suma!=sum)
                {
                    puts("Check sum error.");
                    BadcmdTS();
                }
                else
                {
                    printf("\n1 Command Throw SAWDUST: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                    par1 = strtol(argv[7],NULL,16);
                    par2 = strtol(argv[8],NULL,16);
                    psum = 2;
                    printf("%#x %#x %#x ", par1, par2, psum);
                }
            }
            else if((argc==8) && (strcmp(argv[4], "1")==0) && (strcmp(argv[5], "1")==0))
            {
                frame[0]='T';
                frame[1]='S';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[4],NULL,16);
                wood = strtol(argv[5],NULL,16);
                suma=strtol(argv[6],NULL,16);
                sum=p0+p1+p2+wood+send;
                if(suma!=sum)
                {
                    puts("Check sum error");
                    BadcmdTS();
                }
                else
                {
                    printf("\n1 Command Throw SAWDUST: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                    par1 = strtol(argv[7],NULL,16);
                    psum = 1;
                    printf("%#x %#x ", par1, psum);
                }
            }
            else
            {
                puts("General Error. Need more parameters");
                BadcmdTS();
            }
        }
        else if ((strcmp(argv[2],"41")==0) && (strcmp(argv[3],"57")==0)) // AW
        {

            if((argc==8) && (strcmp(argv[4], "1")==0) && (strcmp(argv[5], "1")==0))
            {
                frame[0]='A';
                frame[1]='W';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[4],NULL,16);
                wood = strtol(argv[5],NULL,16);
                suma=strtol(argv[6],NULL,16);
                sum=p0+p1+p2+wood+send;
                if(suma!=sum)
                {
                    puts("Check sum error");
                    BadcmdAW();
                }
                else
                {
                    printf("\n1 Command Allow WATER: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                    par1 = strtol(argv[7],NULL,16);
                    psum = 1;
                    printf("%#x %#x ", par1, psum);
                }
            }
            else if((argc==7) && (strcmp(argv[4], "1")==0) && (strcmp(argv[5], "0")==0))
            {
                frame[0]='A';
                frame[1]='W';
                frame[2]=' ';
                p0=(int)frame[0];
                p1=(int)frame[1];
                p2=(int)frame[2];
                send = strtol(argv[4],NULL,16);
                wood = strtol(argv[5],NULL,16);
                suma=strtol(argv[6],NULL,16);
                sum=p0+p1+p2+wood+send;
                if(suma!=sum)
                {
                    puts("Check sum error");
                    BadcmdAW();
                }
                else
                {
                    printf("\n1 Command Allow WATER: ");
                    printf("%c%c%c ", frame[0],frame[1],frame[2]);
                    printf("%#x %#x ", send, wood);
                    printf("%#x ", sum);
                }
            }
    }
    else
    {
        puts("CRITICAL ERROR!!!");
    }
    }
    return 0;
}

